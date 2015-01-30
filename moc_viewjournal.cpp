/****************************************************************************
** Meta object code from reading C++ file 'viewjournal.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Untitled Folder/citParse/viewjournal.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'viewjournal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ViewJournal_t {
    QByteArrayData data[7];
    char stringdata[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ViewJournal_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ViewJournal_t qt_meta_stringdata_ViewJournal = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 21),
QT_MOC_LITERAL(2, 34, 0),
QT_MOC_LITERAL(3, 35, 5),
QT_MOC_LITERAL(4, 41, 25),
QT_MOC_LITERAL(5, 67, 28),
QT_MOC_LITERAL(6, 96, 26)
    },
    "ViewJournal\0on_issueTable_clicked\0\0"
    "index\0on_addIssueButton_clicked\0"
    "on_deleteIssueButton_clicked\0"
    "on_editIssueButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ViewJournal[] = {

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
       1,    1,   34,    2, 0x08 /* Private */,
       4,    0,   37,    2, 0x08 /* Private */,
       5,    0,   38,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ViewJournal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ViewJournal *_t = static_cast<ViewJournal *>(_o);
        switch (_id) {
        case 0: _t->on_issueTable_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->on_addIssueButton_clicked(); break;
        case 2: _t->on_deleteIssueButton_clicked(); break;
        case 3: _t->on_editIssueButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject ViewJournal::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ViewJournal.data,
      qt_meta_data_ViewJournal,  qt_static_metacall, 0, 0}
};


const QMetaObject *ViewJournal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ViewJournal::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ViewJournal.stringdata))
        return static_cast<void*>(const_cast< ViewJournal*>(this));
    return QDialog::qt_metacast(_clname);
}

int ViewJournal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
