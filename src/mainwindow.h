#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "qlms_public.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private:
    Ui::MainWindow *ui;
    user_Dialog* inst_user_Dialog;
    book_Dialog* inst_book_Dialog;
    rank_Dialog* inst_rank_Dialog;
    bookitem_Dialog* inst_bookItem_Dialog;
    returnBook_Dialog* inst_returnBook_Dialog;
    userManagement_Dialog* inst_userManagement_Dialog;
    manageBook_Dialog* inst_manageBook_Dialog;

private slots:
    void on_login_action_button_clicked();
    void on_main_logout_Button_clicked();

    void on_main_userinfo_Button_clicked();
    void on_main_bookSearch_Button_clicked();
    void on_main_ranklist_Button_clicked();

    void on_signal_change_login_status();
    void on_signal_show_dialog(int dialog_id);

    void on_main_returnBook_Button_clicked();

    void on_main_userManagement_Button_clicked();

    void on_main_manageBook_Button_clicked();

signals:
    void signal_change_login_status();
    void signal_load_user_dialog();
    void signal_init_book_dialog();
};

extern QLMS_CLASS QLMS;
extern bool isLogin;

#endif // MAINWINDOW_H
