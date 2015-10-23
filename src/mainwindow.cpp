#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <ctime>
#include <cstdlib>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) {
        ui->setupUi(this);
        if (!TJUL.check_DatabaseConnect()) {
            QMessageBox::warning(this, tr("Connection Error"), tr("Couldn't connect to database server!\nPlease check your network connection and try again."));
            this->close();
    }
    ui->login_stuid_label->setFocus();

    inst_user_Dialog = new user_Dialog;
    inst_book_Dialog = new book_Dialog;
    inst_rank_Dialog = new rank_Dialog;
    inst_item_Dialog = new item_Dialog;
    inst_book_return_Dialog = new book_return_Dialog;
    inst_user_manage_Dialog = new user_manage_Dialog;
    inst_book_manage_Dialog = new book_manage_Dialog;
    connect(ui->login_password_label, SIGNAL(returnPressed()), ui->login_action_button, SIGNAL(clicked()), Qt::UniqueConnection);
    connect(this, SIGNAL(signal_change_login_status()), this, SLOT(onsignal_change_login_status()));
    connect(this, SIGNAL(signal_load_user_dialog()), inst_user_Dialog, SLOT(onsignal_load_user_dialog()));
    connect(inst_book_Dialog, SIGNAL(signal_load_item(QString)), inst_item_Dialog, SLOT(onsignal_load_item(QString)));
    connect(inst_book_Dialog, SIGNAL(signal_show_dialog(int)), this, SLOT(onsignal_show_dialog(int)));
    connect(inst_rank_Dialog, SIGNAL(signal_load_item(QString)), inst_item_Dialog, SLOT(onsignal_load_item(QString)));
    connect(inst_rank_Dialog, SIGNAL(signal_show_dialog(int)), this, SLOT(onsignal_show_dialog(int)));
    connect(inst_book_manage_Dialog, SIGNAL(signal_load_item(QString)), inst_item_Dialog, SLOT(onsignal_load_item(QString)));
    connect(inst_book_manage_Dialog, SIGNAL(signal_show_dialog(int)), this, SLOT(onsignal_show_dialog(int)));

    MainWindow::onsignal_change_login_status();
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_login_action_button_clicked()
{
    QString stuid, password;
    stuid = ui->login_stuid_label->text();
    password = ui->login_password_label->text();

    if (stuid == "") {
        QMessageBox::warning(this, tr("WARNING"), tr("学号不能为空！"));
        ui->login_stuid_label->setFocus();
        return;
    }

    if (password == "") {
        QMessageBox::warning(this, tr("WARNING"), tr("密码不能为空！"));
        ui->login_password_label->setFocus();
        return;
    }

    QSqlQuery query("SELECT stuid, password, name, num_borrowed, num_limit, isadmin FROM user WHERE stuid = '" + stuid + "'");

    if (query.next()) {  //用户存在
        if (query.value(1) == password) {  //登录成功
            TJUL.isLogin = 1;
            TJUL.stuid = stuid;
            TJUL.name = query.value(2).toString();
            TJUL.name.replace("\r","");
            TJUL.isAdmin = query.value(5).toInt();
            TJUL.set_number(query.value(3).toInt(), query.value(4).toInt());
            QMessageBox::information(this, tr("SUCCESS"), tr("欢迎 %1 进入天津大学图书馆！").arg(TJUL.name));
            ui->login_stuid_label->setText("");
            ui->login_password_label->setText("");
            emit signal_change_login_status();
        }
        else {  //密码错误
            QMessageBox::warning(this, tr("ERROR"), tr("密码与账号不匹配，请重试！"));
            ui->login_password_label->setText("");
            ui->login_password_label->setFocus();
        }
    }
    else {  //用户不存在
        QMessageBox::warning(this, tr("ERROR"), tr("该用户不存在！"));
        ui->login_stuid_label->setText("");
        ui->login_password_label->setText("");
        ui->login_stuid_label->setFocus();
        return;
    }

}

void MainWindow::on_main_logout_Button_clicked() {
    if (TJUL.check_isLogin()) {
        TJUL.user_logout();
        MainWindow::onsignal_change_login_status();
    }
}

void MainWindow::onsignal_change_login_status(){
    if (TJUL.check_isLogin()) {
        ui->login_groupBox->hide();
        char *t = (char*)malloc(sizeof(char)*30);
        time_t now;
        time(&now);
        strftime(t, 30 , "%Y年%m月%d日 %H:%M:%S", localtime(&now));
        ui->main_user_status_label->setText(tr("账号： %1 【%2】  登录时间： %3").arg(TJUL.stuid).arg(TJUL.name).arg(t));
        ui->main_userinfo_Button->setEnabled(true);
        ui->main_ranklist_Button->setEnabled(true);
        if (TJUL.isAdmin) {
            ui->main_returnBook_Button->setEnabled(true);
            ui->main_manageBook_Button->setEnabled(true);
            ui->main_manageUser_Button->setEnabled(true);
        }
    } else {
        ui->login_groupBox->show();
        ui->main_user_status_label->setText("");
        ui->main_userinfo_Button->setEnabled(false);
        ui->main_ranklist_Button->setEnabled(false);
        ui->main_returnBook_Button->setEnabled(false);
        ui->main_manageBook_Button->setEnabled(false);
        ui->main_manageUser_Button->setEnabled(false);
    }
}

void MainWindow::on_main_userinfo_Button_clicked()
{
    inst_user_Dialog->show();
    emit signal_load_user_dialog();
}

void MainWindow::on_main_bookSearch_Button_clicked()
{
    inst_book_Dialog->show();
}

void MainWindow::on_main_ranklist_Button_clicked()
{
    inst_rank_Dialog->show();
}

void MainWindow::onsignal_show_dialog(int dialog_id) {
    switch (dialog_id) {
        case 1: inst_item_Dialog->show();
    }
}

void MainWindow::on_main_returnBook_Button_clicked()
{
    inst_book_return_Dialog->show();
}

void MainWindow::on_main_manageUser_Button_clicked()
{
    inst_user_manage_Dialog->show();
}

void MainWindow::on_main_manageBook_Button_clicked()
{
    inst_book_manage_Dialog->show();
}
