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

private:
    Ui::rank_Dialog *ui;
};

#endif // RANK_DIALOG_H
