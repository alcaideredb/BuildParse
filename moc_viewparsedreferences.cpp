/****************************************************************************
** Meta object code from reading C++ file 'viewparsedreferences.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Untitled Folder/citParse/viewparsedreferences.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'viewparsedreferences.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ViewParsedReferences_t {
    QByteArrayData data[14];
    char stringdata[246];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ViewParsedReferences_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ViewParsedReferences_t qt_meta_stringdata_ViewParsedReferences = {
    {
QT_MOC_LITERAL(0, 0, 20),
QT_MOC_LITERAL(1, 21, 22),
QT_MOC_LITERAL(2, 44, 0),
QT_MOC_LITERAL(3, 45, 5),
QT_MOC_LITERAL(4, 51, 11),
QT_MOC_LITERAL(5, 63, 21),
QT_MOC_LITERAL(6, 85, 23),
QT_MOC_LITERAL(7, 109, 4),
QT_MOC_LITERAL(8, 114, 22),
QT_MOC_LITERAL(9, 137, 30),
QT_MOC_LITERAL(10, 168, 32),
QT_MOC_LITERAL(11, 201, 23),
QT_MOC_LITERAL(12, 225, 8),
QT_MOC_LITERAL(13, 234, 11)
    },
    "ViewParsedReferences\0on_tableView_activated\0"
    "\0index\0viewContent\0on_pushButton_clicked\0"
    "on_lineEdit_textChanged\0arg1\0"
    "on_tableView_2_clicked\0"
    "on_comboBox_currentTextChanged\0"
    "on_comboBox_2_currentTextChanged\0"
    "on_pushButton_2_clicked\0addError\0"
    "commitError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ViewParsedReferences[] = {

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
       1,    1,   64,    2, 0x08 /* Private */,
       4,    1,   67,    2, 0x08 /* Private */,
       5,    0,   70,    2, 0x08 /* Private */,
       6,    1,   71,    2, 0x08 /* Private */,
       8,    1,   74,    2, 0x08 /* Private */,
       9,    1,   77,    2, 0x08 /* Private */,
      10,    1,   80,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ViewParsedReferences::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ViewParsedReferences *_t = static_cast<ViewParsedReferences *>(_o);
        switch (_id) {
        case 0: _t->on_tableView_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->viewContent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_tableView_2_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->on_comboBox_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_comboBox_2_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_pushButton_2_clicked(); break;
        case 8: _t->addError(); break;
        case 9: _t->commitError(); break;
        default: ;
        }
    }
}

const QMetaObject ViewParsedReferences::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ViewParsedReferences.data,
      qt_meta_data_ViewParsedReferences,  qt_static_metacall, 0, 0}
};


const QMetaObject *ViewParsedReferences::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ViewParsedReferences::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ViewParsedReferences.stringdata))
        return static_cast<void*>(const_cast< ViewParsedReferences*>(this));
    return QDialog::qt_metacast(_clname);
}

int ViewParsedReferences::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
