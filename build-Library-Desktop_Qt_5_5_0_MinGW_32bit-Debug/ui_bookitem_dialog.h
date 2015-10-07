/********************************************************************************
** Form generated from reading UI file 'bookitem_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKITEM_DIALOG_H
#define UI_BOOKITEM_DIALOG_H

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

class Ui_bookitem_Dialog
{
public:
    QGroupBox *groupBox;
    QLabel *bookItem_label;
    QGroupBox *groupBox_2;
    QTreeView *bookview;

    void setupUi(QDialog *bookitem_Dialog)
    {
        if (bookitem_Dialog->objectName().isEmpty())
            bookitem_Dialog->setObjectName(QStringLiteral("bookitem_Dialog"));
        bookitem_Dialog->resize(625, 464);
        groupBox = new QGroupBox(bookitem_Dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 30, 581, 191));
        bookItem_label = new QLabel(groupBox);
        bookItem_label->setObjectName(QStringLiteral("bookItem_label"));
        bookItem_label->setGeometry(QRect(10, 10, 561, 171));
        groupBox_2 = new QGroupBox(bookitem_Dialog);
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

        retranslateUi(bookitem_Dialog);

        QMetaObject::connectSlotsByName(bookitem_Dialog);
    } // setupUi

    void retranslateUi(QDialog *bookitem_Dialog)
    {
        bookitem_Dialog->setWindowTitle(QApplication::translate("bookitem_Dialog", "\345\233\276\344\271\246\344\277\241\346\201\257", 0));
        groupBox->setTitle(QApplication::translate("bookitem_Dialog", "\345\233\276\344\271\246\350\257\246\346\203\205", 0));
        bookItem_label->setText(QString());
        groupBox_2->setTitle(QApplication::translate("bookitem_Dialog", "\345\215\225\345\206\214\345\233\276\344\271\246\346\270\205\345\215\225", 0));
    } // retranslateUi

};

namespace Ui {
    class bookitem_Dialog: public Ui_bookitem_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKITEM_DIALOG_H
