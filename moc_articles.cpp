/****************************************************************************
** Meta object code from reading C++ file 'articles.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Untitled Folder/citParse/articles.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'articles.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Articles_t {
    QByteArrayData data[14];
    char stringdata[285];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Articles_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Articles_t qt_meta_stringdata_Articles = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 23),
QT_MOC_LITERAL(2, 33, 0),
QT_MOC_LITERAL(3, 34, 4),
QT_MOC_LITERAL(4, 39, 23),
QT_MOC_LITERAL(5, 63, 5),
QT_MOC_LITERAL(6, 69, 31),
QT_MOC_LITERAL(7, 101, 31),
QT_MOC_LITERAL(8, 133, 28),
QT_MOC_LITERAL(9, 162, 23),
QT_MOC_LITERAL(10, 186, 27),
QT_MOC_LITERAL(11, 214, 15),
QT_MOC_LITERAL(12, 230, 28),
QT_MOC_LITERAL(13, 259, 25)
    },
    "Articles\0on_lineEdit_textChanged\0\0"
    "arg1\0on_journalTable_clicked\0index\0"
    "on_vComboBox_currentTextChanged\0"
    "on_iComboBox_currentTextChanged\0"
    "on_viewArticleButton_clicked\0"
    "on_articleTable_clicked\0"
    "on_delArticleButton_clicked\0setArticleTable\0"
    "on_editArticleButton_clicked\0"
    "on_articleTable_activated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Articles[] = {

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
       6,    1,   70,    2, 0x08 /* Private */,
       7,    1,   73,    2, 0x08 /* Private */,
       8,    0,   76,    2, 0x08 /* Private */,
       9,    1,   77,    2, 0x08 /* Private */,
      10,    0,   80,    2, 0x08 /* Private */,
      11,    0,   81,    2, 0x08 /* Private */,
      12,    0,   82,    2, 0x08 /* Private */,
      13,    1,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    5,

       0        // eod
};

void Articles::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Articles *_t = static_cast<Articles *>(_o);
        switch (_id) {
        case 0: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_journalTable_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->on_vComboBox_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_iComboBox_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_viewArticleButton_clicked(); break;
        case 5: _t->on_articleTable_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->on_delArticleButton_clicked(); break;
        case 7: _t->setArticleTable(); break;
        case 8: _t->on_editArticleButton_clicked(); break;
        case 9: _t->on_articleTable_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Articles::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Articles.data,
      qt_meta_data_Articles,  qt_static_metacall, 0, 0}
};


const QMetaObject *Articles::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Articles::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Articles.stringdata))
        return static_cast<void*>(const_cast< Articles*>(this));
    return QDialog::qt_metacast(_clname);
}

int Articles::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
