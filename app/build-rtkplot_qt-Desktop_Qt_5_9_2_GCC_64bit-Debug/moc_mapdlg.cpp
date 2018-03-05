/****************************************************************************
** Meta object code from reading C++ file 'mapdlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../rtkplot_qt/mapdlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mapdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MapAreaDialog_t {
    QByteArrayData data[7];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MapAreaDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MapAreaDialog_t qt_meta_stringdata_MapAreaDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "MapAreaDialog"
QT_MOC_LITERAL(1, 14, 13), // "BtnCloseClick"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 14), // "BtnUpdateClick"
QT_MOC_LITERAL(4, 44, 12), // "BtnSaveClick"
QT_MOC_LITERAL(5, 57, 14), // "BtnCenterClick"
QT_MOC_LITERAL(6, 72, 12) // "ScaleEqClick"

    },
    "MapAreaDialog\0BtnCloseClick\0\0"
    "BtnUpdateClick\0BtnSaveClick\0BtnCenterClick\0"
    "ScaleEqClick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MapAreaDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MapAreaDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MapAreaDialog *_t = static_cast<MapAreaDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->BtnCloseClick(); break;
        case 1: _t->BtnUpdateClick(); break;
        case 2: _t->BtnSaveClick(); break;
        case 3: _t->BtnCenterClick(); break;
        case 4: _t->ScaleEqClick(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MapAreaDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MapAreaDialog.data,
      qt_meta_data_MapAreaDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MapAreaDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapAreaDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MapAreaDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int MapAreaDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
