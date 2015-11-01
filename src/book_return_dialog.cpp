#include "book_return_dialog.h"
#include "ui_book_return_dialog.h"

book_return_Dialog::book_return_Dialog(QWidget *parent):
    QDialog(parent),
    ui(new Ui::book_return_Dialog)
{
    ui->setupUi(this);

    QStandardItemModel* booklistModel=new QStandardItemModel(0,4,this);
    booklistModel->insertRow(0);
    booklistModel->setData(booklistModel->index(0,0), tr("图书编号"));
    booklistModel->setData(booklistModel->index(0,1), tr("书目"));
    booklistModel->setData(booklistModel->index(0,2), tr("借阅时间"));
    booklistModel->setData(booklistModel->index(0,3), tr("归还时间"));

    ui->borrowedbookview->setModel(booklistModel);
}

book_return_Dialog::~book_return_Dialog()
{
    delete ui;
}

void book_return_Dialog::on_search_Button_clicked()
{
    if (ui->stuid_label->text() == "") {
        QMessageBox::warning(this, tr("WARNING"), tr("请输入学号！"));
        return;
    }

    QString stuid = ui->stuid_label->text();
    last_stuid = stuid;

    book_return_Dialog::load_book_list(last_stuid);
}

void book_return_Dialog::action_book_return(QString id)
{
    QSqlQuery query_item("SELECT uuid, item.status, stuid, item.isbn FROM item LEFT JOIN record ON (record.status = 0 AND record.id = item.id) WHERE item.id = '"+ id +"'");

    if (!query_item.next()) {
        QMessageBox::warning(this, tr("ERROR"), tr("未检索到该记录！"));
        return;
    }

    if (query_item.value(1).toInt() == 1) {
        QMessageBox::warning(this, tr("ERROR"), tr("该册图书已在馆！"));
        return;
    }

    QMessageBox box;
    box.setWindowTitle("CHOOSE");
    box.setText(tr("请选择要对该书进行的操作："));
    box.setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
    box.setButtonText(QMessageBox::Save,QString("修补"));
    box.setButtonText(QMessageBox::Discard,QString("淘汰"));
    box.setButtonText(QMessageBox::Cancel,QString("归还"));
    int msg_ret = box.exec();
    if (msg_ret == QMessageBox::Cancel) {
        if(query_item.value(1).toInt() == 0) {  //检测图书状态
            QSqlQuery(tr("UPDATE record SET status = 1, time_return = NOW() WHERE uuid = %1").arg(query_item.value(0).toInt()));
            QSqlQuery(tr("UPDATE user SET num_borrowed = num_borrowed - 1 WHERE stuid = %1").arg(query_item.value(2).toString()));
            QSqlQuery(tr("UPDATE item SET status = 1 WHERE id = '%1'").arg(id));

            QMessageBox::information(this, tr("SUCCESS"), tr("图书已归还入库！"));
        }
        else if(query_item.value(1).toInt() == -1) {  //图书归还入库
            QSqlQuery(tr("UPDATE item SET status = 1 WHERE id = '%1'").arg(id));

            QMessageBox::information(this, tr("SUCCESS"), tr("图书已修补完成入库！"));
        }
    }
    else if (msg_ret == QMessageBox::Save) {  //图书修补
        QSqlQuery(tr("UPDATE record SET status = 1, time_return = NOW() WHERE uuid = %1").arg(query_item.value(0).toInt()));
        QSqlQuery(tr("UPDATE user SET num_borrowed = num_borrowed - 1 WHERE stuid = %1").arg(query_item.value(2).toString()));
        QSqlQuery(tr("UPDATE item SET status = -1 WHERE id = '%1'").arg(id));

        QMessageBox::information(this, tr("SUCCESS"), tr("图书已登记修补！"));
    }
    else if (msg_ret == QMessageBox::Discard) {  //图书淘汰
        QSqlQuery(tr("UPDATE record SET status = 1, time_return = NOW() WHERE uuid = %1").arg(query_item.value(0).toInt()));
        QSqlQuery(tr("UPDATE user SET num_borrowed = num_borrowed - 1 WHERE stuid = '%1'").arg(query_item.value(2).toString()));
        QSqlQuery(tr("UPDATE book SET num_total = num_total - 1 WHERE isbn = '%1'").arg(query_item.value(3).toString()));
        QSqlQuery(tr("DELETE FROM item WHERE id = '%1'").arg(id));

        QMessageBox::information(this, tr("SUCCESS"), tr("图书已淘汰！"));
    }
    book_return_Dialog::load_book_list(last_stuid);
}

void book_return_Dialog::on_borrowedbookview_clicked(const QModelIndex &index)
{
    if (index.row() <1 ) return;

    book_return_Dialog::action_book_return(book_id_list[index.row()]);
}

void book_return_Dialog::on_return_Button_clicked()
{
    if (ui->bookId_label->text() == "") {
        QMessageBox::warning(this, tr("WARNING"), tr("请填写图书编号！"));
        return;
    }

    book_return_Dialog::action_book_return(ui->bookId_label->text());
}

void book_return_Dialog::load_book_list(QString stuid)
{
    QStandardItemModel* booklistModel=new QStandardItemModel(0,4,this);
    booklistModel->insertRow(0);
    booklistModel->setData(booklistModel->index(0,0), tr("图书编号"));
    booklistModel->setData(booklistModel->index(0,1), tr("书目"));
    booklistModel->setData(booklistModel->index(0,2), tr("借阅时间"));
    booklistModel->setData(booklistModel->index(0,3), tr("归还时间"));
    ui->borrowedbookview->setModel(booklistModel);

    QSqlQuery query_user("SELECT stuid, name, school, num_borrowed, num_limit FROM user WHERE stuid LIKE '" + stuid + "%'");

    if (!query_user.next()) {
        QMessageBox::warning(this, tr("ERROR"), tr("该用户不存在！"));
        return;
    }

    ui->stuid_label->setText(query_user.value(0).toString());
    QSqlQuery query_record("SELECT record.id, book.title, record.time_borrow, record.time_return, record.status FROM record LEFT JOIN item ON item.id = record.id LEFT JOIN book ON book.isbn = item.isbn WHERE record.stuid = "+ stuid +" ORDER BY record.status, record.uuid DESC");

    for(int i=1;query_record.next();i++) {
        booklistModel->insertRow(i);
        book_id_list[i] = query_record.value(0).toString();
        booklistModel->setData(booklistModel->index(i,0), query_record.value(0).toString());
        booklistModel->setData(booklistModel->index(i,1), query_record.value(1).toString());
        booklistModel->setData(booklistModel->index(i,2), query_record.value(2).toString());
        booklistModel->setData(booklistModel->index(i,3), query_record.value(4).toInt() == 0 ? tr("未归还") :query_record.value(3).toString());
    }
}
