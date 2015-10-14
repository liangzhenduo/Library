#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <ctime>
#include <cstdlib>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) {
        ui->setupUi(this);
        if (!QLMS.check_DatabaseConnect()) {
            QMessageBox::warning(this, tr("Connection Error"), tr("Couldn't connect to database server!\nPlease check your network connection and try again."));
            this->close();
    }
    ui->login_stuid_label->setFocus();

    inst_user_Dialog = new user_Dialog;
    inst_book_Dialog = new book_Dialog;
    inst_rank_Dialog = new rank_Dialog;
    inst_bookItem_Dialog = new bookitem_Dialog;
    inst_returnBook_Dialog = new returnBook_Dialog;
    inst_userManagement_Dialog = new userManagement_Dialog;
    inst_manageBook_Dialog = new manageBook_Dialog;
    connect(ui->login_password_label, SIGNAL(returnPressed()), ui->login_action_button, SIGNAL(clicked()), Qt::UniqueConnection);
    connect(this, SIGNAL(signal_change_login_status()), this, SLOT(on_signal_change_login_status()));
    connect(this, SIGNAL(signal_load_user_dialog()), inst_user_Dialog, SLOT(on_signal_load_user_dialog()));
    connect(this, SIGNAL(signal_init_book_dialog()), inst_book_Dialog, SLOT(on_signal_init_book_dialog()));
    connect(this, SIGNAL(signal_init_rank_dialog()), inst_rank_Dialog, SLOT(on_signal_init_rank_dialog()));
    connect(inst_book_Dialog, SIGNAL(signal_load_bookItem(int)), inst_bookItem_Dialog, SLOT(on_signal_load_bookItem(int)));
    connect(inst_book_Dialog, SIGNAL(signal_show_dialog(int)), this, SLOT(on_signal_show_dialog(int)));
    connect(inst_manageBook_Dialog, SIGNAL(signal_load_bookItem(int)), inst_bookItem_Dialog, SLOT(on_signal_load_bookItem(int)));
    connect(inst_manageBook_Dialog, SIGNAL(signal_show_dialog(int)), this, SLOT(on_signal_show_dialog(int)));

    MainWindow::on_signal_change_login_status();
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
        QMessageBox::warning(this, tr("Login Failed"), tr("学号不能为空！"));
        ui->login_stuid_label->setFocus();
        return;
    }

    if (password == "") {
        QMessageBox::warning(this, tr("Login Failed"), tr("密码不能为空！"));
        ui->login_password_label->setFocus();
        return;
    }

    QSqlQuery query("SELECT stuid, password, name, num_borrowed, num_limit, isadmin FROM qlms_user WHERE stuid = '" + stuid + "';");

    if (query.next()) {  //用户存在
        if (query.value(1) == password) {  //登录成功
            QLMS.isLogin = 1;
            QLMS.stuid = stuid;
            QLMS.name = query.value(2).toString();
            QLMS.name.replace("\r","");
            QLMS.isAdmin = query.value(5).toInt();
            QLMS.set_number(query.value(3).toInt(), query.value(4).toInt());
            QMessageBox::information(this, tr("Login Succeed"), tr("欢迎 %1 进入天津大学图书馆！").arg(QLMS.name));
            ui->login_stuid_label->setText("");
            ui->login_password_label->setText("");
            emit signal_change_login_status();
        }
        else {  //密码错误
            QMessageBox::warning(this, tr("Login Failed"), tr("密码与账号不匹配，请重试！"));
            ui->login_password_label->setText("");
            ui->login_password_label->setFocus();
        }
    }
    else {  //用户不存在
        QMessageBox::warning(this, tr("Login Failed"), tr("该用户不存在！"));
        ui->login_stuid_label->setText("");
        ui->login_password_label->setText("");
        ui->login_stuid_label->setFocus();
        return;
    }

}

void MainWindow::on_main_logout_Button_clicked() {
    if (QLMS.check_isUserLogin()) {
        QLMS.user_logout();
        MainWindow::on_signal_change_login_status();
    }
}

void MainWindow::on_signal_change_login_status(){
    if (QLMS.check_isUserLogin()) {
        ui->login_groupBox->hide();
        char *t = (char*)malloc(sizeof(char)*30);
        time_t now;
        time(&now);
        strftime(t, 30 , "%Y年%m月%d日 %H:%M:%S", localtime(&now));
        ui->main_user_status_label->setText(tr("账号： %1 【%2】  登录时间： %3").arg(QLMS.stuid).arg(QLMS.name).arg(t));
        ui->main_userinfo_Button->setEnabled(true);
        ui->main_ranklist_Button->setEnabled(true);
        if (QLMS.isAdmin) {
            ui->main_returnBook_Button->setEnabled(true);
            ui->main_manageBook_Button->setEnabled(true);
            ui->main_userManagement_Button->setEnabled(true);
        }
    } else {
        ui->login_groupBox->show();
        ui->main_user_status_label->setText("");
        ui->main_userinfo_Button->setEnabled(false);
        ui->main_ranklist_Button->setEnabled(false);
        ui->main_returnBook_Button->setEnabled(false);
        ui->main_manageBook_Button->setEnabled(false);
        ui->main_userManagement_Button->setEnabled(false);
    }
}

void MainWindow::on_main_userinfo_Button_clicked()
{
    if (!QLMS.check_isUserLogin()) {
        QMessageBox::warning(this, tr("尚未登录"), tr("亲，您尚未登录求是图书管理系统，请您登录后再查看您的信息"));
        return;
    }

    inst_user_Dialog->show();
    emit signal_load_user_dialog();
}

void MainWindow::on_main_bookSearch_Button_clicked()
{
    inst_book_Dialog->show();
    emit signal_init_book_dialog();
}

void MainWindow::on_main_ranklist_Button_clicked()
{
    inst_rank_Dialog->show();
    emit signal_init_rank_dialog();
}

void MainWindow::on_signal_show_dialog(int dialog_id) {
    switch (dialog_id) {
        case 1: inst_bookItem_Dialog->show();
    }
}

void MainWindow::on_main_returnBook_Button_clicked()
{
    if (!QLMS.check_isUserLogin() || !QLMS.isAdmin) {
        QMessageBox::warning(this, tr("尚未登录"), tr("亲，您尚未登录求是图书管理系统或者没有管理权限哟"));
        return;
    }

    inst_returnBook_Dialog->show();
}

void MainWindow::on_main_userManagement_Button_clicked()
{
    if (!QLMS.check_isUserLogin() || !QLMS.isAdmin) {
        QMessageBox::warning(this, tr("尚未登录"), tr("亲，您尚未登录求是图书管理系统或者没有管理权限哟"));
        return;
    }

    inst_userManagement_Dialog->show();
}

void MainWindow::on_main_manageBook_Button_clicked()
{
    if (!QLMS.check_isUserLogin() || !QLMS.isAdmin) {
        QMessageBox::warning(this, tr("尚未登录"), tr("亲，您尚未登录求是图书管理系统或者没有管理权限哟"));
        return;
    }

    inst_manageBook_Dialog->show();
}
