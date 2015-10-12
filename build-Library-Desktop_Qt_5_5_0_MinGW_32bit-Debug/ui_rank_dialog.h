/********************************************************************************
** Form generated from reading UI file 'rank_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANK_DIALOG_H
#define UI_RANK_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_rank_Dialog
{
public:

    void setupUi(QDialog *rank_Dialog)
    {
        if (rank_Dialog->objectName().isEmpty())
            rank_Dialog->setObjectName(QStringLiteral("rank_Dialog"));
        rank_Dialog->resize(400, 300);

        retranslateUi(rank_Dialog);

        QMetaObject::connectSlotsByName(rank_Dialog);
    } // setupUi

    void retranslateUi(QDialog *rank_Dialog)
    {
        rank_Dialog->setWindowTitle(QApplication::translate("rank_Dialog", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class rank_Dialog: public Ui_rank_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANK_DIALOG_H
