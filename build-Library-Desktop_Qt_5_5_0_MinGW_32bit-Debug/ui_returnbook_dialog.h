/********************************************************************************
** Form generated from reading UI file 'returnbook_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETURNBOOK_DIALOG_H
#define UI_RETURNBOOK_DIALOG_H

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

class Ui_returnBook_Dialog
{
public:
    QTreeView *borrowedbookview;
    QGroupBox *groupBox;
    QLineEdit *stuid_label;
    QLineEdit *bookId_label;
    QPushButton *search_Button;
    QPushButton *return_Button;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *returnBook_Dialog)
    {
        if (returnBook_Dialog->objectName().isEmpty())
            returnBook_Dialog->setObjectName(QStringLiteral("returnBook_Dialog"));
        returnBook_Dialog->resize(642, 447);
        borrowedbookview = new QTreeView(returnBook_Dialog);
        borrowedbookview->setObjectName(QStringLiteral("borrowedbookview"));
        borrowedbookview->setGeometry(QRect(20, 180, 601, 241));
        QFont font;
        font.setPointSize(13);
        borrowedbookview->setFont(font);
        borrowedbookview->setContextMenuPolicy(Qt::NoContextMenu);
        borrowedbookview->setEditTriggers(QAbstractItemView::NoEditTriggers);
        borrowedbookview->setAlternatingRowColors(true);
        borrowedbookview->setRootIsDecorated(false);
        borrowedbookview->setHeaderHidden(true);
        groupBox = new QGroupBox(returnBook_Dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 601, 141));
        stuid_label = new QLineEdit(groupBox);
        stuid_label->setObjectName(QStringLiteral("stuid_label"));
        stuid_label->setGeometry(QRect(160, 30, 171, 31));
        bookId_label = new QLineEdit(groupBox);
        bookId_label->setObjectName(QStringLiteral("bookId_label"));
        bookId_label->setGeometry(QRect(160, 80, 171, 31));
        search_Button = new QPushButton(groupBox);
        search_Button->setObjectName(QStringLiteral("search_Button"));
        search_Button->setGeometry(QRect(400, 30, 91, 31));
        return_Button = new QPushButton(groupBox);
        return_Button->setObjectName(QStringLiteral("return_Button"));
        return_Button->setGeometry(QRect(400, 80, 91, 31));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 40, 54, 12));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 90, 61, 16));

        retranslateUi(returnBook_Dialog);

        QMetaObject::connectSlotsByName(returnBook_Dialog);
    } // setupUi

    void retranslateUi(QDialog *returnBook_Dialog)
    {
        returnBook_Dialog->setWindowTitle(QApplication::translate("returnBook_Dialog", "\345\233\276\344\271\246\345\275\222\350\277\230 - \346\261\202\346\230\257\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        groupBox->setTitle(QApplication::translate("returnBook_Dialog", "\347\256\241\347\220\206\351\200\211\351\241\271", 0));
        search_Button->setText(QApplication::translate("returnBook_Dialog", "\346\237\245\350\257\242\345\215\225\347\224\250\346\210\267", 0));
        return_Button->setText(QApplication::translate("returnBook_Dialog", "\345\215\225\345\206\214\345\275\222\350\277\230", 0));
        label->setText(QApplication::translate("returnBook_Dialog", "\345\255\246\345\217\267\357\274\232", 0));
        label_2->setText(QApplication::translate("returnBook_Dialog", "\345\215\225\345\206\214\347\274\226\345\217\267\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class returnBook_Dialog: public Ui_returnBook_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETURNBOOK_DIALOG_H
