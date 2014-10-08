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

class Ui_EditRefInDb
{
public:

    void setupUi(QDialog *EditRefInDb)
    {
        if (EditRefInDb->objectName().isEmpty())
            EditRefInDb->setObjectName(QStringLiteral("EditRefInDb"));
        EditRefInDb->resize(773, 468);

        retranslateUi(EditRefInDb);

        QMetaObject::connectSlotsByName(EditRefInDb);
    } // setupUi

    void retranslateUi(QDialog *EditRefInDb)
    {
        EditRefInDb->setWindowTitle(QApplication::translate("EditRefInDb", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class EditRefInDb: public Ui_EditRefInDb {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITREFINDB_H
