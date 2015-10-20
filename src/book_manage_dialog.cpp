#include "book_manage_dialog.h"
#include "ui_book_manage_dialog.h"
#include <QFileDialog>

book_manage_Dialog::book_manage_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::book_manage_Dialog)
{
    ui->setupUi(this);
    book_manage_Dialog::on_guide_booklist_clicked();
}

book_manage_Dialog::~book_manage_Dialog()
{
    delete ui;
}

void book_manage_Dialog::on_single_add_clicked()
{
    QString isbn = ui->single_isbn->text();
    QString title = ui->single_title->text();
    QString author = ui->single_author->text();
    QString type = ui->single_type->text();
    QString press = ui->single_press->text();
    double price = ui->single_price->text().toDouble();
    int year = ui->single_year->text().toInt();
    int num = ui->single_num->currentText().toInt();

    if(isbn != ""){
        QSqlQuery query(tr("SELECT title, author, type, pub_press, price, pub_year, num_total FROM qlms_book WHERE isbn = '%1'").arg(isbn));
        if (query.next()) {  //图书已存在
            title = query.value(0).toString();
            author = query.value(1).toString();
            type = query.value(2).toString();
            press = query.value(3).toString();
            price = query.value(4).toDouble();
            year = query.value(5).toInt();
            int cur_num = query.value(6).toInt();
            int msg_ret = QMessageBox::information(this, tr("WARNING"), tr("该图书当前馆藏%1本，是否继续添加？").arg(cur_num), QMessageBox::Yes | QMessageBox::No);
            if (msg_ret == QMessageBox::No) return;
            if(num + cur_num > 10) {
                QMessageBox::warning(this, tr("ERROR"), tr("图书数量超出限制，请重新选择数量！"));
                ui->single_num->setFocus();
                return;
            }
            for (int i=0;i<num;i++) {
                QSqlQuery(tr("INSERT INTO qlms_book_item (isbn,status) VALUES('%1',1,'%2')").arg(isbn));

            }
            QSqlQuery(tr("UPDATE qlms_book SET num_total = num_total + %1 WHERE isbn = '%2'").arg(ui->single_num->currentText()).arg(isbn));
            QMessageBox::information(this, tr("操作成功"), tr("图书已经完成入库操作"));

            ui->single_num->setCurrentIndex(0);
            ui->single_price->setText("");
            ui->single_press->setText("");
            ui->single_year->setText("");
            ui->single_title->setText("");
            ui->single_type->setText("");
            ui->single_author->setText("");
            ui->single_isbn->setText("");
            return;
        }
    }

    //图书不存在
    if (title == "") {
        QMessageBox::warning(this, tr("ERROR"), tr("请填写书目！"));
        ui->single_title->setFocus();
        return;
    }
    if (isbn == "") {
        QMessageBox::warning(this, tr("ERROR"), tr("请填写ISBN！"));
        ui->single_isbn->setFocus();
        return;
    }
    if (author == "") {
        QMessageBox::warning(this, tr("ERROR"), tr("请填写作者！"));
        ui->single_author->setFocus();
        return;
    }
    if (type == "") {
        QMessageBox::warning(this, tr("ERROR"), tr("请填写类型！"));
        ui->single_type->setFocus();
        return;
    }
    if (press == "") {
        QMessageBox::warning(this, tr("ERROR"), tr("请填写出版社！"));
        ui->single_press->setFocus();
        return;
    }
    if (price <= 0 || price > 4096) {
        QMessageBox::warning(this, tr("ERROR"), tr("请填写有效单价！"));
        ui->single_price->setFocus();
        return;
    }
    if (year < 1895 || year > 2095) {
        QMessageBox::warning(this, tr("ERROR"), tr("请填写有效年份！"));
        ui->single_year->setFocus();
        return;
    }


    QSqlQuery(tr("INSERT INTO qlms_book (isbn, title, type, pub_press, pub_year, author, price, num_total) VALUES('%1', '%2', '%3', '%4', %5, '%6', %7, %8)").arg(isbn).arg(title).arg(type).arg(press).arg(year).arg(author).arg(price).arg(num));
    for (int i=0;i<num;i++)
        QSqlQuery(tr("INSERT INTO qlms_book_item (isbn,status) VALUES('%1',1,'%2')").arg(isbn));
    QMessageBox::information(this, tr("操作成功"), tr("图书已经完成录入操作"));

    ui->single_num->setCurrentIndex(0);
    ui->single_price->setText("");
    ui->single_press->setText("");
    ui->single_year->setText("");
    ui->single_title->setText("");
    ui->single_type->setText("");
    ui->single_author->setText("");
    ui->single_isbn->setText("");
}

void book_manage_Dialog::on_guide_booklist_clicked()
{
    QSqlQuery query("SELECT isbn,title,type,pub_press,pub_year,author,price,num_total FROM qlms_book ORDER BY isbn");

    QStandardItemModel* listModel=new QStandardItemModel(0,5,this);
    listModel->insertRow(0);
    listModel->setData(listModel->index(0,0), tr("ISBN"));
    listModel->setData(listModel->index(0,1), tr("图书名称"));
    listModel->setData(listModel->index(0,2), tr("出版社"));
    listModel->setData(listModel->index(0,3), tr("作者"));
    listModel->setData(listModel->index(0,4), tr("数量"));

    int i(1);

    while (query.next()) {
        listModel->insertRow(i);
        book_isbn[i] = query.value(0).toString();
        listModel->setData(listModel->index(i,0), query.value(0).toString());
        listModel->setData(listModel->index(i,1), query.value(1).toString());
        listModel->setData(listModel->index(i,2), query.value(3).toString());
        listModel->setData(listModel->index(i,3), query.value(5).toString());
        listModel->setData(listModel->index(i,4), query.value(7).toString());

        i++;
    }

    ui->userview->setModel(listModel);

    ui->group_booklist->show();
    ui->group_add_single->hide();
}

void book_manage_Dialog::on_guide_add_single_clicked()
{
    ui->group_add_single->show();
    ui->group_booklist->hide();
}

void book_manage_Dialog::on_userview_clicked(const QModelIndex &index)
{
    if (index.row() < 1) return;

    emit signal_load_item(book_isbn[index.row()]);
    emit signal_show_dialog(1);
}
