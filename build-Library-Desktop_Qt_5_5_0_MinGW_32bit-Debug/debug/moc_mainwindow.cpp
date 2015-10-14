/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[17];
    char stringdata0[438];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 26), // "signal_change_login_status"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 23), // "signal_load_user_dialog"
QT_MOC_LITERAL(4, 63, 23), // "signal_init_book_dialog"
QT_MOC_LITERAL(5, 87, 23), // "signal_init_rank_dialog"
QT_MOC_LITERAL(6, 111, 30), // "on_login_action_button_clicked"
QT_MOC_LITERAL(7, 142, 29), // "on_main_logout_Button_clicked"
QT_MOC_LITERAL(8, 172, 31), // "on_main_userinfo_Button_clicked"
QT_MOC_LITERAL(9, 204, 33), // "on_main_bookSearch_Button_cli..."
QT_MOC_LITERAL(10, 238, 31), // "on_main_ranklist_Button_clicked"
QT_MOC_LITERAL(11, 270, 29), // "on_signal_change_login_status"
QT_MOC_LITERAL(12, 300, 21), // "on_signal_show_dialog"
QT_MOC_LITERAL(13, 322, 9), // "dialog_id"
QT_MOC_LITERAL(14, 332, 33), // "on_main_returnBook_Button_cli..."
QT_MOC_LITERAL(15, 366, 37), // "on_main_userManagement_Button..."
QT_MOC_LITERAL(16, 404, 33) // "on_main_manageBook_Button_cli..."

    },
    "MainWindow\0signal_change_login_status\0"
    "\0signal_load_user_dialog\0"
    "signal_init_book_dialog\0signal_init_rank_dialog\0"
    "on_login_action_button_clicked\0"
    "on_main_logout_Button_clicked\0"
    "on_main_userinfo_Button_clicked\0"
    "on_main_bookSearch_Button_clicked\0"
    "on_main_ranklist_Button_clicked\0"
    "on_signal_change_login_status\0"
    "on_signal_show_dialog\0dialog_id\0"
    "on_main_returnBook_Button_clicked\0"
    "on_main_userManagement_Button_clicked\0"
    "on_main_manageBook_Button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    0,   85,    2, 0x06 /* Public */,
       4,    0,   86,    2, 0x06 /* Public */,
       5,    0,   87,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    1,   94,    2, 0x08 /* Private */,
      14,    0,   97,    2, 0x08 /* Private */,
      15,    0,   98,    2, 0x08 /* Private */,
      16,    0,   99,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_change_login_status(); break;
        case 1: _t->signal_load_user_dialog(); break;
        case 2: _t->signal_init_book_dialog(); break;
        case 3: _t->signal_init_rank_dialog(); break;
        case 4: _t->on_login_action_button_clicked(); break;
        case 5: _t->on_main_logout_Button_clicked(); break;
        case 6: _t->on_main_userinfo_Button_clicked(); break;
        case 7: _t->on_main_bookSearch_Button_clicked(); break;
        case 8: _t->on_main_ranklist_Button_clicked(); break;
        case 9: _t->on_signal_change_login_status(); break;
        case 10: _t->on_signal_show_dialog((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_main_returnBook_Button_clicked(); break;
        case 12: _t->on_main_userManagement_Button_clicked(); break;
        case 13: _t->on_main_manageBook_Button_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::signal_change_login_status)) {
                *result = 0;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::signal_load_user_dialog)) {
                *result = 1;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::signal_init_book_dialog)) {
                *result = 2;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::signal_init_rank_dialog)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::signal_change_login_status()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void MainWindow::signal_load_user_dialog()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void MainWindow::signal_init_book_dialog()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void MainWindow::signal_init_rank_dialog()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
