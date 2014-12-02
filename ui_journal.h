/********************************************************************************
** Form generated from reading UI file 'journal.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOURNAL_H
#define UI_JOURNAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Journal
{
public:
    QGridLayout *gridLayout;
    QToolButton *toolButton;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QTableView *tableView_2;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;

    void setupUi(QDialog *Journal)
    {
        if (Journal->objectName().isEmpty())
            Journal->setObjectName(QStringLiteral("Journal"));
        Journal->resize(945, 459);
        gridLayout = new QGridLayout(Journal);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        toolButton = new QToolButton(Journal);
        toolButton->setObjectName(QStringLiteral("toolButton"));

        gridLayout->addWidget(toolButton, 0, 0, 1, 1);

        lineEdit = new QLineEdit(Journal);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableView = new QTableView(Journal);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);

        tableView_2 = new QTableView(Journal);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setMaximumSize(QSize(150, 300));

        gridLayout_2->addWidget(tableView_2, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 1, 2, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        toolButton_2 = new QToolButton(Journal);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));

        horizontalLayout_3->addWidget(toolButton_2);

        toolButton_3 = new QToolButton(Journal);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));

        horizontalLayout_3->addWidget(toolButton_3);


        gridLayout->addLayout(horizontalLayout_3, 0, 2, 1, 1);


        retranslateUi(Journal);

        QMetaObject::connectSlotsByName(Journal);
    } // setupUi

    void retranslateUi(QDialog *Journal)
    {
        Journal->setWindowTitle(QApplication::translate("Journal", "Dialog", 0));
        toolButton->setText(QApplication::translate("Journal", "Add Journal", 0));
        toolButton_2->setText(QApplication::translate("Journal", "Edit Journal", 0));
        toolButton_3->setText(QApplication::translate("Journal", "Delete Journal", 0));
    } // retranslateUi

};

namespace Ui {
    class Journal: public Ui_Journal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOURNAL_H
