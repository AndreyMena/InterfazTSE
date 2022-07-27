/****************************************************************************
** Meta object code from reading C++ file 'votar.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../InterfazTSE/votar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'votar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_votar_t {
    const uint offsetsAndSize[22];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_votar_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_votar_t qt_meta_stringdata_votar = {
    {
QT_MOC_LITERAL(0, 5), // "votar"
QT_MOC_LITERAL(6, 19), // "on_votarPLN_clicked"
QT_MOC_LITERAL(26, 0), // ""
QT_MOC_LITERAL(27, 19), // "on_votarPAC_clicked"
QT_MOC_LITERAL(47, 18), // "on_votarUP_clicked"
QT_MOC_LITERAL(66, 18), // "on_votarFA_clicked"
QT_MOC_LITERAL(85, 7), // "execute"
QT_MOC_LITERAL(93, 5), // "char*"
QT_MOC_LITERAL(99, 7), // "mensaje"
QT_MOC_LITERAL(107, 10), // "votoValido"
QT_MOC_LITERAL(118, 12) // "votoInvalido"

    },
    "votar\0on_votarPLN_clicked\0\0"
    "on_votarPAC_clicked\0on_votarUP_clicked\0"
    "on_votarFA_clicked\0execute\0char*\0"
    "mensaje\0votoValido\0votoInvalido"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_votar[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    1,   60,    2, 0x08,    5 /* Private */,
       9,    0,   63,    2, 0x08,    7 /* Private */,
      10,    0,   64,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void votar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<votar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_votarPLN_clicked(); break;
        case 1: _t->on_votarPAC_clicked(); break;
        case 2: _t->on_votarUP_clicked(); break;
        case 3: _t->on_votarFA_clicked(); break;
        case 4: _t->execute((*reinterpret_cast< std::add_pointer_t<char*>>(_a[1]))); break;
        case 5: _t->votoValido(); break;
        case 6: _t->votoInvalido(); break;
        default: ;
        }
    }
}

const QMetaObject votar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_votar.offsetsAndSize,
    qt_meta_data_votar,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_votar_t
, QtPrivate::TypeAndForceComplete<votar, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<char *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *votar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *votar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_votar.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int votar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
