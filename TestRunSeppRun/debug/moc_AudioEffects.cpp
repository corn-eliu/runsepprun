/****************************************************************************
** Meta object code from reading C++ file 'AudioEffects.h'
**
** Created: Thu May 13 13:59:05 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../RunSeppRun/AudioEffects.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AudioEffects.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AudioEffects[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AudioEffects[] = {
    "AudioEffects\0\0repeat()\0"
};

const QMetaObject AudioEffects::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AudioEffects,
      qt_meta_data_AudioEffects, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AudioEffects::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AudioEffects::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AudioEffects::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AudioEffects))
        return static_cast<void*>(const_cast< AudioEffects*>(this));
    return QObject::qt_metacast(_clname);
}

int AudioEffects::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: repeat(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
