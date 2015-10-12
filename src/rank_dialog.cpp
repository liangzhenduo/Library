#include "rank_dialog.h"
#include "ui_rank_dialog.h"
#include "qlms_public.h"

rank_Dialog::rank_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rank_Dialog)
{
    ui->setupUi(this);
}

rank_Dialog::~rank_Dialog()
{
    delete ui;
}
