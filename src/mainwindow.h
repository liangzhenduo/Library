#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "public.h"
#include <QMainWindow>

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
    item_Dialog* inst_item_Dialog;
    book_return_Dialog* inst_book_return_Dialog;
    user_manage_Dialog* inst_user_manage_Dialog;
    book_manage_Dialog* inst_book_manage_Dialog;

private slots:
    void on_login_action_button_clicked();
    void on_main_logout_Button_clicked();

    void on_main_userinfo_Button_clicked();
    void on_main_bookSearch_Button_clicked();
    void on_main_ranklist_Button_clicked();

    void onsignal_change_login_status();
    void onsignal_show_dialog(int dialog_id);

    void on_main_returnBook_Button_clicked();

    void on_main_manageUser_Button_clicked();

    void on_main_manageBook_Button_clicked();

signals:
    void signal_change_login_status();
    void signal_load_user_dialog();
};

extern TJUL_CLASS TJUL;
extern bool isLogin;

#endif // MAINWINDOW_H
