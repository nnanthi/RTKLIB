/****************************************************************************
** Meta object code from reading C++ file 'fileoptdlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../appcmn_qt/fileoptdlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fileoptdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FileOptDialog_t {
    QByteArrayData data[6];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileOptDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileOptDialog_t qt_meta_stringdata_FileOptDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "FileOptDialog"
QT_MOC_LITERAL(1, 14, 16), // "BtnFilePathClick"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 10), // "BtnOkClick"
QT_MOC_LITERAL(4, 43, 15), // "ChkTimeTagClick"
QT_MOC_LITERAL(5, 59, 11) // "BtnKeyClick"

    },
    "FileOptDialog\0BtnFilePathClick\0\0"
    "BtnOkClick\0ChkTimeTagClick\0BtnKeyClick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileOptDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    0,   36,    2, 0x0a /* Public */,
       5,    0,   37,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FileOptDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileOptDialog *_t = static_cast<FileOptDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->BtnFilePathClick(); break;
        case 1: _t->BtnOkClick(); break;
        case 2: _t->ChkTimeTagClick(); break;
        case 3: _t->BtnKeyClick(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject FileOptDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FileOptDialog.data,
      qt_meta_data_FileOptDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FileOptDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileOptDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileOptDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int FileOptDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
