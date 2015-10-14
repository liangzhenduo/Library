#include "rank_dialog.h"
#include "ui_rank_dialog.h"
#include "qlms_public.h"

rank_Dialog::rank_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rank_Dialog)
{
    ui->setupUi(this);
}

rank_Dialog::~rank_Dialog()
{
    delete ui;
}

void rank_Dialog::on_return_Button_clicked()
{
    ui->book_group->hide();
    this->close();
}

void rank_Dialog::on_search_Button_clicked()
{
    QString keyword = ui->keyword_edit->text();
    QSqlQuery query_depart("SELECT code FROM department WHERE school = '"+keyword+"\r';");
    query_depart.next();
    QString tmp=query_depart.value(0).toString();
    QSqlQuery query("SELECT qlms_book.isbn, qlms_book.title, qlms_book.author, qlms_book.pub_press, statistics.s"+tmp+" FROM qlms_book LEFT JOIN statistics ON statistics.isbn = qlms_book.isbn WHERE statistics.s"+tmp+">0 ORDER BY statistics.s"+tmp+" DESC;");

    QStandardItemModel* booklistModel=new QStandardItemModel(0,5,this);
    booklistModel->insertRow(0);
    booklistModel->setData(booklistModel->index(0,0), tr("图书ISBN"));
    booklistModel->setData(booklistModel->index(0,1), tr("图书名称"));
    booklistModel->setData(booklistModel->index(0,2), tr("作者"));
    booklistModel->setData(booklistModel->index(0,3), tr("出版社"));
    booklistModel->setData(booklistModel->index(0,4), tr("借阅次数"));

    int i(1);

    while (query.next()) {
        booklistModel->insertRow(i);
        book_isbn[i] = query.value(0).toInt();
        booklistModel->setData(booklistModel->index(i,0), query.value(0).toString());
        booklistModel->setData(booklistModel->index(i,1), query.value(1).toString());
        booklistModel->setData(booklistModel->index(i,2), query.value(2).toString());
        booklistModel->setData(booklistModel->index(i,3), query.value(3).toString());
        booklistModel->setData(booklistModel->index(i,4), query.value(4).toString());

        i++;
    }

    ui->borrowedbookview->setModel(booklistModel);
    ui->book_group->show();
}

void rank_Dialog::on_signal_init_rank_dialog() {
    ui->keyword_edit->setText("");
    ui->book_group->hide();
}

void rank_Dialog::on_borrowedbookview_clicked(const QModelIndex &index)
{
    if (index.row() == 0) return;

    emit signal_show_dialog(1);
    emit signal_load_bookItem(book_isbn[index.row()]);
}
