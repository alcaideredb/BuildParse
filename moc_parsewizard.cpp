/****************************************************************************
** Meta object code from reading C++ file 'parsewizard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Untitled Folder/citParse/parsewizard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'parsewizard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ParseWizard_t {
    QByteArrayData data[22];
    char stringdata[328];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ParseWizard_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ParseWizard_t qt_meta_stringdata_ParseWizard = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 25),
QT_MOC_LITERAL(2, 38, 0),
QT_MOC_LITERAL(3, 39, 4),
QT_MOC_LITERAL(4, 44, 23),
QT_MOC_LITERAL(5, 68, 5),
QT_MOC_LITERAL(6, 74, 30),
QT_MOC_LITERAL(7, 105, 23),
QT_MOC_LITERAL(8, 129, 23),
QT_MOC_LITERAL(9, 153, 31),
QT_MOC_LITERAL(10, 185, 2),
QT_MOC_LITERAL(11, 188, 8),
QT_MOC_LITERAL(12, 197, 8),
QT_MOC_LITERAL(13, 206, 8),
QT_MOC_LITERAL(14, 215, 11),
QT_MOC_LITERAL(15, 227, 10),
QT_MOC_LITERAL(16, 238, 23),
QT_MOC_LITERAL(17, 262, 9),
QT_MOC_LITERAL(18, 272, 3),
QT_MOC_LITERAL(19, 276, 20),
QT_MOC_LITERAL(20, 297, 23),
QT_MOC_LITERAL(21, 321, 6)
    },
    "ParseWizard\0on_lineEdit_2_textChanged\0"
    "\0arg1\0on_journalTable_clicked\0index\0"
    "on_comboBox_currentTextChanged\0"
    "on_pushButton_3_clicked\0on_pushButton_2_clicked\0"
    "on_parseWizard_currentIdChanged\0id\0"
    "viewPage\0editPage\0addError\0commitError\0"
    "eraseError\0on_parseWizard_accepted\0"
    "deleteRow\0row\0on_addAuthor_clicked\0"
    "on_deleteAuthor_clicked\0addRow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ParseWizard[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x08 /* Private */,
       4,    1,   97,    2, 0x08 /* Private */,
       6,    1,  100,    2, 0x08 /* Private */,
       7,    0,  103,    2, 0x08 /* Private */,
       8,    0,  104,    2, 0x08 /* Private */,
       9,    1,  105,    2, 0x08 /* Private */,
      11,    1,  108,    2, 0x08 /* Private */,
      12,    0,  111,    2, 0x08 /* Private */,
      13,    0,  112,    2, 0x08 /* Private */,
      14,    0,  113,    2, 0x08 /* Private */,
      15,    0,  114,    2, 0x08 /* Private */,
      16,    0,  115,    2, 0x08 /* Private */,
      17,    1,  116,    2, 0x08 /* Private */,
      19,    0,  119,    2, 0x08 /* Private */,
      20,    0,  120,    2, 0x08 /* Private */,
      21,    0,  121,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ParseWizard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ParseWizard *_t = static_cast<ParseWizard *>(_o);
        switch (_id) {
        case 0: _t->on_lineEdit_2_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_journalTable_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->on_comboBox_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_pushButton_3_clicked(); break;
        case 4: _t->on_pushButton_2_clicked(); break;
        case 5: _t->on_parseWizard_currentIdChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->viewPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->editPage(); break;
        case 8: _t->addError(); break;
        case 9: _t->commitError(); break;
        case 10: _t->eraseError(); break;
        case 11: _t->on_parseWizard_accepted(); break;
        case 12: _t->deleteRow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_addAuthor_clicked(); break;
        case 14: _t->on_deleteAuthor_clicked(); break;
        case 15: _t->addRow(); break;
        default: ;
        }
    }
}

const QMetaObject ParseWizard::staticMetaObject = {
    { &QWizard::staticMetaObject, qt_meta_stringdata_ParseWizard.data,
      qt_meta_data_ParseWizard,  qt_static_metacall, 0, 0}
};


const QMetaObject *ParseWizard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ParseWizard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ParseWizard.stringdata))
        return static_cast<void*>(const_cast< ParseWizard*>(this));
    return QWizard::qt_metacast(_clname);
}

int ParseWizard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizard::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
