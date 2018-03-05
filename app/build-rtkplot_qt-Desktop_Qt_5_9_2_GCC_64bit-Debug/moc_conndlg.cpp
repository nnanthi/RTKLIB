/****************************************************************************
** Meta object code from reading C++ file 'conndlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../rtkplot_qt/conndlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'conndlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ConnectDialog_t {
    QByteArrayData data[11];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConnectDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConnectDialog_t qt_meta_stringdata_ConnectDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ConnectDialog"
QT_MOC_LITERAL(1, 14, 12), // "BtnOpt1Click"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 10), // "BtnOkClick"
QT_MOC_LITERAL(4, 39, 12), // "BtnCmd1Click"
QT_MOC_LITERAL(5, 52, 12), // "BtnOpt2Click"
QT_MOC_LITERAL(6, 65, 12), // "BtnCmd2Click"
QT_MOC_LITERAL(7, 78, 16), // "SelStream1Change"
QT_MOC_LITERAL(8, 95, 16), // "SolFormat1Change"
QT_MOC_LITERAL(9, 112, 16), // "SolFormat2Change"
QT_MOC_LITERAL(10, 129, 16) // "SelStream2Change"

    },
    "ConnectDialog\0BtnOpt1Click\0\0BtnOkClick\0"
    "BtnCmd1Click\0BtnOpt2Click\0BtnCmd2Click\0"
    "SelStream1Change\0SolFormat1Change\0"
    "SolFormat2Change\0SelStream2Change"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConnectDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    0,   66,    2, 0x0a /* Public */,
      10,    0,   67,    2, 0x0a /* Public */,

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

       0        // eod
};

void ConnectDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ConnectDialog *_t = static_cast<ConnectDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->BtnOpt1Click(); break;
        case 1: _t->BtnOkClick(); break;
        case 2: _t->BtnCmd1Click(); break;
        case 3: _t->BtnOpt2Click(); break;
        case 4: _t->BtnCmd2Click(); break;
        case 5: _t->SelStream1Change(); break;
        case 6: _t->SolFormat1Change(); break;
        case 7: _t->SolFormat2Change(); break;
        case 8: _t->SelStream2Change(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ConnectDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ConnectDialog.data,
      qt_meta_data_ConnectDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ConnectDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConnectDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ConnectDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ConnectDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
