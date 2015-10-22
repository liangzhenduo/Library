/********************************************************************************
** Form generated from reading UI file 'book_manage_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOK_MANAGE_DIALOG_H
#define UI_BOOK_MANAGE_DIALOG_H

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

class Ui_book_manage_Dialog
{
public:
    QGroupBox *group_booklist;
    QGridLayout *gridLayout;
    QTreeView *userview;
    QGroupBox *group_add_single;
    QLineEdit *single_title;
    QLabel *label;
    QLineEdit *single_type;
    QLabel *label_2;
    QLineEdit *single_press;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *single_year;
    QLabel *label_5;
    QLineEdit *single_price;
    QLabel *label_7;
    QPushButton *single_add;
    QLabel *label_8;
    QLineEdit *single_author;
    QLineEdit *single_isbn;
    QLabel *label_9;
    QComboBox *single_num;
    QGroupBox *group_nav;
    QPushButton *guide_booklist;
    QPushButton *guide_add_single;

    void setupUi(QDialog *book_manage_Dialog)
    {
        if (book_manage_Dialog->objectName().isEmpty())
            book_manage_Dialog->setObjectName(QStringLiteral("book_manage_Dialog"));
        book_manage_Dialog->resize(702, 420);
        group_booklist = new QGroupBox(book_manage_Dialog);
        group_booklist->setObjectName(QStringLiteral("group_booklist"));
        group_booklist->setEnabled(true);
        group_booklist->setGeometry(QRect(10, 90, 681, 291));
        gridLayout = new QGridLayout(group_booklist);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        userview = new QTreeView(group_booklist);
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

        group_add_single = new QGroupBox(book_manage_Dialog);
        group_add_single->setObjectName(QStringLiteral("group_add_single"));
        group_add_single->setGeometry(QRect(10, 90, 681, 291));
        single_title = new QLineEdit(group_add_single);
        single_title->setObjectName(QStringLiteral("single_title"));
        single_title->setGeometry(QRect(180, 70, 306, 24));
        label = new QLabel(group_add_single);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 70, 61, 20));
        single_type = new QLineEdit(group_add_single);
        single_type->setObjectName(QStringLiteral("single_type"));
        single_type->setGeometry(QRect(180, 175, 128, 24));
        label_2 = new QLabel(group_add_single);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(120, 175, 61, 20));
        single_press = new QLineEdit(group_add_single);
        single_press->setObjectName(QStringLiteral("single_press"));
        single_press->setGeometry(QRect(180, 140, 128, 24));
        label_3 = new QLabel(group_add_single);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(120, 140, 61, 20));
        label_4 = new QLabel(group_add_single);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(330, 105, 61, 20));
        single_year = new QLineEdit(group_add_single);
        single_year->setObjectName(QStringLiteral("single_year"));
        single_year->setGeometry(QRect(390, 105, 96, 24));
        label_5 = new QLabel(group_add_single);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(330, 140, 61, 20));
        single_price = new QLineEdit(group_add_single);
        single_price->setObjectName(QStringLiteral("single_price"));
        single_price->setGeometry(QRect(390, 140, 96, 24));
        label_7 = new QLabel(group_add_single);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(330, 175, 96, 36));
        single_add = new QPushButton(group_add_single);
        single_add->setObjectName(QStringLiteral("single_add"));
        single_add->setGeometry(QRect(270, 220, 96, 36));
        label_8 = new QLabel(group_add_single);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(120, 105, 61, 20));
        single_author = new QLineEdit(group_add_single);
        single_author->setObjectName(QStringLiteral("single_author"));
        single_author->setGeometry(QRect(180, 105, 128, 24));
        single_isbn = new QLineEdit(group_add_single);
        single_isbn->setObjectName(QStringLiteral("single_isbn"));
        single_isbn->setGeometry(QRect(180, 35, 306, 24));
        label_9 = new QLabel(group_add_single);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(120, 35, 61, 20));
        single_num = new QComboBox(group_add_single);
        single_num->setObjectName(QStringLiteral("single_num"));
        single_num->setGeometry(QRect(390, 172, 96, 36));
        label->raise();
        single_type->raise();
        label_2->raise();
        single_press->raise();
        label_3->raise();
        label_4->raise();
        single_year->raise();
        label_5->raise();
        single_price->raise();
        label_7->raise();
        single_add->raise();
        label_8->raise();
        single_author->raise();
        single_isbn->raise();
        label_9->raise();
        single_title->raise();
        single_num->raise();
        group_nav = new QGroupBox(book_manage_Dialog);
        group_nav->setObjectName(QStringLiteral("group_nav"));
        group_nav->setGeometry(QRect(10, 10, 681, 71));
        guide_booklist = new QPushButton(group_nav);
        guide_booklist->setObjectName(QStringLiteral("guide_booklist"));
        guide_booklist->setGeometry(QRect(30, 20, 101, 41));
        guide_add_single = new QPushButton(group_nav);
        guide_add_single->setObjectName(QStringLiteral("guide_add_single"));
        guide_add_single->setGeometry(QRect(130, 20, 101, 41));
        QWidget::setTabOrder(userview, guide_booklist);
        QWidget::setTabOrder(guide_booklist, guide_add_single);
        QWidget::setTabOrder(guide_add_single, single_isbn);
        QWidget::setTabOrder(single_isbn, single_title);
        QWidget::setTabOrder(single_title, single_author);
        QWidget::setTabOrder(single_author, single_year);
        QWidget::setTabOrder(single_year, single_press);
        QWidget::setTabOrder(single_press, single_price);
        QWidget::setTabOrder(single_price, single_type);
        QWidget::setTabOrder(single_type, single_num);
        QWidget::setTabOrder(single_num, single_add);

        retranslateUi(book_manage_Dialog);

        QMetaObject::connectSlotsByName(book_manage_Dialog);
    } // setupUi

    void retranslateUi(QDialog *book_manage_Dialog)
    {
        book_manage_Dialog->setWindowTitle(QApplication::translate("book_manage_Dialog", "\345\233\276\344\271\246\347\256\241\347\220\206", 0));
        group_booklist->setTitle(QApplication::translate("book_manage_Dialog", "\345\233\276\344\271\246\345\210\227\350\241\250", 0));
        group_add_single->setTitle(QApplication::translate("book_manage_Dialog", "\345\215\225\345\206\214\345\233\276\344\271\246\346\267\273\345\212\240", 0));
        label->setText(QApplication::translate("book_manage_Dialog", "\344\271\246\347\233\256\357\274\232", 0));
        single_type->setText(QString());
        label_2->setText(QApplication::translate("book_manage_Dialog", "\347\261\273\345\210\253\357\274\232", 0));
        single_press->setText(QString());
        label_3->setText(QApplication::translate("book_manage_Dialog", "\345\207\272\347\211\210\347\244\276\357\274\232", 0));
        label_4->setText(QApplication::translate("book_manage_Dialog", "\345\271\264\344\273\275\357\274\232", 0));
        single_year->setText(QString());
        label_5->setText(QApplication::translate("book_manage_Dialog", "\345\215\225\344\273\267\357\274\232", 0));
        single_price->setText(QString());
        label_7->setText(QApplication::translate("book_manage_Dialog", "\346\225\260\351\207\217\357\274\232", 0));
        single_add->setText(QApplication::translate("book_manage_Dialog", "\346\267\273\345\212\240", 0));
        label_8->setText(QApplication::translate("book_manage_Dialog", "\344\275\234\350\200\205\357\274\232", 0));
        single_author->setText(QString());
        single_isbn->setText(QString());
        label_9->setText(QApplication::translate("book_manage_Dialog", "ISBN\357\274\232", 0));
        single_num->clear();
        single_num->insertItems(0, QStringList()
         << QApplication::translate("book_manage_Dialog", "1", 0)
         << QApplication::translate("book_manage_Dialog", "2", 0)
         << QApplication::translate("book_manage_Dialog", "3", 0)
         << QApplication::translate("book_manage_Dialog", "4", 0)
         << QApplication::translate("book_manage_Dialog", "5", 0)
         << QApplication::translate("book_manage_Dialog", "6", 0)
         << QApplication::translate("book_manage_Dialog", "7", 0)
         << QApplication::translate("book_manage_Dialog", "8", 0)
         << QApplication::translate("book_manage_Dialog", "9", 0)
         << QApplication::translate("book_manage_Dialog", "10", 0)
        );
        group_nav->setTitle(QApplication::translate("book_manage_Dialog", "\346\223\215\344\275\234\351\200\211\351\241\271", 0));
        guide_booklist->setText(QApplication::translate("book_manage_Dialog", "\345\233\276\344\271\246\345\210\227\350\241\250", 0));
        guide_add_single->setText(QApplication::translate("book_manage_Dialog", "\346\267\273\345\212\240\346\226\260\344\271\246", 0));
    } // retranslateUi

};

namespace Ui {
    class book_manage_Dialog: public Ui_book_manage_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOK_MANAGE_DIALOG_H
