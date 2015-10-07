/********************************************************************************
** Form generated from reading UI file 'user_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_DIALOG_H
#define UI_USER_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeView>

QT_BEGIN_NAMESPACE

class Ui_user_Dialog
{
public:
    QGroupBox *groupBox;
    QLabel *user_info_label;
    QPushButton *return_Button;
    QGroupBox *groupBox_2;
    QTreeView *borrowedbookview;

    void setupUi(QDialog *user_Dialog)
    {
        if (user_Dialog->objectName().isEmpty())
            user_Dialog->setObjectName(QStringLiteral("user_Dialog"));
        user_Dialog->resize(610, 476);
        groupBox = new QGroupBox(user_Dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 591, 161));
        user_info_label = new QLabel(groupBox);
        user_info_label->setObjectName(QStringLiteral("user_info_label"));
        user_info_label->setGeometry(QRect(10, 20, 571, 131));
        return_Button = new QPushButton(user_Dialog);
        return_Button->setObjectName(QStringLiteral("return_Button"));
        return_Button->setGeometry(QRect(260, 430, 81, 31));
        groupBox_2 = new QGroupBox(user_Dialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 180, 591, 241));
        borrowedbookview = new QTreeView(groupBox_2);
        borrowedbookview->setObjectName(QStringLiteral("borrowedbookview"));
        borrowedbookview->setGeometry(QRect(10, 20, 570, 214));
        QFont font;
        font.setPointSize(13);
        borrowedbookview->setFont(font);
        borrowedbookview->setContextMenuPolicy(Qt::NoContextMenu);
        borrowedbookview->setEditTriggers(QAbstractItemView::NoEditTriggers);
        borrowedbookview->setAlternatingRowColors(true);
        borrowedbookview->setRootIsDecorated(false);
        borrowedbookview->setHeaderHidden(true);

        retranslateUi(user_Dialog);

        QMetaObject::connectSlotsByName(user_Dialog);
    } // setupUi

    void retranslateUi(QDialog *user_Dialog)
    {
        user_Dialog->setWindowTitle(QApplication::translate("user_Dialog", "\347\224\250\346\210\267\344\277\241\346\201\257", 0));
        groupBox->setTitle(QApplication::translate("user_Dialog", "\347\224\250\346\210\267\344\277\241\346\201\257", 0));
        user_info_label->setText(QString());
        return_Button->setText(QApplication::translate("user_Dialog", "\350\277\224\345\233\236", 0));
        groupBox_2->setTitle(QApplication::translate("user_Dialog", "\345\275\223\345\211\215\345\267\262\345\200\237", 0));
    } // retranslateUi

};

namespace Ui {
    class user_Dialog: public Ui_user_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_DIALOG_H
