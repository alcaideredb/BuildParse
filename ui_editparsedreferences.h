/********************************************************************************
** Form generated from reading UI file 'editparsedreferences.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPARSEDREFERENCES_H
#define UI_EDITPARSEDREFERENCES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditParsedReferences
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *EditParsedReferences)
    {
        if (EditParsedReferences->objectName().isEmpty())
            EditParsedReferences->setObjectName(QStringLiteral("EditParsedReferences"));
        EditParsedReferences->resize(668, 640);
        buttonBox = new QDialogButtonBox(EditParsedReferences);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(470, 600, 176, 27));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        layoutWidget = new QWidget(EditParsedReferences);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 600, 104, 19));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);


        retranslateUi(EditParsedReferences);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditParsedReferences, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditParsedReferences, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditParsedReferences);
    } // setupUi

    void retranslateUi(QDialog *EditParsedReferences)
    {
        EditParsedReferences->setWindowTitle(QApplication::translate("EditParsedReferences", "Dialog", 0));
        label->setText(QApplication::translate("EditParsedReferences", "Error Count: ", 0));
        label_2->setText(QApplication::translate("EditParsedReferences", "0", 0));
    } // retranslateUi

};

namespace Ui {
    class EditParsedReferences: public Ui_EditParsedReferences {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPARSEDREFERENCES_H
