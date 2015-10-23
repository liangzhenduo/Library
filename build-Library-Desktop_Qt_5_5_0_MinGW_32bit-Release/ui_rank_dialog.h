/********************************************************************************
** Form generated from reading UI file 'rank_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANK_DIALOG_H
#define UI_RANK_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeView>

QT_BEGIN_NAMESPACE

class Ui_rank_Dialog
{
public:
    QGroupBox *book_group;
    QTreeView *bookrankview;
    QGroupBox *groupBox;
    QPushButton *search_Button;
    QPushButton *return_Button;
    QLabel *label;
    QComboBox *school_select;

    void setupUi(QDialog *rank_Dialog)
    {
        if (rank_Dialog->objectName().isEmpty())
            rank_Dialog->setObjectName(QStringLiteral("rank_Dialog"));
        rank_Dialog->resize(660, 472);
        book_group = new QGroupBox(rank_Dialog);
        book_group->setObjectName(QStringLiteral("book_group"));
        book_group->setEnabled(true);
        book_group->setGeometry(QRect(20, 120, 621, 311));
        bookrankview = new QTreeView(book_group);
        bookrankview->setObjectName(QStringLiteral("bookrankview"));
        bookrankview->setGeometry(QRect(10, 30, 591, 261));
        QFont font;
        font.setPointSize(12);
        bookrankview->setFont(font);
        bookrankview->setContextMenuPolicy(Qt::NoContextMenu);
        bookrankview->setEditTriggers(QAbstractItemView::NoEditTriggers);
        bookrankview->setAlternatingRowColors(true);
        bookrankview->setRootIsDecorated(false);
        bookrankview->setHeaderHidden(true);
        groupBox = new QGroupBox(rank_Dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 621, 91));
        search_Button = new QPushButton(groupBox);
        search_Button->setObjectName(QStringLiteral("search_Button"));
        search_Button->setGeometry(QRect(430, 30, 81, 31));
        return_Button = new QPushButton(groupBox);
        return_Button->setObjectName(QStringLiteral("return_Button"));
        return_Button->setGeometry(QRect(510, 30, 81, 31));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 51, 31));
        school_select = new QComboBox(groupBox);
        school_select->setObjectName(QStringLiteral("school_select"));
        school_select->setGeometry(QRect(80, 30, 300, 32));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(12);
        school_select->setFont(font1);
        school_select->setMaxVisibleItems(18);

        retranslateUi(rank_Dialog);

        school_select->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(rank_Dialog);
    } // setupUi

    void retranslateUi(QDialog *rank_Dialog)
    {
        rank_Dialog->setWindowTitle(QApplication::translate("rank_Dialog", "\350\256\260\345\275\225\347\273\237\350\256\241", 0));
        book_group->setTitle(QApplication::translate("rank_Dialog", "\345\233\276\344\271\246\346\270\205\345\215\225", 0));
        groupBox->setTitle(QApplication::translate("rank_Dialog", "\345\200\237\351\230\205\350\256\260\345\275\225\347\273\237\350\256\241", 0));
        search_Button->setText(QApplication::translate("rank_Dialog", "\346\237\245\350\257\242", 0));
        return_Button->setText(QApplication::translate("rank_Dialog", "\350\277\224\345\233\236", 0));
        label->setText(QApplication::translate("rank_Dialog", "\345\255\246\351\231\242\357\274\232", 0));
        school_select->clear();
        school_select->insertItems(0, QStringList()
         << QApplication::translate("rank_Dialog", "\346\234\272\346\242\260\345\255\246\351\231\242", 0)
         << QApplication::translate("rank_Dialog", "\347\262\276\344\273\252\345\255\246\351\231\242", 0)
         << QApplication::translate("rank_Dialog", "\350\207\252\345\212\250\345\214\226\345\255\246\351\231\242", 0)
         << QApplication::translate("rank_Dialog", "\347\224\265\344\277\241\345\255\246\351\231\242", 0)
         << QApplication::translate("rank_Dialog", "\345\273\272\345\267\245\345\255\246\351\231\242", 0)
         << QApplication::translate("rank_Dialog", "\345\273\272\347\255\221\345\255\246\351\231\242", 0)
         << QApplication::translate("rank_Dialog", "\345\214\226\345\267\245\345\255\246\351\231\242", 0)
         << QApplication::translate("rank_Dialog", "\346\235\220\346\226\231\345\255\246\351\231\242", 0)
         << QApplication::translate("rank_Dialog", "\347\273\217\347\256\241\345\255\246\351\203\250", 0)
         << QApplication::translate("rank_Dialog", "\347\220\206\345\255\246\351\231\242", 0)
         << QApplication::translate("rank_Dialog", "\346\226\207\346\263\225\345\255\246\351\231\242", 0)
         << QApplication::translate("rank_Dialog", "\346\225\231\350\202\262\345\255\246\351\231\242", 0)
         << QApplication::translate("rank_Dialog", "\350\215\257\345\255\246\351\231\242", 0)
         << QApplication::translate("rank_Dialog", "\347\216\257\345\242\203\345\255\246\351\231\242", 0)
         << QApplication::translate("rank_Dialog", "\350\256\241\347\256\227\346\234\272\345\255\246\351\231\242", 0)
         << QApplication::translate("rank_Dialog", "\350\275\257\344\273\266\345\255\246\351\231\242", 0)
         << QApplication::translate("rank_Dialog", "\347\224\237\347\247\221\345\255\246\351\231\242", 0)
        );
        school_select->setCurrentText(QString());
    } // retranslateUi

};

namespace Ui {
    class rank_Dialog: public Ui_rank_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANK_DIALOG_H
