#ifndef PUBLIC_H
#define PUBLIC_H

#include <QMainWindow>
#include <QMessageBox>
#include <QStandardItem>
#include <QtSql>
#include <QSqlError>
#include <QTextCodec>

#define MXN 5000

class TJUL_CLASS {

private:
    bool is_connect_database;
    int num_borrowed;
    int num_limit;

public:
    bool isLogin;
    bool isAdmin;
    QString stuid;
    QString name;

    void user_logout();
    bool modify_user_book(int num);
    void set_number(int _num_borrowed, int _num_limit);
    bool initialize_database();

    bool check_DatabaseConnect();
    bool check_isLogin();
    bool check_isAdmin();
};

#include "user_dialog.h"
#include "book_dialog.h"
#include "rank_dialog.h"
#include "item_dialog.h"
#include "book_return_dialog.h"
#include "user_manage_dialog.h"
#include "book_manage_dialog.h"

#endif // PUBLIC_H
