/********************************************************************************
** Form generated from reading UI file 'user_manage_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_MANAGE_DIALOG_H
#define UI_USER_MANAGE_DIALOG_H

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

class Ui_user_manage_Dialog
{
public:
    QGroupBox *group_newuser;
    QPushButton *newuser_add_Button;
    QLineEdit *newuser_stuid;
    QLabel *label;
    QLineEdit *newuser_password;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *newuser_name;
    QComboBox *newuser_isadmin;
    QLabel *label_11;
    QLineEdit *newuser_telnum;
    QLabel *label_12;
    QComboBox *newuser_num_limit;
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
    QLineEdit *manage_telnum;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *manage_name;
    QComboBox *manage_isadmin;
    QPushButton *manageuser_delete_Button;
    QComboBox *manage_num_limit;
    QLabel *label_3;
    QGroupBox *group_nav;
    QPushButton *guide_newuser_Button;
    QPushButton *guide_user_Button;
    QPushButton *guide_overuser_Button;
    QGroupBox *group_overuser;
    QGridLayout *gridLayout_2;
    QTreeView *overuserview;

    void setupUi(QDialog *user_manage_Dialog)
    {
        if (user_manage_Dialog->objectName().isEmpty())
            user_manage_Dialog->setObjectName(QStringLiteral("user_manage_Dialog"));
        user_manage_Dialog->resize(591, 374);
        group_newuser = new QGroupBox(user_manage_Dialog);
        group_newuser->setObjectName(QStringLiteral("group_newuser"));
        group_newuser->setEnabled(true);
        group_newuser->setGeometry(QRect(10, 80, 571, 271));
        newuser_add_Button = new QPushButton(group_newuser);
        newuser_add_Button->setObjectName(QStringLiteral("newuser_add_Button"));
        newuser_add_Button->setGeometry(QRect(230, 220, 96, 36));
        newuser_stuid = new QLineEdit(group_newuser);
        newuser_stuid->setObjectName(QStringLiteral("newuser_stuid"));
        newuser_stuid->setGeometry(QRect(270, 30, 128, 24));
        label = new QLabel(group_newuser);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 30, 64, 24));
        newuser_password = new QLineEdit(group_newuser);
        newuser_password->setObjectName(QStringLiteral("newuser_password"));
        newuser_password->setGeometry(QRect(270, 90, 128, 24));
        newuser_password->setEchoMode(QLineEdit::Password);
        label_2 = new QLabel(group_newuser);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(170, 90, 64, 24));
        label_4 = new QLabel(group_newuser);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(170, 150, 64, 24));
        label_5 = new QLabel(group_newuser);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(170, 60, 64, 24));
        newuser_name = new QLineEdit(group_newuser);
        newuser_name->setObjectName(QStringLiteral("newuser_name"));
        newuser_name->setGeometry(QRect(270, 60, 128, 24));
        newuser_name->setEchoMode(QLineEdit::Normal);
        newuser_isadmin = new QComboBox(group_newuser);
        newuser_isadmin->setObjectName(QStringLiteral("newuser_isadmin"));
        newuser_isadmin->setGeometry(QRect(270, 180, 128, 24));
        label_11 = new QLabel(group_newuser);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(170, 120, 64, 24));
        newuser_telnum = new QLineEdit(group_newuser);
        newuser_telnum->setObjectName(QStringLiteral("newuser_telnum"));
        newuser_telnum->setGeometry(QRect(270, 120, 128, 24));
        label_12 = new QLabel(group_newuser);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(170, 180, 64, 24));
        newuser_num_limit = new QComboBox(group_newuser);
        newuser_num_limit->setObjectName(QStringLiteral("newuser_num_limit"));
        newuser_num_limit->setGeometry(QRect(270, 150, 128, 24));
        group_user = new QGroupBox(user_manage_Dialog);
        group_user->setObjectName(QStringLiteral("group_user"));
        group_user->setEnabled(true);
        group_user->setGeometry(QRect(10, 80, 571, 271));
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

        group_manageuser = new QGroupBox(user_manage_Dialog);
        group_manageuser->setObjectName(QStringLiteral("group_manageuser"));
        group_manageuser->setEnabled(true);
        group_manageuser->setGeometry(QRect(10, 80, 571, 271));
        manageuser_modify_Button = new QPushButton(group_manageuser);
        manageuser_modify_Button->setObjectName(QStringLiteral("manageuser_modify_Button"));
        manageuser_modify_Button->setGeometry(QRect(170, 220, 96, 36));
        manage_stuid = new QLineEdit(group_manageuser);
        manage_stuid->setObjectName(QStringLiteral("manage_stuid"));
        manage_stuid->setEnabled(false);
        manage_stuid->setGeometry(QRect(270, 30, 128, 24));
        label_6 = new QLabel(group_manageuser);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(170, 30, 64, 24));
        manage_password = new QLineEdit(group_manageuser);
        manage_password->setObjectName(QStringLiteral("manage_password"));
        manage_password->setGeometry(QRect(270, 90, 128, 24));
        manage_password->setEchoMode(QLineEdit::Password);
        label_7 = new QLabel(group_manageuser);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(170, 90, 64, 24));
        label_8 = new QLabel(group_manageuser);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(170, 120, 64, 24));
        manage_telnum = new QLineEdit(group_manageuser);
        manage_telnum->setObjectName(QStringLiteral("manage_telnum"));
        manage_telnum->setGeometry(QRect(270, 120, 128, 24));
        label_9 = new QLabel(group_manageuser);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(170, 150, 64, 24));
        label_10 = new QLabel(group_manageuser);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(170, 60, 64, 24));
        manage_name = new QLineEdit(group_manageuser);
        manage_name->setObjectName(QStringLiteral("manage_name"));
        manage_name->setGeometry(QRect(270, 60, 128, 24));
        manage_name->setEchoMode(QLineEdit::Normal);
        manage_isadmin = new QComboBox(group_manageuser);
        manage_isadmin->setObjectName(QStringLiteral("manage_isadmin"));
        manage_isadmin->setGeometry(QRect(270, 180, 128, 24));
        manageuser_delete_Button = new QPushButton(group_manageuser);
        manageuser_delete_Button->setObjectName(QStringLiteral("manageuser_delete_Button"));
        manageuser_delete_Button->setGeometry(QRect(300, 220, 96, 36));
        manage_num_limit = new QComboBox(group_manageuser);
        manage_num_limit->setObjectName(QStringLiteral("manage_num_limit"));
        manage_num_limit->setGeometry(QRect(270, 150, 128, 24));
        label_3 = new QLabel(group_manageuser);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(170, 180, 64, 24));
        group_nav = new QGroupBox(user_manage_Dialog);
        group_nav->setObjectName(QStringLiteral("group_nav"));
        group_nav->setGeometry(QRect(10, 10, 571, 71));
        guide_newuser_Button = new QPushButton(group_nav);
        guide_newuser_Button->setObjectName(QStringLiteral("guide_newuser_Button"));
        guide_newuser_Button->setGeometry(QRect(160, 20, 101, 41));
        guide_user_Button = new QPushButton(group_nav);
        guide_user_Button->setObjectName(QStringLiteral("guide_user_Button"));
        guide_user_Button->setGeometry(QRect(60, 20, 101, 41));
        guide_overuser_Button = new QPushButton(group_nav);
        guide_overuser_Button->setObjectName(QStringLiteral("guide_overuser_Button"));
        guide_overuser_Button->setGeometry(QRect(260, 20, 101, 41));
        group_overuser = new QGroupBox(user_manage_Dialog);
        group_overuser->setObjectName(QStringLiteral("group_overuser"));
        group_overuser->setEnabled(true);
        group_overuser->setGeometry(QRect(10, 80, 571, 271));
        gridLayout_2 = new QGridLayout(group_overuser);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        overuserview = new QTreeView(group_overuser);
        overuserview->setObjectName(QStringLiteral("overuserview"));
        overuserview->setEnabled(true);
        overuserview->setFont(font);
        overuserview->setContextMenuPolicy(Qt::NoContextMenu);
        overuserview->setEditTriggers(QAbstractItemView::NoEditTriggers);
        overuserview->setAlternatingRowColors(true);
        overuserview->setRootIsDecorated(false);
        overuserview->setHeaderHidden(true);

        gridLayout_2->addWidget(overuserview, 0, 0, 1, 1);

        group_user->raise();
        group_nav->raise();
        group_overuser->raise();
        group_manageuser->raise();
        group_newuser->raise();
        QWidget::setTabOrder(guide_user_Button, manage_name);
        QWidget::setTabOrder(manage_name, manage_password);
        QWidget::setTabOrder(manage_password, manage_telnum);
        QWidget::setTabOrder(manage_telnum, manage_num_limit);
        QWidget::setTabOrder(manage_num_limit, manage_isadmin);
        QWidget::setTabOrder(manage_isadmin, manageuser_modify_Button);
        QWidget::setTabOrder(manageuser_modify_Button, manageuser_delete_Button);
        QWidget::setTabOrder(manageuser_delete_Button, newuser_isadmin);
        QWidget::setTabOrder(newuser_isadmin, newuser_add_Button);
        QWidget::setTabOrder(newuser_add_Button, newuser_stuid);
        QWidget::setTabOrder(newuser_stuid, guide_newuser_Button);
        QWidget::setTabOrder(guide_newuser_Button, newuser_password);
        QWidget::setTabOrder(newuser_password, newuser_num_limit);
        QWidget::setTabOrder(newuser_num_limit, manage_stuid);
        QWidget::setTabOrder(manage_stuid, userview);
        QWidget::setTabOrder(userview, guide_overuser_Button);
        QWidget::setTabOrder(guide_overuser_Button, overuserview);
        QWidget::setTabOrder(overuserview, newuser_telnum);
        QWidget::setTabOrder(newuser_telnum, newuser_name);

        retranslateUi(user_manage_Dialog);

        newuser_num_limit->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(user_manage_Dialog);
    } // setupUi

    void retranslateUi(QDialog *user_manage_Dialog)
    {
        user_manage_Dialog->setWindowTitle(QApplication::translate("user_manage_Dialog", "\347\224\250\346\210\267\347\256\241\347\220\206", 0));
        group_newuser->setTitle(QApplication::translate("user_manage_Dialog", "\346\267\273\345\212\240\347\224\250\346\210\267", 0));
        newuser_add_Button->setText(QApplication::translate("user_manage_Dialog", "\345\210\233\345\273\272", 0));
        label->setText(QApplication::translate("user_manage_Dialog", "\345\255\246    \345\217\267\357\274\232", 0));
        newuser_password->setText(QString());
        label_2->setText(QApplication::translate("user_manage_Dialog", "\345\257\206    \347\240\201\357\274\232", 0));
        label_4->setText(QApplication::translate("user_manage_Dialog", "\345\200\237\344\271\246\344\270\212\351\231\220\357\274\232", 0));
        label_5->setText(QApplication::translate("user_manage_Dialog", "\345\247\223    \345\220\215\357\274\232", 0));
        newuser_name->setText(QString());
        newuser_isadmin->clear();
        newuser_isadmin->insertItems(0, QStringList()
         << QApplication::translate("user_manage_Dialog", "\346\231\256\351\200\232\347\224\250\346\210\267", 0)
         << QApplication::translate("user_manage_Dialog", "\347\256\241\347\220\206\345\221\230", 0)
        );
        newuser_isadmin->setCurrentText(QApplication::translate("user_manage_Dialog", "\346\231\256\351\200\232\347\224\250\346\210\267", 0));
        label_11->setText(QApplication::translate("user_manage_Dialog", "\350\201\224\347\263\273\347\224\265\350\257\235\357\274\232", 0));
        label_12->setText(QApplication::translate("user_manage_Dialog", "\347\224\250\346\210\267\347\261\273\345\210\253\357\274\232", 0));
        newuser_num_limit->clear();
        newuser_num_limit->insertItems(0, QStringList()
         << QApplication::translate("user_manage_Dialog", "5", 0)
         << QApplication::translate("user_manage_Dialog", "6", 0)
         << QApplication::translate("user_manage_Dialog", "7", 0)
         << QApplication::translate("user_manage_Dialog", "8", 0)
         << QApplication::translate("user_manage_Dialog", "9", 0)
         << QApplication::translate("user_manage_Dialog", "10", 0)
         << QApplication::translate("user_manage_Dialog", "11", 0)
         << QApplication::translate("user_manage_Dialog", "12", 0)
        );
        group_user->setTitle(QApplication::translate("user_manage_Dialog", "\347\224\250\346\210\267\347\256\241\347\220\206", 0));
        group_manageuser->setTitle(QApplication::translate("user_manage_Dialog", "\347\256\241\347\220\206\347\224\250\346\210\267", 0));
        manageuser_modify_Button->setText(QApplication::translate("user_manage_Dialog", "\344\277\256\346\224\271", 0));
        label_6->setText(QApplication::translate("user_manage_Dialog", "\345\255\246    \345\217\267\357\274\232", 0));
        manage_password->setText(QString());
        label_7->setText(QApplication::translate("user_manage_Dialog", "\345\257\206    \347\240\201\357\274\232", 0));
        label_8->setText(QApplication::translate("user_manage_Dialog", "\350\201\224\347\263\273\347\224\265\350\257\235\357\274\232", 0));
        manage_telnum->setText(QString());
        label_9->setText(QApplication::translate("user_manage_Dialog", "\345\200\237\344\271\246\344\270\212\351\231\220\357\274\232", 0));
        label_10->setText(QApplication::translate("user_manage_Dialog", "\345\247\223    \345\220\215\357\274\232", 0));
        manage_name->setText(QString());
        manage_isadmin->clear();
        manage_isadmin->insertItems(0, QStringList()
         << QApplication::translate("user_manage_Dialog", "\346\231\256\351\200\232\347\224\250\346\210\267", 0)
         << QApplication::translate("user_manage_Dialog", "\347\256\241\347\220\206\345\221\230", 0)
        );
        manageuser_delete_Button->setText(QApplication::translate("user_manage_Dialog", "\345\210\240\351\231\244", 0));
        manage_num_limit->clear();
        manage_num_limit->insertItems(0, QStringList()
         << QApplication::translate("user_manage_Dialog", "5", 0)
         << QApplication::translate("user_manage_Dialog", "6", 0)
         << QApplication::translate("user_manage_Dialog", "7", 0)
         << QApplication::translate("user_manage_Dialog", "8", 0)
         << QApplication::translate("user_manage_Dialog", "9", 0)
         << QApplication::translate("user_manage_Dialog", "10", 0)
         << QApplication::translate("user_manage_Dialog", "11", 0)
         << QApplication::translate("user_manage_Dialog", "12", 0)
        );
        label_3->setText(QApplication::translate("user_manage_Dialog", "\347\224\250\346\210\267\347\261\273\345\210\253\357\274\232", 0));
        group_nav->setTitle(QApplication::translate("user_manage_Dialog", "\346\223\215\344\275\234\351\200\211\351\241\271", 0));
        guide_newuser_Button->setText(QApplication::translate("user_manage_Dialog", "\346\267\273\345\212\240\347\224\250\346\210\267", 0));
        guide_user_Button->setText(QApplication::translate("user_manage_Dialog", "\347\224\250\346\210\267\347\256\241\347\220\206", 0));
        guide_overuser_Button->setText(QApplication::translate("user_manage_Dialog", "\351\200\276\346\234\237\347\224\250\346\210\267", 0));
        group_overuser->setTitle(QApplication::translate("user_manage_Dialog", "\351\200\276\346\234\237\350\256\260\345\275\225", 0));
    } // retranslateUi

};

namespace Ui {
    class user_manage_Dialog: public Ui_user_manage_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_MANAGE_DIALOG_H
