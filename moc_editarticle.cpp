/****************************************************************************
** Meta object code from reading C++ file 'editarticle.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Untitled Folder/citParse/editarticle.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editarticle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_EditArticle_t {
    QByteArrayData data[13];
    char stringdata[226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EditArticle_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EditArticle_t qt_meta_stringdata_EditArticle = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 20),
QT_MOC_LITERAL(2, 33, 0),
QT_MOC_LITERAL(3, 34, 12),
QT_MOC_LITERAL(4, 47, 5),
QT_MOC_LITERAL(5, 53, 23),
QT_MOC_LITERAL(6, 77, 28),
QT_MOC_LITERAL(7, 106, 4),
QT_MOC_LITERAL(8, 111, 22),
QT_MOC_LITERAL(9, 134, 5),
QT_MOC_LITERAL(10, 140, 30),
QT_MOC_LITERAL(11, 171, 21),
QT_MOC_LITERAL(12, 193, 32)
    },
    "EditArticle\0on_addAuthor_clicked\0\0"
    "journalSetup\0entry\0on_removeAuthor_clicked\0"
    "on_searchjournal_textChanged\0arg1\0"
    "on_tableView_2_clicked\0index\0"
    "on_comboBox_currentTextChanged\0"
    "on_pushButton_clicked\0"
    "on_comboBox_2_currentTextChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EditArticle[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    1,   55,    2, 0x08 /* Private */,
       5,    0,   58,    2, 0x08 /* Private */,
       6,    1,   59,    2, 0x08 /* Private */,
       8,    1,   62,    2, 0x08 /* Private */,
      10,    1,   65,    2, 0x08 /* Private */,
      11,    0,   68,    2, 0x08 /* Private */,
      12,    1,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QModelIndex,    9,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void EditArticle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EditArticle *_t = static_cast<EditArticle *>(_o);
        switch (_id) {
        case 0: _t->on_addAuthor_clicked(); break;
        case 1: _t->journalSetup((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_removeAuthor_clicked(); break;
        case 3: _t->on_searchjournal_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_tableView_2_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->on_comboBox_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_pushButton_clicked(); break;
        case 7: _t->on_comboBox_2_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject EditArticle::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_EditArticle.data,
      qt_meta_data_EditArticle,  qt_static_metacall, 0, 0}
};


const QMetaObject *EditArticle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EditArticle::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EditArticle.stringdata))
        return static_cast<void*>(const_cast< EditArticle*>(this));
    return QDialog::qt_metacast(_clname);
}

int EditArticle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
