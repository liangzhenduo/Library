#ifndef BOOK_RETURN_DIALOG_H
#define BOOK_RETURN_DIALOG_H

#include "public.h"
#include <QDialog>

namespace Ui {
class book_return_Dialog;
}

class book_return_Dialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit book_return_Dialog(QWidget *parent = 0);
    ~book_return_Dialog();
    
private slots:
    void on_search_Button_clicked();

    void on_borrowedbookview_clicked(const QModelIndex &index);

    void on_return_Button_clicked();

private:
    Ui::book_return_Dialog *ui;

    QString book_id_list[5000];
    QString last_stuid;

    void action_book_return(QString id);
    void load_book_list(QString stuid);
};

#endif // BOOK_RETURN_DIALOG_H
