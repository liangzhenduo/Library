#ifndef RANK_DIALOG_H
#define RANK_DIALOG_H

#include "qlms_public.h"
#include <QDialog>

namespace Ui {
class rank_Dialog;
}

class rank_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit rank_Dialog(QWidget *parent = 0);
    ~rank_Dialog();

private slots:
    void on_return_Button_clicked();
    void on_search_Button_clicked();

    void on_signal_init_rank_dialog();

    void on_borrowedbookview_clicked(const QModelIndex &index);

signals:
    void signal_load_bookItem(int isbn);
    void signal_show_dialog(int dialog_id);

private:
    Ui::rank_Dialog *ui;
    int book_isbn[MXN];
};

#endif // RANK_DIALOG_H
