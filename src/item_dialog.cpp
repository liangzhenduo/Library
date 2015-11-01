#include "item_dialog.h"
#include "ui_item_dialog.h"

item_Dialog::item_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::item_Dialog)
{
    ui->setupUi(this);
}

item_Dialog::~item_Dialog()
{
    delete ui;
}

void item_Dialog::onsignal_load_item(QString isbn) {
    global_isbn = isbn;
    QSqlQuery query("SELECT title, isbn, type, pub_press, pub_year, author, price, num_total FROM book WHERE isbn = '" + global_isbn + "'");

    if (!query.next()) {
        QMessageBox::warning(this, tr("ERROR"), tr("未检索到该记录！"));
        this->close();
        return;
    }

    QString html;
    html = tr("<table width=\"560\" border=\"0\">");
    html = html + tr("<tr><td colspan=\"2\">图书名称：%1</td></tr>").arg(query.value(0).toString());
    html = html + tr("<tr><td>图书类型：%1</td>\n<td>ISBN：%2</td></tr>").arg(query.value(2).toString()).arg(query.value(1).toString());
    html = html + tr("<tr colspan=\"2\"><td>出版社：%1</td></tr>").arg(query.value(3).toString());
    html = html + tr("<tr colspan=\"2\"><td>作者：%1</td></tr>").arg(query.value(5).toString());
    html = html + tr("<tr><td>出版年份：%1</td>\n").arg(query.value(4).toString());
    html = html + tr("<tr><td>单册价格：%1</td>\n<td>馆藏数量：%2册</td></tr>").arg(query.value(6).toString()).arg(query.value(7).toString());
    html = html + tr("</table");

    ui->item_label->setText(html);

    QSqlQuery query_list(tr("SELECT item.id, type, item.status, name FROM item LEFT JOIN book ON (item.isbn=book.isbn) LEFT JOIN record ON (record.id = item.id AND record.status = 0) LEFT JOIN user ON (user.stuid = record.stuid) WHERE item.isbn = '%1' ORDER BY status DESC, id;").arg(isbn));

    QStandardItemModel* booklistModel=new QStandardItemModel(0,4,this);
    booklistModel->insertRow(0);
    booklistModel->setData(booklistModel->index(0,0), tr("图书编号"));
    booklistModel->setData(booklistModel->index(0,1), tr("图书位置"));
    booklistModel->setData(booklistModel->index(0,2), tr("单册状态"));
    booklistModel->setData(booklistModel->index(0,3), tr("借书者"));

    int i(1);

    while (query_list.next()) {  //显示图书信息
        booklistModel->insertRow(i);
        query_list_book[i] = query_list.value(0).toString();
        booklistModel->setData(booklistModel->index(i,0), query_list.value(0).toString());
        booklistModel->setData(booklistModel->index(i,1), query_list.value(1).toString());
        if (query_list.value(2).toInt() == 1) {
            booklistModel->setData(booklistModel->index(i,2), tr("在馆"));
            booklistModel->setData(booklistModel->index(i,3), tr("-"));
        }
        else if (query_list.value(2).toInt() == -1) {
            booklistModel->setData(booklistModel->index(i,2), tr("修补中"));
            booklistModel->setData(booklistModel->index(i,3), tr("-"));
        }
        else {
            booklistModel->setData(booklistModel->index(i,2), tr("已借出"));
            booklistModel->setData(booklistModel->index(i,3), query_list.value(3).toString());
        }

        i++;
    }

    ui->bookview->setModel(booklistModel);
}

void item_Dialog::on_bookview_clicked(const QModelIndex &index)
{
    if (index.row() == 0) return;

    QSqlQuery query(tr("SELECT id, status, isbn FROM item WHERE id = '%1'").arg(query_list_book[index.row()]));

    if (!TJUL.check_isLogin()) {
        QMessageBox::warning(this, tr("ERROR"), tr("请登录后进行借阅操作！"));
        return;
    }

    if (!query.next()) {
        QMessageBox::warning(this, tr("ERROR"), tr("未检索到该记录！"));
        return;
    }

    if (query.value(1).toInt() < 1) {
        QMessageBox::warning(this, tr("ERROR"), tr("当前图书无法进行借阅操作！"));
        return;
    }
    else {
        int msg_ret = QMessageBox::information(this, tr("CONFIRM"), tr("请确认是否借阅该册图书？"), QMessageBox::Yes | QMessageBox::No);
        if (msg_ret == QMessageBox::No) return;

        if (TJUL.modify_user_book(1)) {  //借书操作
            QSqlQuery(tr("UPDATE item SET status = 0 WHERE id = '%1'").arg(query_list_book[index.row()]));
            QSqlQuery(tr("INSERT INTO record (id, stuid, status, time_borrow, time_deadline, time_return) VALUES('%1', '%2', 0, NOW(), DATE_ADD(NOW(),INTERVAL 30 DAY), NULL)").arg(query_list_book[index.row()]).arg(TJUL.stuid));
            QSqlQuery query_depart("SELECT school FROM user WHERE stuid = '" + TJUL.stuid + "'");
            query_depart.next();
            QString tmp=query_depart.value(0).toString();
            QSqlQuery("UPDATE rank SET s" + tmp + " = s" + tmp +" +1 WHERE isbn = '" + query.value(2).toString() +"'");

            QMessageBox::information(this, tr("SUCCESS"), tr("该册读书借阅完成！"));
            item_Dialog::onsignal_load_item(global_isbn);
        }
        else {
            QMessageBox::warning(this, tr("ERROR"), tr("当前借阅数量已达上限！"));
            return;
        }
    }
}
