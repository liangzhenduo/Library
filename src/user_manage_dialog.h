#ifndef USER_MANAGE_DIALOG_H
#define USER_MANAGE_DIALOG_H

#include "public.h"
#include <QDialog>

namespace Ui {
class user_manage_Dialog;
}

class user_manage_Dialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit user_manage_Dialog(QWidget *parent = 0);
    ~user_manage_Dialog();
    
private slots:
    void on_newuser_add_Button_clicked();

    void on_guide_user_Button_clicked();

    void on_guide_overuser_Button_clicked();

    void on_guide_newuser_Button_clicked();

    void on_manageuser_modify_Button_clicked();

    void on_userview_clicked(const QModelIndex &index);

    void on_manageuser_delete_Button_clicked();

private:
    Ui::user_manage_Dialog *ui;
    QString user_list_stuid[5000];

};

#endif // USER_MANAGE_DIALOG_H

