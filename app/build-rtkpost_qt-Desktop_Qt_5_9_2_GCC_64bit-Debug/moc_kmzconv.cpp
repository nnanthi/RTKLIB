/****************************************************************************
** Meta object code from reading C++ file 'kmzconv.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../rtkpost_qtn/kmzconv.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kmzconv.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ConvDialog_t {
    QByteArrayData data[15];
    char stringdata0[222];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConvDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConvDialog_t qt_meta_stringdata_ConvDialog = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ConvDialog"
QT_MOC_LITERAL(1, 11, 13), // "BtnCloseClick"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 14), // "AddOffsetClick"
QT_MOC_LITERAL(4, 41, 15), // "BtnConvertClick"
QT_MOC_LITERAL(5, 57, 12), // "BtnViewClick"
QT_MOC_LITERAL(6, 70, 13), // "TimeSpanClick"
QT_MOC_LITERAL(7, 84, 13), // "TimeIntFClick"
QT_MOC_LITERAL(8, 98, 17), // "BtnInputFileClick"
QT_MOC_LITERAL(9, 116, 15), // "InputFileChange"
QT_MOC_LITERAL(10, 132, 13), // "CompressClick"
QT_MOC_LITERAL(11, 146, 21), // "GoogleEarthFileChange"
QT_MOC_LITERAL(12, 168, 23), // "BtnGoogleEarthFileClick"
QT_MOC_LITERAL(13, 192, 14), // "FormatKMLClick"
QT_MOC_LITERAL(14, 207, 14) // "FormatGPXClick"

    },
    "ConvDialog\0BtnCloseClick\0\0AddOffsetClick\0"
    "BtnConvertClick\0BtnViewClick\0TimeSpanClick\0"
    "TimeIntFClick\0BtnInputFileClick\0"
    "InputFileChange\0CompressClick\0"
    "GoogleEarthFileChange\0BtnGoogleEarthFileClick\0"
    "FormatKMLClick\0FormatGPXClick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConvDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x0a /* Public */,
       3,    0,   80,    2, 0x0a /* Public */,
       4,    0,   81,    2, 0x0a /* Public */,
       5,    0,   82,    2, 0x0a /* Public */,
       6,    0,   83,    2, 0x0a /* Public */,
       7,    0,   84,    2, 0x0a /* Public */,
       8,    0,   85,    2, 0x0a /* Public */,
       9,    0,   86,    2, 0x0a /* Public */,
      10,    0,   87,    2, 0x0a /* Public */,
      11,    0,   88,    2, 0x0a /* Public */,
      12,    0,   89,    2, 0x0a /* Public */,
      13,    0,   90,    2, 0x0a /* Public */,
      14,    0,   91,    2, 0x0a /* Public */,

 // slots: parameters
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ConvDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ConvDialog *_t = static_cast<ConvDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->BtnCloseClick(); break;
        case 1: _t->AddOffsetClick(); break;
        case 2: _t->BtnConvertClick(); break;
        case 3: _t->BtnViewClick(); break;
        case 4: _t->TimeSpanClick(); break;
        case 5: _t->TimeIntFClick(); break;
        case 6: _t->BtnInputFileClick(); break;
        case 7: _t->InputFileChange(); break;
        case 8: _t->CompressClick(); break;
        case 9: _t->GoogleEarthFileChange(); break;
        case 10: _t->BtnGoogleEarthFileClick(); break;
        case 11: _t->FormatKMLClick(); break;
        case 12: _t->FormatGPXClick(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ConvDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ConvDialog.data,
      qt_meta_data_ConvDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ConvDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConvDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ConvDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::ConvDialog"))
        return static_cast< Ui::ConvDialog*>(this);
    return QDialog::qt_metacast(_clname);
}

int ConvDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
