/****************************************************************************
** Meta object code from reading C++ file 'receivefromweb.h'
**
** Created: Wed Feb 22 14:50:08 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "receivefromweb.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'receivefromweb.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_receivefromweb[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,
      30,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      51,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_receivefromweb[] = {
    "receivefromweb\0\0requestWork()\0"
    "Workrequest(QString)\0doWork_web()\0"
};

const QMetaObject receivefromweb::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_receivefromweb,
      qt_meta_data_receivefromweb, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &receivefromweb::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *receivefromweb::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *receivefromweb::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_receivefromweb))
        return static_cast<void*>(const_cast< receivefromweb*>(this));
    return QObject::qt_metacast(_clname);
}

int receivefromweb::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: requestWork(); break;
        case 1: Workrequest((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: doWork_web(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void receivefromweb::requestWork()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void receivefromweb::Workrequest(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
