#include "book_dialog.h"
#include "ui_book_dialog.h"

book_Dialog::book_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::book_Dialog)
{
    ui->setupUi(this);
    line=1;
    ui->keyword_edit->setText("");
    booklistModel=new QStandardItemModel(0,5,this);
    booklistModel->insertRow(0);
    booklistModel->setData(booklistModel->index(0,0), tr("图书ISBN"));
    booklistModel->setData(booklistModel->index(0,1), tr("图书名称"));
    booklistModel->setData(booklistModel->index(0,2), tr("作者"));
    booklistModel->setData(booklistModel->index(0,3), tr("馆藏数量"));
    booklistModel->setData(booklistModel->index(0,4), tr("出版社"));
    ui->borrowedbookview->setModel(booklistModel);
}

book_Dialog::~book_Dialog()
{
    delete ui;
}

void book_Dialog::on_return_Button_clicked()
{
    for(int i=line;i>0;i--)
        booklistModel->removeRow(i);
    ui->keyword_edit->setText("");
    this->close();
}

void book_Dialog::on_search_Button_clicked()
{
    int i;
    for(i=line;i>0;i--)
        booklistModel->removeRow(i);
    QString keyword = ui->keyword_edit->text();

    QSqlQuery query("SELECT isbn, title, author, num_total, pub_press FROM qlms_book WHERE title LIKE '%" + keyword + "%' ORDER BY isbn");

    for (i=1;query.next();i++) {
        booklistModel->insertRow(i);
        book_isbn[i] = query.value(0).toString();
        booklistModel->setData(booklistModel->index(i,0), query.value(0).toString());
        booklistModel->setData(booklistModel->index(i,1), query.value(1).toString());
        booklistModel->setData(booklistModel->index(i,2), query.value(2).toString());
        booklistModel->setData(booklistModel->index(i,3), query.value(3).toString());
        booklistModel->setData(booklistModel->index(i,4), query.value(4).toString());
    }
    line=i-1;
}

void book_Dialog::on_borrowedbookview_clicked(const QModelIndex &index)
{
    if (index.row() == 0) return;
    emit signal_load_item(book_isbn[index.row()]);
    emit signal_show_dialog(1);
}
