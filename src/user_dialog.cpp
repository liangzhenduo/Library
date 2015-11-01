#include "user_dialog.h"
#include "ui_user_dialog.h"

user_Dialog::user_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::user_Dialog)
{
    ui->setupUi(this);
}

user_Dialog::~user_Dialog()
{
    delete ui;
}


void user_Dialog::on_return_Button_clicked()
{
    this->close();
}

void user_Dialog::on_change_Button_clicked()
{
    QString old_password,new_password,confirm_password;
    old_password = ui->old_password->text();
    new_password = ui->new_password->text();
    confirm_password = ui->confirm_password->text();
    QSqlQuery query("SELECT password FROM user WHERE stuid = "+TJUL.stuid);
    query.next();
    if(old_password!=query.value(0)){
        QMessageBox::warning(this, tr("ERROR"), tr("原始密码错误！"));
        ui->old_password->setText("");
        ui->old_password->setFocus();
        return;
    }
    if(new_password==""){
        QMessageBox::warning(this, tr("WARNING"), tr("密码不能为空！"));
        ui->new_password->setFocus();
        return;
    }
    if(confirm_password!=new_password){
        QMessageBox::warning(this, tr("WARNING"), tr("请重新确认密码！"));
        ui->confirm_password->setText("");
        ui->confirm_password->setFocus();
        return;
    }
    QSqlQuery("UPDATE user SET password = " + new_password + " WHERE stuid="+ TJUL.stuid);
    QMessageBox::warning(this, tr("SUCCESS"), tr("密码修改成功！"));
    ui->new_password->setText("");
    ui->old_password->setText("");
    ui->confirm_password->setText("");
    ui->old_password->setFocus();
}

void user_Dialog::onsignal_load_user_dialog()
{
    QSqlQuery query_user("SELECT user.name, user.stuid, school.school, user.num_borrowed, user.num_limit FROM user LEFT JOIN school ON school.code = user.school WHERE stuid = '" + TJUL.stuid + "'");
    if (!query_user.next()) {
        QMessageBox::warning(this, tr("ERROR"), tr("未检索到该记录！"));
        this->close();
        return;
    }

    QString label_html;
    label_html = tr("<p>姓名：%1</p><p>学号：%2</p><p>单位：%3</p><p>当前持有：%4</p><p>借书上限：%5</p>").arg(query_user.value(0).toString()).arg(query_user.value(1).toString()).arg(query_user.value(2).toString()).arg(query_user.value(3).toString()).arg(query_user.value(4).toString());

    ui->user_info_label->setText(label_html);

    QSqlQuery(tr("UPDATE record SET overtime = TIMESTAMPDIFF(DAY, NOW(), time_deadline) WHERE stuid = %1 AND status = 0").arg(TJUL.stuid));
    QSqlQuery query_record(tr("SELECT record.id, title, time_borrow, overtime FROM record LEFT JOIN item ON (item.id = record.id) LEFT JOIN book ON (book.isbn = item.isbn) WHERE (record.stuid = %1 AND record.status=0) ORDER BY record.id DESC").arg(TJUL.stuid));


    booklistModel=new QStandardItemModel(0,4,this);
    booklistModel->insertRow(0);
    booklistModel->setData(booklistModel->index(0,0), tr("图书编号"));
    booklistModel->setData(booklistModel->index(0,1), tr("书目"));
    booklistModel->setData(booklistModel->index(0,2), tr("借阅时间"));
    booklistModel->setData(booklistModel->index(0,3), tr("剩余天数"));

    for(int i=1;query_record.next();i++) {
        booklistModel->insertRow(i);
        booklistModel->setData(booklistModel->index(i,0), query_record.value(0).toString());
        booklistModel->setData(booklistModel->index(i,1), query_record.value(1).toString());
        booklistModel->setData(booklistModel->index(i,2), query_record.value(2).toString());
        booklistModel->setData(booklistModel->index(i,3), query_record.value(3).toInt() < 0 ? tr("已过期") : query_record.value(3).toString());
    }
    ui->borrowedbookview->setModel(booklistModel);
}
