/****************************************************************************
** Meta object code from reading C++ file 'skydlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../rtkplot_qt/skydlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'skydlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SkyImgDialog_t {
    QByteArrayData data[12];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SkyImgDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SkyImgDialog_t qt_meta_stringdata_SkyImgDialog = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SkyImgDialog"
QT_MOC_LITERAL(1, 13, 13), // "BtnCloseClick"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 14), // "BtnUpdateClick"
QT_MOC_LITERAL(4, 43, 12), // "BtnSaveClick"
QT_MOC_LITERAL(5, 56, 12), // "SkyResChange"
QT_MOC_LITERAL(6, 69, 12), // "BtnLoadClick"
QT_MOC_LITERAL(7, 82, 15), // "BtnGenMaskClick"
QT_MOC_LITERAL(8, 98, 16), // "SkyElMaskClicked"
QT_MOC_LITERAL(9, 115, 18), // "SkyDestCorrClicked"
QT_MOC_LITERAL(10, 134, 14), // "SkyFlipClicked"
QT_MOC_LITERAL(11, 149, 18) // "SkyBinarizeClicked"

    },
    "SkyImgDialog\0BtnCloseClick\0\0BtnUpdateClick\0"
    "BtnSaveClick\0SkyResChange\0BtnLoadClick\0"
    "BtnGenMaskClick\0SkyElMaskClicked\0"
    "SkyDestCorrClicked\0SkyFlipClicked\0"
    "SkyBinarizeClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SkyImgDialog[] = {

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
       5,    0,   67,    2, 0x0a /* Public */,
       6,    0,   68,    2, 0x0a /* Public */,
       7,    0,   69,    2, 0x0a /* Public */,
       8,    0,   70,    2, 0x0a /* Public */,
       9,    0,   71,    2, 0x0a /* Public */,
      10,    0,   72,    2, 0x0a /* Public */,
      11,    0,   73,    2, 0x0a /* Public */,

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

       0        // eod
};

void SkyImgDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SkyImgDialog *_t = static_cast<SkyImgDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->BtnCloseClick(); break;
        case 1: _t->BtnUpdateClick(); break;
        case 2: _t->BtnSaveClick(); break;
        case 3: _t->SkyResChange(); break;
        case 4: _t->BtnLoadClick(); break;
        case 5: _t->BtnGenMaskClick(); break;
        case 6: _t->SkyElMaskClicked(); break;
        case 7: _t->SkyDestCorrClicked(); break;
        case 8: _t->SkyFlipClicked(); break;
        case 9: _t->SkyBinarizeClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject SkyImgDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SkyImgDialog.data,
      qt_meta_data_SkyImgDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SkyImgDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SkyImgDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SkyImgDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SkyImgDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
