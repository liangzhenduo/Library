#ifndef BOOK_DIALOG_H
#define BOOK_DIALOG_H

#include "public.h"
#include <QDialog>

namespace Ui {
class book_Dialog;
}

class book_Dialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit book_Dialog(QWidget *parent = 0);
    ~book_Dialog();
    
private slots:
    void on_return_Button_clicked();
    void on_search_Button_clicked();

    void on_borrowedbookview_clicked(const QModelIndex &index);

signals:
    void signal_load_item(QString isbn);
    void signal_show_dialog(int dialog_id);

private:
    Ui::book_Dialog *ui;
    QString book_isbn[MXN];
    QStandardItemModel* booklistModel;
    int line;
};

#endif // BOOK_DIALOG_H
