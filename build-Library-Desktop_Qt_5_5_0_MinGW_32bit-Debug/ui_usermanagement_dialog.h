/********************************************************************************
** Form generated from reading UI file 'usermanagement_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERMANAGEMENT_DIALOG_H
#define UI_USERMANAGEMENT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeView>

QT_BEGIN_NAMESPACE

class Ui_userManagement_Dialog
{
public:
    QGroupBox *group_newuser;
    QPushButton *newuser_add_Button;
    QLineEdit *newuser_stuid;
    QLabel *label;
    QLineEdit *newuser_password;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *newuser_department;
    QLineEdit *newuser_num_limit;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *newuser_name;
    QComboBox *newuser_isadmin;
    QGroupBox *group_user;
    QGridLayout *gridLayout;
    QTreeView *userview;
    QGroupBox *group_manageuser;
    QPushButton *manageuser_modify_Button;
    QLineEdit *manage_stuid;
    QLabel *label_6;
    QLineEdit *manage_password;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *manage_department;
    QLineEdit *manage_num_limit;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *manage_name;
    QComboBox *manage_isadmin;
    QPushButton *manageuser_delete_Button;
    QGroupBox *group_nav;
    QPushButton *guide_newuser_Button;
    QPushButton *guide_user_Button;

    void setupUi(QDialog *userManagement_Dialog)
    {
        if (userManagement_Dialog->objectName().isEmpty())
            userManagement_Dialog->setObjectName(QStringLiteral("userManagement_Dialog"));
        userManagement_Dialog->resize(591, 374);
        group_newuser = new QGroupBox(userManagement_Dialog);
        group_newuser->setObjectName(QStringLiteral("group_newuser"));
        group_newuser->setEnabled(true);
        group_newuser->setGeometry(QRect(10, 80, 571, 271));
        newuser_add_Button = new QPushButton(group_newuser);
        newuser_add_Button->setObjectName(QStringLiteral("newuser_add_Button"));
        newuser_add_Button->setGeometry(QRect(390, 110, 111, 41));
        newuser_stuid = new QLineEdit(group_newuser);
        newuser_stuid->setObjectName(QStringLiteral("newuser_stuid"));
        newuser_stuid->setGeometry(QRect(200, 40, 131, 31));
        label = new QLabel(group_newuser);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 50, 41, 16));
        newuser_password = new QLineEdit(group_newuser);
        newuser_password->setObjectName(QStringLiteral("newuser_password"));
        newuser_password->setGeometry(QRect(200, 120, 131, 31));
        newuser_password->setEchoMode(QLineEdit::Password);
        label_2 = new QLabel(group_newuser);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 130, 41, 16));
        label_3 = new QLabel(group_newuser);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 170, 41, 16));
        newuser_department = new QLineEdit(group_newuser);
        newuser_department->setObjectName(QStringLiteral("newuser_department"));
        newuser_department->setGeometry(QRect(200, 160, 131, 31));
        newuser_num_limit = new QLineEdit(group_newuser);
        newuser_num_limit->setObjectName(QStringLiteral("newuser_num_limit"));
        newuser_num_limit->setGeometry(QRect(200, 200, 131, 31));
        label_4 = new QLabel(group_newuser);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 210, 61, 16));
        label_5 = new QLabel(group_newuser);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(100, 90, 41, 16));
        newuser_name = new QLineEdit(group_newuser);
        newuser_name->setObjectName(QStringLiteral("newuser_name"));
        newuser_name->setGeometry(QRect(200, 80, 131, 31));
        newuser_name->setEchoMode(QLineEdit::Normal);
        newuser_isadmin = new QComboBox(group_newuser);
        newuser_isadmin->setObjectName(QStringLiteral("newuser_isadmin"));
        newuser_isadmin->setGeometry(QRect(390, 40, 111, 31));
        group_user = new QGroupBox(userManagement_Dialog);
        group_user->setObjectName(QStringLiteral("group_user"));
        group_user->setEnabled(true);
        group_user->setGeometry(QRect(10, 83, 571, 271));
        gridLayout = new QGridLayout(group_user);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        userview = new QTreeView(group_user);
        userview->setObjectName(QStringLiteral("userview"));
        userview->setEnabled(true);
        QFont font;
        font.setPointSize(13);
        userview->setFont(font);
        userview->setContextMenuPolicy(Qt::NoContextMenu);
        userview->setEditTriggers(QAbstractItemView::NoEditTriggers);
        userview->setAlternatingRowColors(true);
        userview->setRootIsDecorated(false);
        userview->setHeaderHidden(true);

        gridLayout->addWidget(userview, 0, 0, 1, 1);

        group_manageuser = new QGroupBox(userManagement_Dialog);
        group_manageuser->setObjectName(QStringLiteral("group_manageuser"));
        group_manageuser->setEnabled(true);
        group_manageuser->setGeometry(QRect(10, 80, 571, 271));
        manageuser_modify_Button = new QPushButton(group_manageuser);
        manageuser_modify_Button->setObjectName(QStringLiteral("manageuser_modify_Button"));
        manageuser_modify_Button->setGeometry(QRect(390, 110, 111, 41));
        manage_stuid = new QLineEdit(group_manageuser);
        manage_stuid->setObjectName(QStringLiteral("manage_stuid"));
        manage_stuid->setEnabled(false);
        manage_stuid->setGeometry(QRect(200, 40, 131, 31));
        label_6 = new QLabel(group_manageuser);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(100, 50, 41, 16));
        manage_password = new QLineEdit(group_manageuser);
        manage_password->setObjectName(QStringLiteral("manage_password"));
        manage_password->setGeometry(QRect(200, 120, 131, 31));
        manage_password->setEchoMode(QLineEdit::Password);
        label_7 = new QLabel(group_manageuser);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(100, 130, 41, 16));
        label_8 = new QLabel(group_manageuser);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(100, 170, 41, 16));
        manage_department = new QLineEdit(group_manageuser);
        manage_department->setObjectName(QStringLiteral("manage_department"));
        manage_department->setGeometry(QRect(200, 160, 131, 31));
        manage_num_limit = new QLineEdit(group_manageuser);
        manage_num_limit->setObjectName(QStringLiteral("manage_num_limit"));
        manage_num_limit->setGeometry(QRect(200, 200, 131, 31));
        label_9 = new QLabel(group_manageuser);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(100, 210, 61, 16));
        label_10 = new QLabel(group_manageuser);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(100, 90, 41, 16));
        manage_name = new QLineEdit(group_manageuser);
        manage_name->setObjectName(QStringLiteral("manage_name"));
        manage_name->setGeometry(QRect(200, 80, 131, 31));
        manage_name->setEchoMode(QLineEdit::Normal);
        manage_isadmin = new QComboBox(group_manageuser);
        manage_isadmin->setObjectName(QStringLiteral("manage_isadmin"));
        manage_isadmin->setGeometry(QRect(390, 40, 111, 31));
        manageuser_delete_Button = new QPushButton(group_manageuser);
        manageuser_delete_Button->setObjectName(QStringLiteral("manageuser_delete_Button"));
        manageuser_delete_Button->setGeometry(QRect(390, 150, 111, 41));
        group_nav = new QGroupBox(userManagement_Dialog);
        group_nav->setObjectName(QStringLiteral("group_nav"));
        group_nav->setGeometry(QRect(10, 10, 571, 71));
        guide_newuser_Button = new QPushButton(group_nav);
        guide_newuser_Button->setObjectName(QStringLiteral("guide_newuser_Button"));
        guide_newuser_Button->setGeometry(QRect(160, 20, 101, 41));
        guide_user_Button = new QPushButton(group_nav);
        guide_user_Button->setObjectName(QStringLiteral("guide_user_Button"));
        guide_user_Button->setGeometry(QRect(60, 20, 101, 41));

        retranslateUi(userManagement_Dialog);

        QMetaObject::connectSlotsByName(userManagement_Dialog);
    } // setupUi

    void retranslateUi(QDialog *userManagement_Dialog)
    {
        userManagement_Dialog->setWindowTitle(QApplication::translate("userManagement_Dialog", "\347\224\250\346\210\267\347\256\241\347\220\206 - \346\261\202\346\230\257\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        group_newuser->setTitle(QApplication::translate("userManagement_Dialog", "\346\267\273\345\212\240\346\226\260\347\224\250\346\210\267", 0));
        newuser_add_Button->setText(QApplication::translate("userManagement_Dialog", "\345\210\233\345\273\272", 0));
        label->setText(QApplication::translate("userManagement_Dialog", "\345\255\246\345\217\267\357\274\232", 0));
        newuser_password->setText(QString());
        label_2->setText(QApplication::translate("userManagement_Dialog", "\345\257\206\347\240\201\357\274\232", 0));
        label_3->setText(QApplication::translate("userManagement_Dialog", "\351\203\250\351\227\250\357\274\232", 0));
        newuser_department->setText(QString());
        newuser_num_limit->setText(QApplication::translate("userManagement_Dialog", "10", 0));
        label_4->setText(QApplication::translate("userManagement_Dialog", "\345\200\237\344\271\246\344\270\212\351\231\220\357\274\232", 0));
        label_5->setText(QApplication::translate("userManagement_Dialog", "\345\247\223\345\220\215\357\274\232", 0));
        newuser_name->setText(QString());
        newuser_isadmin->clear();
        newuser_isadmin->insertItems(0, QStringList()
         << QApplication::translate("userManagement_Dialog", "\346\231\256\351\200\232\347\224\250\346\210\267", 0)
         << QApplication::translate("userManagement_Dialog", "\347\256\241\347\220\206\345\221\230", 0)
        );
        group_user->setTitle(QApplication::translate("userManagement_Dialog", "\347\224\250\346\210\267\347\256\241\347\220\206", 0));
        group_manageuser->setTitle(QApplication::translate("userManagement_Dialog", "\347\256\241\347\220\206\347\224\250\346\210\267", 0));
        manageuser_modify_Button->setText(QApplication::translate("userManagement_Dialog", "\344\277\256\346\224\271", 0));
        label_6->setText(QApplication::translate("userManagement_Dialog", "\345\255\246\345\217\267\357\274\232", 0));
        manage_password->setText(QString());
        label_7->setText(QApplication::translate("userManagement_Dialog", "\345\257\206\347\240\201\357\274\232", 0));
        label_8->setText(QApplication::translate("userManagement_Dialog", "\351\203\250\351\227\250\357\274\232", 0));
        manage_department->setText(QString());
        manage_num_limit->setText(QApplication::translate("userManagement_Dialog", "10", 0));
        label_9->setText(QApplication::translate("userManagement_Dialog", "\345\200\237\344\271\246\344\270\212\351\231\220\357\274\232", 0));
        label_10->setText(QApplication::translate("userManagement_Dialog", "\345\247\223\345\220\215\357\274\232", 0));
        manage_name->setText(QString());
        manage_isadmin->clear();
        manage_isadmin->insertItems(0, QStringList()
         << QApplication::translate("userManagement_Dialog", "\346\231\256\351\200\232\347\224\250\346\210\267", 0)
         << QApplication::translate("userManagement_Dialog", "\347\256\241\347\220\206\345\221\230", 0)
        );
        manageuser_delete_Button->setText(QApplication::translate("userManagement_Dialog", "\345\210\240\351\231\244", 0));
        group_nav->setTitle(QApplication::translate("userManagement_Dialog", "\346\223\215\344\275\234\351\200\211\351\241\271", 0));
        guide_newuser_Button->setText(QApplication::translate("userManagement_Dialog", "\346\267\273\345\212\240\347\224\250\346\210\267", 0));
        guide_user_Button->setText(QApplication::translate("userManagement_Dialog", "\347\224\250\346\210\267\347\256\241\347\220\206", 0));
    } // retranslateUi

};

namespace Ui {
    class userManagement_Dialog: public Ui_userManagement_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERMANAGEMENT_DIALOG_H
