/****************************************************************************
** Meta object code from reading C++ file 'mondlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../app/rtknavi_qt/mondlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mondlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MonitorDialog_t {
    QByteArrayData data[10];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MonitorDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MonitorDialog_t qt_meta_stringdata_MonitorDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "MonitorDialog"
QT_MOC_LITERAL(1, 14, 13), // "BtnCloseClick"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 13), // "BtnClearClick"
QT_MOC_LITERAL(4, 43, 12), // "BtnDownClick"
QT_MOC_LITERAL(5, 56, 10), // "TypeChange"
QT_MOC_LITERAL(6, 67, 11), // "Timer1Timer"
QT_MOC_LITERAL(7, 79, 11), // "Timer2Timer"
QT_MOC_LITERAL(8, 91, 12), // "SelObsChange"
QT_MOC_LITERAL(9, 104, 12) // "SelFmtChange"

    },
    "MonitorDialog\0BtnCloseClick\0\0BtnClearClick\0"
    "BtnDownClick\0TypeChange\0Timer1Timer\0"
    "Timer2Timer\0SelObsChange\0SelFmtChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MonitorDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    1,   57,    2, 0x0a /* Public */,
       6,    0,   60,    2, 0x0a /* Public */,
       7,    0,   61,    2, 0x0a /* Public */,
       8,    1,   62,    2, 0x0a /* Public */,
       9,    1,   65,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void MonitorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MonitorDialog *_t = static_cast<MonitorDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->BtnCloseClick(); break;
        case 1: _t->BtnClearClick(); break;
        case 2: _t->BtnDownClick(); break;
        case 3: _t->TypeChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->Timer1Timer(); break;
        case 5: _t->Timer2Timer(); break;
        case 6: _t->SelObsChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->SelFmtChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MonitorDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MonitorDialog.data,
      qt_meta_data_MonitorDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MonitorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MonitorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MonitorDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int MonitorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
