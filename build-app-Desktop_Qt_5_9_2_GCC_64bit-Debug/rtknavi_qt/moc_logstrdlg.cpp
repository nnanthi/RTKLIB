/****************************************************************************
** Meta object code from reading C++ file 'logstrdlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../app/rtknavi_qt/logstrdlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logstrdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LogStrDialog_t {
    QByteArrayData data[16];
    char stringdata0[202];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogStrDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogStrDialog_t qt_meta_stringdata_LogStrDialog = {
    {
QT_MOC_LITERAL(0, 0, 12), // "LogStrDialog"
QT_MOC_LITERAL(1, 13, 10), // "BtnOkClick"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 13), // "Stream1Change"
QT_MOC_LITERAL(4, 39, 13), // "Stream2Change"
QT_MOC_LITERAL(5, 53, 12), // "BtnStr1Click"
QT_MOC_LITERAL(6, 66, 12), // "BtnStr2Click"
QT_MOC_LITERAL(7, 79, 13), // "BtnFile1Click"
QT_MOC_LITERAL(8, 93, 13), // "BtnFile2Click"
QT_MOC_LITERAL(9, 107, 13), // "Stream1CClick"
QT_MOC_LITERAL(10, 121, 13), // "Stream2CClick"
QT_MOC_LITERAL(11, 135, 11), // "BtnKeyClick"
QT_MOC_LITERAL(12, 147, 12), // "BtnStr3Click"
QT_MOC_LITERAL(13, 160, 13), // "BtnFile3Click"
QT_MOC_LITERAL(14, 174, 13), // "Stream3CClick"
QT_MOC_LITERAL(15, 188, 13) // "Stream3Change"

    },
    "LogStrDialog\0BtnOkClick\0\0Stream1Change\0"
    "Stream2Change\0BtnStr1Click\0BtnStr2Click\0"
    "BtnFile1Click\0BtnFile2Click\0Stream1CClick\0"
    "Stream2CClick\0BtnKeyClick\0BtnStr3Click\0"
    "BtnFile3Click\0Stream3CClick\0Stream3Change"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogStrDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x0a /* Public */,
       3,    1,   85,    2, 0x0a /* Public */,
       4,    1,   88,    2, 0x0a /* Public */,
       5,    0,   91,    2, 0x0a /* Public */,
       6,    0,   92,    2, 0x0a /* Public */,
       7,    0,   93,    2, 0x0a /* Public */,
       8,    0,   94,    2, 0x0a /* Public */,
       9,    0,   95,    2, 0x0a /* Public */,
      10,    0,   96,    2, 0x0a /* Public */,
      11,    0,   97,    2, 0x0a /* Public */,
      12,    0,   98,    2, 0x0a /* Public */,
      13,    0,   99,    2, 0x0a /* Public */,
      14,    0,  100,    2, 0x0a /* Public */,
      15,    1,  101,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void LogStrDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LogStrDialog *_t = static_cast<LogStrDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->BtnOkClick(); break;
        case 1: _t->Stream1Change((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->Stream2Change((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->BtnStr1Click(); break;
        case 4: _t->BtnStr2Click(); break;
        case 5: _t->BtnFile1Click(); break;
        case 6: _t->BtnFile2Click(); break;
        case 7: _t->Stream1CClick(); break;
        case 8: _t->Stream2CClick(); break;
        case 9: _t->BtnKeyClick(); break;
        case 10: _t->BtnStr3Click(); break;
        case 11: _t->BtnFile3Click(); break;
        case 12: _t->Stream3CClick(); break;
        case 13: _t->Stream3Change((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject LogStrDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LogStrDialog.data,
      qt_meta_data_LogStrDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LogStrDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogStrDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LogStrDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int LogStrDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
