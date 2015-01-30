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
    QByteArrayData data[17];
    char stringdata[263];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ViewParsedReferences_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ViewParsedReferences_t qt_meta_stringdata_ViewParsedReferences = {
    {
QT_MOC_LITERAL(0, 0, 20),
QT_MOC_LITERAL(1, 21, 8),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 6),
QT_MOC_LITERAL(4, 38, 11),
QT_MOC_LITERAL(5, 50, 9),
QT_MOC_LITERAL(6, 60, 3),
QT_MOC_LITERAL(7, 64, 30),
QT_MOC_LITERAL(8, 95, 4),
QT_MOC_LITERAL(9, 100, 32),
QT_MOC_LITERAL(10, 133, 23),
QT_MOC_LITERAL(11, 157, 21),
QT_MOC_LITERAL(12, 179, 20),
QT_MOC_LITERAL(13, 200, 5),
QT_MOC_LITERAL(14, 206, 22),
QT_MOC_LITERAL(15, 229, 11),
QT_MOC_LITERAL(16, 241, 21)
    },
    "ViewParsedReferences\0addError\0\0addRow\0"
    "commitError\0deleteRow\0row\0"
    "on_comboBox_currentTextChanged\0arg1\0"
    "on_comboBox_2_currentTextChanged\0"
    "on_lineEdit_textChanged\0on_pushButton_clicked\0"
    "on_tableView_clicked\0index\0"
    "on_tableView_2_clicked\0viewContent\0"
    "on_editButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ViewParsedReferences[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    1,   77,    2, 0x08 /* Private */,
       7,    1,   80,    2, 0x08 /* Private */,
       9,    1,   83,    2, 0x08 /* Private */,
      10,    1,   86,    2, 0x08 /* Private */,
      11,    0,   89,    2, 0x08 /* Private */,
      12,    1,   90,    2, 0x08 /* Private */,
      14,    1,   93,    2, 0x08 /* Private */,
      15,    1,   96,    2, 0x08 /* Private */,
      16,    0,   99,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   13,
    QMetaType::Void, QMetaType::QModelIndex,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,

       0        // eod
};

void ViewParsedReferences::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ViewParsedReferences *_t = static_cast<ViewParsedReferences *>(_o);
        switch (_id) {
        case 0: _t->addError(); break;
        case 1: _t->addRow(); break;
        case 2: _t->commitError(); break;
        case 3: _t->deleteRow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_comboBox_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_comboBox_2_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_pushButton_clicked(); break;
        case 8: _t->on_tableView_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: _t->on_tableView_2_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 10: _t->viewContent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_editButton_clicked(); break;
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
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
