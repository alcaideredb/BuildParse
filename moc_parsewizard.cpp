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
struct qt_meta_stringdata_parseWizard_t {
    QByteArrayData data[20];
    char stringdata[313];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_parseWizard_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_parseWizard_t qt_meta_stringdata_parseWizard = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 24),
QT_MOC_LITERAL(2, 37, 0),
QT_MOC_LITERAL(3, 38, 4),
QT_MOC_LITERAL(4, 43, 21),
QT_MOC_LITERAL(5, 65, 25),
QT_MOC_LITERAL(6, 91, 4),
QT_MOC_LITERAL(7, 96, 22),
QT_MOC_LITERAL(8, 119, 5),
QT_MOC_LITERAL(9, 125, 30),
QT_MOC_LITERAL(10, 156, 23),
QT_MOC_LITERAL(11, 180, 23),
QT_MOC_LITERAL(12, 204, 31),
QT_MOC_LITERAL(13, 236, 2),
QT_MOC_LITERAL(14, 239, 8),
QT_MOC_LITERAL(15, 248, 8),
QT_MOC_LITERAL(16, 257, 8),
QT_MOC_LITERAL(17, 266, 11),
QT_MOC_LITERAL(18, 278, 10),
QT_MOC_LITERAL(19, 289, 23)
    },
    "parseWizard\0on_label_2_linkActivated\0"
    "\0link\0on_pushButton_clicked\0"
    "on_lineEdit_2_textChanged\0arg1\0"
    "on_tableView_2_clicked\0index\0"
    "on_comboBox_currentTextChanged\0"
    "on_pushButton_3_clicked\0on_pushButton_2_clicked\0"
    "on_parseWizard_currentIdChanged\0id\0"
    "viewPage\0editPage\0addError\0commitError\0"
    "eraseError\0on_parseWizard_accepted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_parseWizard[] = {

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
       1,    1,   84,    2, 0x08 /* Private */,
       4,    0,   87,    2, 0x08 /* Private */,
       5,    1,   88,    2, 0x08 /* Private */,
       7,    1,   91,    2, 0x08 /* Private */,
       9,    1,   94,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    0,   98,    2, 0x08 /* Private */,
      12,    1,   99,    2, 0x08 /* Private */,
      14,    1,  102,    2, 0x08 /* Private */,
      15,    0,  105,    2, 0x08 /* Private */,
      16,    0,  106,    2, 0x08 /* Private */,
      17,    0,  107,    2, 0x08 /* Private */,
      18,    0,  108,    2, 0x08 /* Private */,
      19,    0,  109,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QModelIndex,    8,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void parseWizard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        parseWizard *_t = static_cast<parseWizard *>(_o);
        switch (_id) {
        case 0: _t->on_label_2_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_lineEdit_2_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_tableView_2_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->on_comboBox_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_pushButton_3_clicked(); break;
        case 6: _t->on_pushButton_2_clicked(); break;
        case 7: _t->on_parseWizard_currentIdChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->viewPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->editPage(); break;
        case 10: _t->addError(); break;
        case 11: _t->commitError(); break;
        case 12: _t->eraseError(); break;
        case 13: _t->on_parseWizard_accepted(); break;
        default: ;
        }
    }
}

const QMetaObject parseWizard::staticMetaObject = {
    { &QWizard::staticMetaObject, qt_meta_stringdata_parseWizard.data,
      qt_meta_data_parseWizard,  qt_static_metacall, 0, 0}
};


const QMetaObject *parseWizard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *parseWizard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_parseWizard.stringdata))
        return static_cast<void*>(const_cast< parseWizard*>(this));
    return QWizard::qt_metacast(_clname);
}

int parseWizard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizard::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
