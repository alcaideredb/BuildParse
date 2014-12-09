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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditParsedReferences
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QDialog *EditParsedReferences)
    {
        if (EditParsedReferences->objectName().isEmpty())
            EditParsedReferences->setObjectName(QStringLiteral("EditParsedReferences"));
        EditParsedReferences->resize(668, 640);
        gridLayout = new QGridLayout(EditParsedReferences);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buttonBox = new QDialogButtonBox(EditParsedReferences);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(EditParsedReferences);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(EditParsedReferences);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        scrollArea = new QScrollArea(EditParsedReferences);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 648, 587));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 3);


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
