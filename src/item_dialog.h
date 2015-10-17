#ifndef ITEM_DIALOG_H
#define ITEM_DIALOG_H

#include "qlms_public.h"
#include <QDialog>

namespace Ui {
class item_Dialog;
}

class item_Dialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit item_Dialog(QWidget *parent = 0);
    ~item_Dialog();
    
private:
    Ui::item_Dialog *ui;
    int query_list_book[MXN];
    QString global_isbn;

private slots:
    void onsignal_load_item(QString isbn);

    void on_bookview_clicked(const QModelIndex &index);
};

#endif // ITEM_DIALOG_H
