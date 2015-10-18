#ifndef USER_DIALOG_H
#define USER_DIALOG_H

#include "public.h"
#include <QDialog>

namespace Ui {
class user_Dialog;
}

class user_Dialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit user_Dialog(QWidget *parent = 0);
    ~user_Dialog();
    
private slots:
    void on_change_Button_clicked();
    void on_return_Button_clicked();
    void onsignal_load_user_dialog();

private:
    Ui::user_Dialog *ui;
    QStandardItemModel* booklistModel;
};

extern TJUL_CLASS TJUL;

#endif // USER_DIALOG_H
