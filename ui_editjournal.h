/********************************************************************************
** Form generated from reading UI file 'editjournal.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITJOURNAL_H
#define UI_EDITJOURNAL_H

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

class Ui_EditJournal
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditJournal)
    {
        if (EditJournal->objectName().isEmpty())
            EditJournal->setObjectName(QStringLiteral("EditJournal"));
        EditJournal->resize(706, 237);
        gridLayout = new QGridLayout(EditJournal);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(EditJournal);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(EditJournal);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(EditJournal);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 2);


        retranslateUi(EditJournal);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditJournal, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditJournal, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditJournal);
    } // setupUi

    void retranslateUi(QDialog *EditJournal)
    {
        EditJournal->setWindowTitle(QApplication::translate("EditJournal", "Dialog", 0));
        label->setText(QApplication::translate("EditJournal", "Journal Name: ", 0));
    } // retranslateUi

};

namespace Ui {
    class EditJournal: public Ui_EditJournal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITJOURNAL_H
