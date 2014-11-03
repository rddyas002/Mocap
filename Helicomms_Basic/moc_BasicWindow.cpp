/****************************************************************************
** Meta object code from reading C++ file 'BasicWindow.h'
**
** Created: Fri Jul 18 08:30:32 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "BasicWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BasicWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BasicWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,
      44,   12,   12,   12, 0x0a,
      75,   12,   12,   12, 0x0a,
      88,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BasicWindow[] = {
    "BasicWindow\0\0btnConnectHelicopter1Clicked()\0"
    "btnConnectHelicopter2Clicked()\0"
    "btnGetData()\0updateGUI()\0"
};

void BasicWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BasicWindow *_t = static_cast<BasicWindow *>(_o);
        switch (_id) {
        case 0: _t->btnConnectHelicopter1Clicked(); break;
        case 1: _t->btnConnectHelicopter2Clicked(); break;
        case 2: _t->btnGetData(); break;
        case 3: _t->updateGUI(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData BasicWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BasicWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_BasicWindow,
      qt_meta_data_BasicWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BasicWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BasicWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BasicWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BasicWindow))
        return static_cast<void*>(const_cast< BasicWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int BasicWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
