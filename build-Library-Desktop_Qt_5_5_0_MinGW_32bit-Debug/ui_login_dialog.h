/********************************************************************************
** Form generated from reading UI file 'login_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_DIALOG_H
#define UI_LOGIN_DIALOG_H

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

QT_BEGIN_NAMESPACE

class Ui_login_Dialog
{
public:
    QGroupBox *login_groupBox;
    QLineEdit *login_stuid_label;
    QLabel *label;
    QLineEdit *login_password_label;
    QLabel *label_2;
    QPushButton *login_action_button;
    QPushButton *login_cancel_button;

    void setupUi(QDialog *login_Dialog)
    {
        if (login_Dialog->objectName().isEmpty())
            login_Dialog->setObjectName(QStringLiteral("login_Dialog"));
        login_Dialog->resize(416, 300);
        login_groupBox = new QGroupBox(login_Dialog);
        login_groupBox->setObjectName(QStringLiteral("login_groupBox"));
        login_groupBox->setGeometry(QRect(20, 30, 381, 241));
        login_stuid_label = new QLineEdit(login_groupBox);
        login_stuid_label->setObjectName(QStringLiteral("login_stuid_label"));
        login_stuid_label->setGeometry(QRect(130, 50, 151, 31));
        label = new QLabel(login_groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 60, 54, 12));
        login_password_label = new QLineEdit(login_groupBox);
        login_password_label->setObjectName(QStringLiteral("login_password_label"));
        login_password_label->setGeometry(QRect(130, 110, 151, 31));
        login_password_label->setEchoMode(QLineEdit::Password);
        label_2 = new QLabel(login_groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 120, 54, 12));
        login_action_button = new QPushButton(login_groupBox);
        login_action_button->setObjectName(QStringLiteral("login_action_button"));
        login_action_button->setGeometry(QRect(90, 180, 91, 31));
        login_cancel_button = new QPushButton(login_groupBox);
        login_cancel_button->setObjectName(QStringLiteral("login_cancel_button"));
        login_cancel_button->setGeometry(QRect(200, 180, 91, 31));

        retranslateUi(login_Dialog);

        QMetaObject::connectSlotsByName(login_Dialog);
    } // setupUi

    void retranslateUi(QDialog *login_Dialog)
    {
        login_Dialog->setWindowTitle(QApplication::translate("login_Dialog", "\347\231\273\345\275\225 - \346\261\202\346\230\257\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        login_groupBox->setTitle(QApplication::translate("login_Dialog", "\347\231\273\345\275\225", 0));
        label->setText(QApplication::translate("login_Dialog", "\345\255\246\345\217\267\357\274\232", 0));
        label_2->setText(QApplication::translate("login_Dialog", "\345\257\206\347\240\201\357\274\232", 0));
        login_action_button->setText(QApplication::translate("login_Dialog", "\347\231\273\345\275\225", 0));
        login_cancel_button->setText(QApplication::translate("login_Dialog", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class login_Dialog: public Ui_login_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_DIALOG_H
