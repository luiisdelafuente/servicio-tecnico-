/****************************************************************************
** Meta object code from reading C++ file 'camino.h'
**
** Created: Thu 12. Nov 16:49:27 2020
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "camino.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'camino.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_camino[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x0a,
      27,    7,    7,    7, 0x0a,
      38,    7,    7,    7, 0x0a,
      49,    7,    7,    7, 0x0a,
      58,    7,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_camino[] = {
    "camino\0\0refrescarventana()\0ventana3()\0"
    "ventana4()\0final1()\0final2()\0"
};

void camino::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        camino *_t = static_cast<camino *>(_o);
        switch (_id) {
        case 0: _t->refrescarventana(); break;
        case 1: _t->ventana3(); break;
        case 2: _t->ventana4(); break;
        case 3: _t->final1(); break;
        case 4: _t->final2(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData camino::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject camino::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_camino,
      qt_meta_data_camino, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &camino::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *camino::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *camino::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_camino))
        return static_cast<void*>(const_cast< camino*>(this));
    return QWidget::qt_metacast(_clname);
}

int camino::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
