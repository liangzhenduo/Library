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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
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
    QLabel *label;
    QPushButton *main_log_Button;
    QLabel *main_user_status_label;
    QPushButton *main_userinfo_Button;
    QPushButton *main_bookSearch_Button;
    QPushButton *main_returnBook_Button;
    QPushButton *main_userManagement_Button;
    QPushButton *main_manageBook_Button;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(644, 418);
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
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(true);
        label->setGeometry(QRect(20, 100, 401, 151));
        main_log_Button = new QPushButton(centralWidget);
        main_log_Button->setObjectName(QStringLiteral("main_log_Button"));
        main_log_Button->setGeometry(QRect(470, 270, 121, 41));
        main_user_status_label = new QLabel(centralWidget);
        main_user_status_label->setObjectName(QStringLiteral("main_user_status_label"));
        main_user_status_label->setGeometry(QRect(60, 80, 381, 16));
        main_userinfo_Button = new QPushButton(centralWidget);
        main_userinfo_Button->setObjectName(QStringLiteral("main_userinfo_Button"));
        main_userinfo_Button->setGeometry(QRect(470, 70, 121, 41));
        main_bookSearch_Button = new QPushButton(centralWidget);
        main_bookSearch_Button->setObjectName(QStringLiteral("main_bookSearch_Button"));
        main_bookSearch_Button->setGeometry(QRect(470, 110, 121, 41));
        main_returnBook_Button = new QPushButton(centralWidget);
        main_returnBook_Button->setObjectName(QStringLiteral("main_returnBook_Button"));
        main_returnBook_Button->setGeometry(QRect(470, 150, 121, 41));
        main_userManagement_Button = new QPushButton(centralWidget);
        main_userManagement_Button->setObjectName(QStringLiteral("main_userManagement_Button"));
        main_userManagement_Button->setGeometry(QRect(470, 190, 121, 41));
        main_manageBook_Button = new QPushButton(centralWidget);
        main_manageBook_Button->setObjectName(QStringLiteral("main_manageBook_Button"));
        main_manageBook_Button->setGeometry(QRect(470, 230, 121, 41));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\345\244\251\346\264\245\345\244\247\345\255\246\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        action_2->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225", 0));
        action_log->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225", 0));
        label->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600; color:#00aaff;\">\345\214\227\346\264\213\345\244\247\345\255\246\345\233\276\344\271\246\351\246\206</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; font-style:italic; color:#02c8ff;\">P</span><span style=\" font-size:14pt; font-style:italic; color:#02c8ff;\">eiyang </span><span style=\" font-size:14pt; font-weight:600; font-style:italic; color:#02c8"
                        "ff;\">L</span><span style=\" font-size:14pt; font-style:italic; color:#02c8ff;\">ibrary </span><span style=\" font-size:14pt; font-weight:600; font-style:italic; color:#02c8ff;\">M</span><span style=\" font-size:14pt; font-style:italic; color:#02c8ff;\">anagement </span><span style=\" font-size:14pt; font-weight:600; font-style:italic; color:#02c8ff;\">S</span><span style=\" font-size:14pt; font-style:italic; color:#02c8ff;\">ystem</span></p></body></html>", 0));
        main_log_Button->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225", 0));
        main_user_status_label->setText(QString());
        main_userinfo_Button->setText(QApplication::translate("MainWindow", "\346\210\221\347\232\204\344\277\241\346\201\257", 0));
        main_bookSearch_Button->setText(QApplication::translate("MainWindow", "\345\233\276\344\271\246\346\237\245\350\257\242", 0));
        main_returnBook_Button->setText(QApplication::translate("MainWindow", "\347\256\241\347\220\206\350\277\230\344\271\246", 0));
        main_userManagement_Button->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267\347\256\241\347\220\206", 0));
        main_manageBook_Button->setText(QApplication::translate("MainWindow", "\347\256\241\347\220\206\345\233\276\344\271\246", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
