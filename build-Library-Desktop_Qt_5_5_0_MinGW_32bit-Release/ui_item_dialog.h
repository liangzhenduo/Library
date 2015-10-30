/********************************************************************************
** Form generated from reading UI file 'item_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEM_DIALOG_H
#define UI_ITEM_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTreeView>

QT_BEGIN_NAMESPACE

class Ui_item_Dialog
{
public:
    QGroupBox *groupBox;
    QLabel *item_label;
    QGroupBox *groupBox_2;
    QTreeView *bookview;

    void setupUi(QDialog *item_Dialog)
    {
        if (item_Dialog->objectName().isEmpty())
            item_Dialog->setObjectName(QStringLiteral("item_Dialog"));
        item_Dialog->resize(625, 464);
        groupBox = new QGroupBox(item_Dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 30, 581, 191));
        item_label = new QLabel(groupBox);
        item_label->setObjectName(QStringLiteral("item_label"));
        item_label->setGeometry(QRect(10, 10, 561, 171));
        groupBox_2 = new QGroupBox(item_Dialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 230, 581, 221));
        bookview = new QTreeView(groupBox_2);
        bookview->setObjectName(QStringLiteral("bookview"));
        bookview->setGeometry(QRect(10, 20, 561, 191));
        QFont font;
        font.setPointSize(13);
        bookview->setFont(font);
        bookview->setContextMenuPolicy(Qt::NoContextMenu);
        bookview->setEditTriggers(QAbstractItemView::NoEditTriggers);
        bookview->setAlternatingRowColors(true);
        bookview->setRootIsDecorated(false);
        bookview->setHeaderHidden(true);
        bookview->header()->setDefaultSectionSize(180);
        bookview->header()->setMinimumSectionSize(30);

        retranslateUi(item_Dialog);

        QMetaObject::connectSlotsByName(item_Dialog);
    } // setupUi

    void retranslateUi(QDialog *item_Dialog)
    {
        item_Dialog->setWindowTitle(QApplication::translate("item_Dialog", "\345\233\276\344\271\246\344\277\241\346\201\257", 0));
        groupBox->setTitle(QApplication::translate("item_Dialog", "\345\233\276\344\271\246\350\257\246\346\203\205", 0));
        item_label->setText(QString());
        groupBox_2->setTitle(QApplication::translate("item_Dialog", "\345\215\225\345\206\214\345\233\276\344\271\246\346\270\205\345\215\225", 0));
    } // retranslateUi

};

namespace Ui {
    class item_Dialog: public Ui_item_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEM_DIALOG_H
