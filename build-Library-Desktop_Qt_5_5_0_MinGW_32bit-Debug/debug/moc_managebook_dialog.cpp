/****************************************************************************
** Meta object code from reading C++ file 'managebook_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/managebook_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'managebook_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_manageBook_Dialog_t {
    QByteArrayData data[13];
    char stringdata0[223];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_manageBook_Dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_manageBook_Dialog_t qt_meta_stringdata_manageBook_Dialog = {
    {
QT_MOC_LITERAL(0, 0, 17), // "manageBook_Dialog"
QT_MOC_LITERAL(1, 18, 16), // "signal_load_item"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 4), // "isbn"
QT_MOC_LITERAL(4, 41, 18), // "signal_show_dialog"
QT_MOC_LITERAL(5, 60, 9), // "dialog_id"
QT_MOC_LITERAL(6, 70, 23), // "on_single_clear_clicked"
QT_MOC_LITERAL(7, 94, 21), // "on_single_add_clicked"
QT_MOC_LITERAL(8, 116, 25), // "on_guide_booklist_clicked"
QT_MOC_LITERAL(9, 142, 19), // "on_userview_clicked"
QT_MOC_LITERAL(10, 162, 5), // "index"
QT_MOC_LITERAL(11, 168, 27), // "on_guide_add_single_clicked"
QT_MOC_LITERAL(12, 196, 26) // "on_guide_add_batch_clicked"

    },
    "manageBook_Dialog\0signal_load_item\0\0"
    "isbn\0signal_show_dialog\0dialog_id\0"
    "on_single_clear_clicked\0on_single_add_clicked\0"
    "on_guide_booklist_clicked\0on_userview_clicked\0"
    "index\0on_guide_add_single_clicked\0"
    "on_guide_add_batch_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_manageBook_Dialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   60,    2, 0x08 /* Private */,
       7,    0,   61,    2, 0x08 /* Private */,
       8,    0,   62,    2, 0x08 /* Private */,
       9,    1,   63,    2, 0x08 /* Private */,
      11,    0,   66,    2, 0x08 /* Private */,
      12,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void manageBook_Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        manageBook_Dialog *_t = static_cast<manageBook_Dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_load_item((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->signal_show_dialog((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_single_clear_clicked(); break;
        case 3: _t->on_single_add_clicked(); break;
        case 4: _t->on_guide_booklist_clicked(); break;
        case 5: _t->on_userview_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->on_guide_add_single_clicked(); break;
        case 7: _t->on_guide_add_batch_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (manageBook_Dialog::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&manageBook_Dialog::signal_load_item)) {
                *result = 0;
            }
        }
        {
            typedef void (manageBook_Dialog::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&manageBook_Dialog::signal_show_dialog)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject manageBook_Dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_manageBook_Dialog.data,
      qt_meta_data_manageBook_Dialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *manageBook_Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *manageBook_Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_manageBook_Dialog.stringdata0))
        return static_cast<void*>(const_cast< manageBook_Dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int manageBook_Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void manageBook_Dialog::signal_load_item(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void manageBook_Dialog::signal_show_dialog(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
