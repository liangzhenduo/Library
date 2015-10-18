/********************************************************************************
** Form generated from reading UI file 'book_return_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOK_RETURN_DIALOG_H
#define UI_BOOK_RETURN_DIALOG_H

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

class Ui_book_return_Dialog
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

    void setupUi(QDialog *book_return_Dialog)
    {
        if (book_return_Dialog->objectName().isEmpty())
            book_return_Dialog->setObjectName(QStringLiteral("book_return_Dialog"));
        book_return_Dialog->resize(642, 447);
        borrowedbookview = new QTreeView(book_return_Dialog);
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
        groupBox = new QGroupBox(book_return_Dialog);
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

        retranslateUi(book_return_Dialog);

        QMetaObject::connectSlotsByName(book_return_Dialog);
    } // setupUi

    void retranslateUi(QDialog *book_return_Dialog)
    {
        book_return_Dialog->setWindowTitle(QApplication::translate("book_return_Dialog", "\345\233\276\344\271\246\345\275\222\350\277\230 - \346\261\202\346\230\257\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        groupBox->setTitle(QApplication::translate("book_return_Dialog", "\347\256\241\347\220\206\351\200\211\351\241\271", 0));
        search_Button->setText(QApplication::translate("book_return_Dialog", "\346\237\245\350\257\242\345\215\225\347\224\250\346\210\267", 0));
        return_Button->setText(QApplication::translate("book_return_Dialog", "\345\215\225\345\206\214\345\275\222\350\277\230", 0));
        label->setText(QApplication::translate("book_return_Dialog", "\345\255\246\345\217\267\357\274\232", 0));
        label_2->setText(QApplication::translate("book_return_Dialog", "\345\215\225\345\206\214\347\274\226\345\217\267\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class book_return_Dialog: public Ui_book_return_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOK_RETURN_DIALOG_H
