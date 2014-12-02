/********************************************************************************
** Form generated from reading UI file 'addjournal.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDJOURNAL_H
#define UI_ADDJOURNAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_AddJournal
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddJournal)
    {
        if (AddJournal->objectName().isEmpty())
            AddJournal->setObjectName(QStringLiteral("AddJournal"));
        AddJournal->resize(676, 356);
        gridLayout = new QGridLayout(AddJournal);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(AddJournal);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(AddJournal);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(AddJournal);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 1, 1, 1);


        retranslateUi(AddJournal);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddJournal, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddJournal, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddJournal);
    } // setupUi

    void retranslateUi(QDialog *AddJournal)
    {
        AddJournal->setWindowTitle(QApplication::translate("AddJournal", "Dialog", 0));
        label->setText(QApplication::translate("AddJournal", "Journal Name: ", 0));
    } // retranslateUi

};

namespace Ui {
    class AddJournal: public Ui_AddJournal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDJOURNAL_H
