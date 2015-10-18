/****************************************************************************
** Meta object code from reading C++ file 'user_manage_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/user_manage_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'user_manage_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_user_manage_Dialog_t {
    QByteArrayData data[10];
    char stringdata0[242];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_user_manage_Dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_user_manage_Dialog_t qt_meta_stringdata_user_manage_Dialog = {
    {
QT_MOC_LITERAL(0, 0, 18), // "user_manage_Dialog"
QT_MOC_LITERAL(1, 19, 29), // "on_newuser_add_Button_clicked"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 28), // "on_guide_user_Button_clicked"
QT_MOC_LITERAL(4, 79, 32), // "on_guide_overuser_Button_clicked"
QT_MOC_LITERAL(5, 112, 31), // "on_guide_newuser_Button_clicked"
QT_MOC_LITERAL(6, 144, 35), // "on_manageuser_modify_Button_c..."
QT_MOC_LITERAL(7, 180, 19), // "on_userview_clicked"
QT_MOC_LITERAL(8, 200, 5), // "index"
QT_MOC_LITERAL(9, 206, 35) // "on_manageuser_delete_Button_c..."

    },
    "user_manage_Dialog\0on_newuser_add_Button_clicked\0"
    "\0on_guide_user_Button_clicked\0"
    "on_guide_overuser_Button_clicked\0"
    "on_guide_newuser_Button_clicked\0"
    "on_manageuser_modify_Button_clicked\0"
    "on_userview_clicked\0index\0"
    "on_manageuser_delete_Button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_user_manage_Dialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    1,   54,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    8,
    QMetaType::Void,

       0        // eod
};

void user_manage_Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        user_manage_Dialog *_t = static_cast<user_manage_Dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_newuser_add_Button_clicked(); break;
        case 1: _t->on_guide_user_Button_clicked(); break;
        case 2: _t->on_guide_overuser_Button_clicked(); break;
        case 3: _t->on_guide_newuser_Button_clicked(); break;
        case 4: _t->on_manageuser_modify_Button_clicked(); break;
        case 5: _t->on_userview_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->on_manageuser_delete_Button_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject user_manage_Dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_user_manage_Dialog.data,
      qt_meta_data_user_manage_Dialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *user_manage_Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *user_manage_Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_user_manage_Dialog.stringdata0))
        return static_cast<void*>(const_cast< user_manage_Dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int user_manage_Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
