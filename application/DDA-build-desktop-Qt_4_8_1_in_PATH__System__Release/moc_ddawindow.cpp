/****************************************************************************
** Meta object code from reading C++ file 'ddawindow.h'
**
** Created: Mon Jan 5 21:46:11 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../DDA/ddawindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ddawindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DDAWindow[] = {

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
      11,   10,   10,   10, 0x0a,
      19,   10,   10,   10, 0x0a,
      44,   10,   10,   10, 0x0a,
      62,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DDAWindow[] = {
    "DDAWindow\0\0doDDA()\0updateProgressBar(float)\0"
    "redrawToggle(int)\0updateMousePos(QPoint)\0"
};

void DDAWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DDAWindow *_t = static_cast<DDAWindow *>(_o);
        switch (_id) {
        case 0: _t->doDDA(); break;
        case 1: _t->updateProgressBar((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->redrawToggle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->updateMousePos((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DDAWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DDAWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_DDAWindow,
      qt_meta_data_DDAWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DDAWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DDAWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DDAWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DDAWindow))
        return static_cast<void*>(const_cast< DDAWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int DDAWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
