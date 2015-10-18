#ifndef RANK_DIALOG_H
#define RANK_DIALOG_H

#include "public.h"
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

    void on_bookrankview_clicked(const QModelIndex &index);

signals:
    void signal_load_item(QString isbn);
    void signal_show_dialog(int dialog_id);

private:
    Ui::rank_Dialog *ui;
    QString book_isbn[MXN];
    QStandardItemModel* booklistModel;
    int line;
};

#endif // RANK_DIALOG_H
