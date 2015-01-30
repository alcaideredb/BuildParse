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
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QDialog *EditParsedReferences)
    {
        if (EditParsedReferences->objectName().isEmpty())
            EditParsedReferences->setObjectName(QStringLiteral("EditParsedReferences"));
        EditParsedReferences->resize(668, 508);
        gridLayout = new QGridLayout(EditParsedReferences);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(EditParsedReferences);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Trebuchet MS"));
        font.setPointSize(14);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(EditParsedReferences);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        scrollArea = new QScrollArea(EditParsedReferences);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 648, 457));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 1, 0, 1, 3);


        retranslateUi(EditParsedReferences);

        QMetaObject::connectSlotsByName(EditParsedReferences);
    } // setupUi

    void retranslateUi(QDialog *EditParsedReferences)
    {
        EditParsedReferences->setWindowTitle(QApplication::translate("EditParsedReferences", "Dialog", 0));
        label->setText(QApplication::translate("EditParsedReferences", "Errors:", 0));
        label_2->setText(QApplication::translate("EditParsedReferences", "0", 0));
    } // retranslateUi

};

namespace Ui {
    class EditParsedReferences: public Ui_EditParsedReferences {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPARSEDREFERENCES_H
