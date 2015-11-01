#include "rank_dialog.h"
#include "ui_rank_dialog.h"

rank_Dialog::rank_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rank_Dialog)
{
    ui->setupUi(this);
    line=1;
    booklistModel=new QStandardItemModel(0,6,this);
    booklistModel->insertRow(0);
    booklistModel->setData(booklistModel->index(0,0), tr("排名"));
    booklistModel->setData(booklistModel->index(0,1), tr("ISBN"));
    booklistModel->setData(booklistModel->index(0,2), tr("图书名称"));
    booklistModel->setData(booklistModel->index(0,3), tr("作者"));
    booklistModel->setData(booklistModel->index(0,4), tr("出版社"));
    booklistModel->setData(booklistModel->index(0,5), tr("借阅次数"));
    ui->bookrankview->setModel(booklistModel);
}

rank_Dialog::~rank_Dialog()
{
    delete ui;
}

void rank_Dialog::on_return_Button_clicked()
{
    for(int i=line;i>0;i--)
        booklistModel->removeRow(i);
    ui->school_select->setCurrentIndex(-1);
    this->close();
}

void rank_Dialog::on_search_Button_clicked()
{
    int i;
    for(i=line;i>0;i--)
        booklistModel->removeRow(i);

    QString school=ui->school_select->currentText();
    if (school == "" ) {  //未选择学院
        QMessageBox::warning(this, tr("WARNING"), tr("请选择学院！"));
        return;
    }

    QSqlQuery query_depart("SELECT code FROM school WHERE school = '"+school+"\r'");
    query_depart.next();
    QString tmp=query_depart.value(0).toString();
    QSqlQuery query("SELECT book.isbn, book.title, book.author, book.pub_press, rank.s"+tmp+" FROM book LEFT JOIN rank ON rank.isbn = book.isbn WHERE rank.s"+tmp+">0 ORDER BY rank.s" + tmp + " DESC");

    for(i=1;query.next();i++) {
        booklistModel->insertRow(i);
        book_isbn[i] = query.value(0).toString();
        booklistModel->setData(booklistModel->index(i,0), i);
        booklistModel->setData(booklistModel->index(i,1), query.value(0).toString());
        booklistModel->setData(booklistModel->index(i,2), query.value(1).toString());
        booklistModel->setData(booklistModel->index(i,3), query.value(2).toString());
        booklistModel->setData(booklistModel->index(i,4), query.value(3).toString());
        booklistModel->setData(booklistModel->index(i,5), query.value(4).toString());
    }
    line=i-1;
}

void rank_Dialog::on_bookrankview_clicked(const QModelIndex &index)
{
    if (index.row() == 0) return;
    emit signal_load_item(book_isbn[index.row()]);
    emit signal_show_dialog(1);
}
