/****************************************************************************
** Meta object code from reading C++ file 'markdlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../app/rtknavi_qt/markdlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'markdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QMarkDialog_t {
    QByteArrayData data[8];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QMarkDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QMarkDialog_t qt_meta_stringdata_QMarkDialog = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QMarkDialog"
QT_MOC_LITERAL(1, 12, 14), // "BtnCancelClick"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 10), // "BtnOkClick"
QT_MOC_LITERAL(4, 39, 18), // "ChkMarkerNameClick"
QT_MOC_LITERAL(5, 58, 14), // "BtnRepDlgClick"
QT_MOC_LITERAL(6, 73, 10), // "RadioClick"
QT_MOC_LITERAL(7, 84, 11) // "BtnPosClick"

    },
    "QMarkDialog\0BtnCancelClick\0\0BtnOkClick\0"
    "ChkMarkerNameClick\0BtnRepDlgClick\0"
    "RadioClick\0BtnPosClick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QMarkDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    0,   49,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QMarkDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMarkDialog *_t = static_cast<QMarkDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->BtnCancelClick(); break;
        case 1: _t->BtnOkClick(); break;
        case 2: _t->ChkMarkerNameClick(); break;
        case 3: _t->BtnRepDlgClick(); break;
        case 4: _t->RadioClick(); break;
        case 5: _t->BtnPosClick(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QMarkDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QMarkDialog.data,
      qt_meta_data_QMarkDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QMarkDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMarkDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QMarkDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QMarkDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
