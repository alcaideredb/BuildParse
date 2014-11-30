/********************************************************************************
** Form generated from reading UI file 'editreference.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITREFERENCE_H
#define UI_EDITREFERENCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editreference
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label;
    QTableView *tableView;

    void setupUi(QDialog *editreference)
    {
        if (editreference->objectName().isEmpty())
            editreference->setObjectName(QStringLiteral("editreference"));
        editreference->resize(705, 495);
        gridLayout_2 = new QGridLayout(editreference);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        scrollArea = new QScrollArea(editreference);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 337, 450));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 1, 1, 1, 1);

        label = new QLabel(editreference);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        tableView = new QTableView(editreference);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 2, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(editreference);

        QMetaObject::connectSlotsByName(editreference);
    } // setupUi

    void retranslateUi(QDialog *editreference)
    {
        editreference->setWindowTitle(QApplication::translate("editreference", "Edit References", 0));
        label->setText(QApplication::translate("editreference", "<b>Outputs</b> ", 0));
    } // retranslateUi

};

namespace Ui {
    class editreference: public Ui_editreference {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITREFERENCE_H
