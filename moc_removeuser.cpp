/****************************************************************************
** Meta object code from reading C++ file 'removeuser.h'
**
** Created: Tue Apr 5 21:15:37 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "removeuser.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'removeuser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RemoveUser[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      32,   11,   11,   11, 0x08,
      52,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RemoveUser[] = {
    "RemoveUser\0\0searchBtn_clicked()\0"
    "removeBtn_clicked()\0okBtn_clicked()\0"
};

const QMetaObject RemoveUser::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_RemoveUser,
      qt_meta_data_RemoveUser, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RemoveUser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RemoveUser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RemoveUser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RemoveUser))
        return static_cast<void*>(const_cast< RemoveUser*>(this));
    if (!strcmp(_clname, "genUI"))
        return static_cast< genUI*>(const_cast< RemoveUser*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int RemoveUser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: searchBtn_clicked(); break;
        case 1: removeBtn_clicked(); break;
        case 2: okBtn_clicked(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
