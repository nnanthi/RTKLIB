/****************************************************************************
** Meta object code from reading C++ file 'outstrdlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../app/rtknavi_qt/outstrdlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'outstrdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OutputStrDialog_t {
    QByteArrayData data[12];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OutputStrDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OutputStrDialog_t qt_meta_stringdata_OutputStrDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "OutputStrDialog"
QT_MOC_LITERAL(1, 16, 10), // "BtnOkClick"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 12), // "BtnStr1Click"
QT_MOC_LITERAL(4, 41, 12), // "BtnStr2Click"
QT_MOC_LITERAL(5, 54, 13), // "Stream1Change"
QT_MOC_LITERAL(6, 68, 13), // "Stream2Change"
QT_MOC_LITERAL(7, 82, 13), // "BtnFile1Click"
QT_MOC_LITERAL(8, 96, 13), // "BtnFile2Click"
QT_MOC_LITERAL(9, 110, 13), // "Stream1CClick"
QT_MOC_LITERAL(10, 124, 13), // "Stream2CClick"
QT_MOC_LITERAL(11, 138, 11) // "BtnKeyClick"

    },
    "OutputStrDialog\0BtnOkClick\0\0BtnStr1Click\0"
    "BtnStr2Click\0Stream1Change\0Stream2Change\0"
    "BtnFile1Click\0BtnFile2Click\0Stream1CClick\0"
    "Stream2CClick\0BtnKeyClick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OutputStrDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a /* Public */,
       3,    0,   65,    2, 0x0a /* Public */,
       4,    0,   66,    2, 0x0a /* Public */,
       5,    1,   67,    2, 0x0a /* Public */,
       6,    1,   70,    2, 0x0a /* Public */,
       7,    0,   73,    2, 0x0a /* Public */,
       8,    0,   74,    2, 0x0a /* Public */,
       9,    0,   75,    2, 0x0a /* Public */,
      10,    0,   76,    2, 0x0a /* Public */,
      11,    0,   77,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OutputStrDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OutputStrDialog *_t = static_cast<OutputStrDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->BtnOkClick(); break;
        case 1: _t->BtnStr1Click(); break;
        case 2: _t->BtnStr2Click(); break;
        case 3: _t->Stream1Change((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->Stream2Change((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->BtnFile1Click(); break;
        case 6: _t->BtnFile2Click(); break;
        case 7: _t->Stream1CClick(); break;
        case 8: _t->Stream2CClick(); break;
        case 9: _t->BtnKeyClick(); break;
        default: ;
        }
    }
}

const QMetaObject OutputStrDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_OutputStrDialog.data,
      qt_meta_data_OutputStrDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *OutputStrDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OutputStrDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OutputStrDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int OutputStrDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
