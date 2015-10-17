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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeView>

QT_BEGIN_NAMESPACE

class Ui_user_Dialog
{
public:
    QGroupBox *groupBox;
    QLabel *user_info_label;
    QLineEdit *old_password;
    QLineEdit *new_password;
    QLineEdit *confirm_password;
    QPushButton *change_Button;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
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
        old_password = new QLineEdit(groupBox);
        old_password->setObjectName(QStringLiteral("old_password"));
        old_password->setGeometry(QRect(420, 30, 113, 20));
        old_password->setEchoMode(QLineEdit::Password);
        new_password = new QLineEdit(groupBox);
        new_password->setObjectName(QStringLiteral("new_password"));
        new_password->setGeometry(QRect(420, 60, 113, 20));
        new_password->setEchoMode(QLineEdit::Password);
        confirm_password = new QLineEdit(groupBox);
        confirm_password->setObjectName(QStringLiteral("confirm_password"));
        confirm_password->setGeometry(QRect(420, 90, 113, 20));
        confirm_password->setEchoMode(QLineEdit::Password);
        change_Button = new QPushButton(groupBox);
        change_Button->setObjectName(QStringLiteral("change_Button"));
        change_Button->setGeometry(QRect(430, 120, 75, 23));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(340, 30, 54, 12));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(340, 60, 54, 12));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(340, 100, 54, 12));
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
        change_Button->setText(QApplication::translate("user_Dialog", "\344\277\256\346\224\271\345\257\206\347\240\201", 0));
        label->setText(QApplication::translate("user_Dialog", "\345\216\237\345\247\213\345\257\206\347\240\201\357\274\232", 0));
        label_2->setText(QApplication::translate("user_Dialog", "\346\226\260\345\257\206\347\240\201\357\274\232", 0));
        label_3->setText(QApplication::translate("user_Dialog", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", 0));
        return_Button->setText(QApplication::translate("user_Dialog", "\350\277\224\345\233\236", 0));
        groupBox_2->setTitle(QApplication::translate("user_Dialog", "\345\275\223\345\211\215\345\267\262\345\200\237", 0));
    } // retranslateUi

};

namespace Ui {
    class user_Dialog: public Ui_user_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_DIALOG_H
