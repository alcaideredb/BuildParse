/********************************************************************************
** Form generated from reading UI file 'editrefindb.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITREFINDB_H
#define UI_EDITREFINDB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_EditRefInDB
{
public:

    void setupUi(QDialog *EditRefInDB)
    {
        if (EditRefInDB->objectName().isEmpty())
            EditRefInDB->setObjectName(QStringLiteral("EditRefInDB"));
        EditRefInDB->resize(771, 462);

        retranslateUi(EditRefInDB);

        QMetaObject::connectSlotsByName(EditRefInDB);
    } // setupUi

    void retranslateUi(QDialog *EditRefInDB)
    {
        EditRefInDB->setWindowTitle(QApplication::translate("EditRefInDB", "Edit References", 0));
    } // retranslateUi

};

namespace Ui {
    class EditRefInDB: public Ui_EditRefInDB {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITREFINDB_H
