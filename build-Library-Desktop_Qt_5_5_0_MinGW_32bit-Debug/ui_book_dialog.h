/********************************************************************************
** Form generated from reading UI file 'book_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOK_DIALOG_H
#define UI_BOOK_DIALOG_H

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

class Ui_book_Dialog
{
public:
    QGroupBox *book_group;
    QTreeView *borrowedbookview;
    QGroupBox *groupBox;
    QPushButton *search_Button;
    QPushButton *return_Button;
    QLineEdit *keyword_edit;
    QLabel *label;

    void setupUi(QDialog *book_Dialog)
    {
        if (book_Dialog->objectName().isEmpty())
            book_Dialog->setObjectName(QStringLiteral("book_Dialog"));
        book_Dialog->resize(660, 472);
        book_group = new QGroupBox(book_Dialog);
        book_group->setObjectName(QStringLiteral("book_group"));
        book_group->setEnabled(true);
        book_group->setGeometry(QRect(20, 120, 621, 311));
        borrowedbookview = new QTreeView(book_group);
        borrowedbookview->setObjectName(QStringLiteral("borrowedbookview"));
        borrowedbookview->setGeometry(QRect(10, 30, 591, 261));
        QFont font;
        font.setPointSize(13);
        borrowedbookview->setFont(font);
        borrowedbookview->setContextMenuPolicy(Qt::NoContextMenu);
        borrowedbookview->setEditTriggers(QAbstractItemView::NoEditTriggers);
        borrowedbookview->setAlternatingRowColors(true);
        borrowedbookview->setRootIsDecorated(false);
        borrowedbookview->setHeaderHidden(true);
        groupBox = new QGroupBox(book_Dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 621, 91));
        search_Button = new QPushButton(groupBox);
        search_Button->setObjectName(QStringLiteral("search_Button"));
        search_Button->setGeometry(QRect(430, 30, 81, 31));
        return_Button = new QPushButton(groupBox);
        return_Button->setObjectName(QStringLiteral("return_Button"));
        return_Button->setGeometry(QRect(510, 30, 81, 31));
        keyword_edit = new QLineEdit(groupBox);
        keyword_edit->setObjectName(QStringLiteral("keyword_edit"));
        keyword_edit->setGeometry(QRect(80, 30, 321, 31));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 40, 54, 21));

        retranslateUi(book_Dialog);

        QMetaObject::connectSlotsByName(book_Dialog);
    } // setupUi

    void retranslateUi(QDialog *book_Dialog)
    {
        book_Dialog->setWindowTitle(QApplication::translate("book_Dialog", "\345\233\276\344\271\246\346\243\200\347\264\242", 0));
        book_group->setTitle(QApplication::translate("book_Dialog", "\345\233\276\344\271\246\346\270\205\345\215\225", 0));
        groupBox->setTitle(QApplication::translate("book_Dialog", "\345\233\276\344\271\246\346\237\245\350\257\242", 0));
        search_Button->setText(QApplication::translate("book_Dialog", "\346\237\245\350\257\242", 0));
        return_Button->setText(QApplication::translate("book_Dialog", "\350\277\224\345\233\236", 0));
        label->setText(QApplication::translate("book_Dialog", "\345\205\263\351\224\256\350\257\215\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class book_Dialog: public Ui_book_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOK_DIALOG_H
