/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_2;
    QAction *action_log;
    QWidget *centralWidget;
    QPushButton *main_userinfo_Button;
    QPushButton *main_bookSearch_Button;
    QPushButton *main_returnBook_Button;
    QPushButton *main_manageUser_Button;
    QPushButton *main_manageBook_Button;
    QGroupBox *login_groupBox;
    QLineEdit *login_stuid_label;
    QLabel *label_2;
    QLineEdit *login_password_label;
    QLabel *label_3;
    QPushButton *login_action_button;
    QLabel *main_user_status_label;
    QLabel *label_logo;
    QPushButton *main_logout_Button;
    QPushButton *main_ranklist_Button;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(640, 420);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/TJU_logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QStringLiteral("action_2"));
        action_log = new QAction(MainWindow);
        action_log->setObjectName(QStringLiteral("action_log"));
        action_log->setCheckable(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        main_userinfo_Button = new QPushButton(centralWidget);
        main_userinfo_Button->setObjectName(QStringLiteral("main_userinfo_Button"));
        main_userinfo_Button->setGeometry(QRect(30, 210, 120, 40));
        main_bookSearch_Button = new QPushButton(centralWidget);
        main_bookSearch_Button->setObjectName(QStringLiteral("main_bookSearch_Button"));
        main_bookSearch_Button->setGeometry(QRect(30, 150, 120, 40));
        main_returnBook_Button = new QPushButton(centralWidget);
        main_returnBook_Button->setObjectName(QStringLiteral("main_returnBook_Button"));
        main_returnBook_Button->setGeometry(QRect(490, 150, 120, 40));
        main_manageUser_Button = new QPushButton(centralWidget);
        main_manageUser_Button->setObjectName(QStringLiteral("main_manageUser_Button"));
        main_manageUser_Button->setGeometry(QRect(490, 210, 120, 40));
        main_manageBook_Button = new QPushButton(centralWidget);
        main_manageBook_Button->setObjectName(QStringLiteral("main_manageBook_Button"));
        main_manageBook_Button->setGeometry(QRect(490, 270, 120, 40));
        login_groupBox = new QGroupBox(centralWidget);
        login_groupBox->setObjectName(QStringLiteral("login_groupBox"));
        login_groupBox->setEnabled(true);
        login_groupBox->setGeometry(QRect(40, 10, 561, 61));
        login_groupBox->setMouseTracking(false);
        login_groupBox->setAcceptDrops(false);
        login_groupBox->setAutoFillBackground(false);
        login_groupBox->setFlat(false);
        login_groupBox->setCheckable(false);
        login_stuid_label = new QLineEdit(login_groupBox);
        login_stuid_label->setObjectName(QStringLiteral("login_stuid_label"));
        login_stuid_label->setGeometry(QRect(70, 24, 128, 24));
        label_2 = new QLabel(login_groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 24, 36, 24));
        login_password_label = new QLineEdit(login_groupBox);
        login_password_label->setObjectName(QStringLiteral("login_password_label"));
        login_password_label->setGeometry(QRect(270, 24, 128, 24));
        login_password_label->setAcceptDrops(true);
        login_password_label->setEchoMode(QLineEdit::Password);
        label_3 = new QLabel(login_groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(230, 24, 36, 24));
        login_action_button = new QPushButton(login_groupBox);
        login_action_button->setObjectName(QStringLiteral("login_action_button"));
        login_action_button->setGeometry(QRect(450, 20, 72, 36));
        login_action_button->setAutoExclusive(false);
        login_action_button->setAutoDefault(false);
        login_action_button->setFlat(false);
        main_user_status_label = new QLabel(centralWidget);
        main_user_status_label->setObjectName(QStringLiteral("main_user_status_label"));
        main_user_status_label->setGeometry(QRect(70, 34, 400, 24));
        label_logo = new QLabel(centralWidget);
        label_logo->setObjectName(QStringLiteral("label_logo"));
        label_logo->setGeometry(QRect(162, 72, 316, 316));
        label_logo->setStyleSheet(QStringLiteral("background-image: url(:/images/TJU_logo1.png);"));
        main_logout_Button = new QPushButton(centralWidget);
        main_logout_Button->setObjectName(QStringLiteral("main_logout_Button"));
        main_logout_Button->setGeometry(QRect(490, 30, 72, 36));
        main_ranklist_Button = new QPushButton(centralWidget);
        main_ranklist_Button->setObjectName(QStringLiteral("main_ranklist_Button"));
        main_ranklist_Button->setGeometry(QRect(30, 270, 120, 40));
        MainWindow->setCentralWidget(centralWidget);
        label_logo->raise();
        main_user_status_label->raise();
        main_userinfo_Button->raise();
        main_bookSearch_Button->raise();
        main_returnBook_Button->raise();
        main_manageUser_Button->raise();
        main_manageBook_Button->raise();
        main_logout_Button->raise();
        login_groupBox->raise();
        main_ranklist_Button->raise();
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        login_action_button->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\345\244\251\346\264\245\345\244\247\345\255\246\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        action_2->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225", 0));
        action_log->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225", 0));
        main_userinfo_Button->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267\344\277\241\346\201\257", 0));
        main_bookSearch_Button->setText(QApplication::translate("MainWindow", "\345\233\276\344\271\246\346\243\200\347\264\242", 0));
        main_returnBook_Button->setText(QApplication::translate("MainWindow", "\347\256\241\347\220\206\350\277\230\344\271\246", 0));
        main_manageUser_Button->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267\347\256\241\347\220\206", 0));
        main_manageBook_Button->setText(QApplication::translate("MainWindow", "\345\233\276\344\271\246\347\256\241\347\220\206", 0));
        login_groupBox->setTitle(QApplication::translate("MainWindow", "\347\263\273\347\273\237\347\231\273\345\275\225", 0));
        label_2->setText(QApplication::translate("MainWindow", "\350\264\246\345\217\267\357\274\232", 0));
        label_3->setText(QApplication::translate("MainWindow", "\345\257\206\347\240\201\357\274\232", 0));
        login_action_button->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225", 0));
        main_user_status_label->setText(QString());
        label_logo->setText(QString());
        main_logout_Button->setText(QApplication::translate("MainWindow", "\346\263\250\351\224\200", 0));
        main_ranklist_Button->setText(QApplication::translate("MainWindow", "\350\256\260\345\275\225\347\273\237\350\256\241", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
