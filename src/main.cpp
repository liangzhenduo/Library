#include <QApplication>
#include <QSplashScreen>
#include <iostream>
#include "public.h"
#include "mainwindow.h"

using namespace std;

TJUL_CLASS TJUL;

int main(int argc, char *argv[]) {
    TJUL.initialize_database();
    QApplication::addLibraryPath(".");
    QApplication app(argc, argv);
    QSplashScreen *splash=new QSplashScreen;
    splash->setPixmap(QPixmap(":/images/TJU_logo.png"));
    splash->show();
    for(int i=0;i<5000;i++){
        splash->repaint();
    }
    MainWindow w;
    w.show();
    splash->finish(&w);
    delete splash;
    return app.exec();
}

void TJUL_CLASS::user_logout() {
    isLogin = 0;
    isAdmin = 0;
    stuid = "";
    name = "";
    num_borrowed = 0;
    num_limit = 0;
}

bool TJUL_CLASS::initialize_database() {
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("Driver={MySQL ODBC 5.3 Unicode Driver};SERVER=127.0.0.1;DATABASE=dbms;UID=root;Pwd=password");

    if (!db.open()) {
        cerr << "Error: Couldn't connect to database server!" << endl;
        cerr << db.lastError().text().toStdString() << endl;
        is_connect_database = 0;
        return 0;
    }
    else {
        is_connect_database = 1;
    }

    return 1;
}

bool TJUL_CLASS::check_DatabaseConnect() {
    return is_connect_database;
}

bool TJUL_CLASS::check_isLogin() {
    return isLogin;
}

bool TJUL_CLASS::check_isAdmin() {
    return isAdmin;
}

bool TJUL_CLASS::modify_user_book(int num) {
    if (!isLogin)
        return 0;

    if (num_borrowed + num > num_limit)
        return 0;

    if (num > 0) {
        num_borrowed ++;
        QSqlQuery query("UPDATE user SET num_borrowed = num_borrowed + 1 WHERE stuid = " + stuid +";");
    } else {
        num_borrowed --;
        QSqlQuery query("UPDATE user SET num_borrowed = num_borrowed - 1 WHERE stuid = " + stuid +";");
    }

    return 1;
}

void TJUL_CLASS::set_number(int _num_borrowed, int _num_limit) {
    if (_num_borrowed >= 0)
        num_borrowed = _num_borrowed;

    if (_num_limit >= 0)
        num_limit = _num_limit;
}
