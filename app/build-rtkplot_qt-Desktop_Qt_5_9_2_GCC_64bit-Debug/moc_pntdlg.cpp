/****************************************************************************
** Meta object code from reading C++ file 'pntdlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../rtkplot_qt/pntdlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pntdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PntDialog_t {
    QByteArrayData data[10];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PntDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PntDialog_t qt_meta_stringdata_PntDialog = {
    {
QT_MOC_LITERAL(0, 0, 9), // "PntDialog"
QT_MOC_LITERAL(1, 10, 11), // "BtnDelClick"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 11), // "BtnAddClick"
QT_MOC_LITERAL(4, 35, 14), // "BtnUpdateClick"
QT_MOC_LITERAL(5, 50, 18), // "PntListSetEditText"
QT_MOC_LITERAL(6, 69, 12), // "PntListClick"
QT_MOC_LITERAL(7, 82, 15), // "PntListDblClick"
QT_MOC_LITERAL(8, 98, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(9, 116, 1) // "w"

    },
    "PntDialog\0BtnDelClick\0\0BtnAddClick\0"
    "BtnUpdateClick\0PntListSetEditText\0"
    "PntListClick\0PntListDblClick\0"
    "QTableWidgetItem*\0w"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PntDialog[] = {

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
       7,    1,   49,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void PntDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PntDialog *_t = static_cast<PntDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->BtnDelClick(); break;
        case 1: _t->BtnAddClick(); break;
        case 2: _t->BtnUpdateClick(); break;
        case 3: _t->PntListSetEditText(); break;
        case 4: _t->PntListClick(); break;
        case 5: _t->PntListDblClick((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject PntDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PntDialog.data,
      qt_meta_data_PntDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PntDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PntDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PntDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int PntDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
