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
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QToolButton *toolButton;
    QToolButton *toolButton_3;
    QToolButton *toolButton_2;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_2;
    QTableView *tableView_2;
    QVBoxLayout *verticalLayout_2;
    QToolButton *toolButton_5;
    QToolButton *toolButton_4;
    QToolButton *toolButton_6;
    QTableView *tableView_3;

    void setupUi(QDialog *Journal)
    {
        if (Journal->objectName().isEmpty())
            Journal->setObjectName(QStringLiteral("Journal"));
        Journal->resize(945, 459);
        gridLayout = new QGridLayout(Journal);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lineEdit = new QLineEdit(Journal);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 2, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableView = new QTableView(Journal);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);


        gridLayout->addLayout(verticalLayout, 2, 2, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        toolButton = new QToolButton(Journal);
        toolButton->setObjectName(QStringLiteral("toolButton"));

        verticalLayout_4->addWidget(toolButton);

        toolButton_3 = new QToolButton(Journal);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));

        verticalLayout_4->addWidget(toolButton_3);

        toolButton_2 = new QToolButton(Journal);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));

        verticalLayout_4->addWidget(toolButton_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        verticalLayout_3->addLayout(verticalLayout_4);


        gridLayout->addLayout(verticalLayout_3, 1, 0, 2, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tableView_2 = new QTableView(Journal);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setMaximumSize(QSize(150, 300));

        gridLayout_2->addWidget(tableView_2, 0, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        toolButton_5 = new QToolButton(Journal);
        toolButton_5->setObjectName(QStringLiteral("toolButton_5"));

        verticalLayout_2->addWidget(toolButton_5);

        toolButton_4 = new QToolButton(Journal);
        toolButton_4->setObjectName(QStringLiteral("toolButton_4"));

        verticalLayout_2->addWidget(toolButton_4);

        toolButton_6 = new QToolButton(Journal);
        toolButton_6->setObjectName(QStringLiteral("toolButton_6"));

        verticalLayout_2->addWidget(toolButton_6);


        gridLayout_2->addLayout(verticalLayout_2, 0, 2, 1, 1);

        tableView_3 = new QTableView(Journal);
        tableView_3->setObjectName(QStringLiteral("tableView_3"));
        tableView_3->setMaximumSize(QSize(300, 300));

        gridLayout_2->addWidget(tableView_3, 2, 1, 1, 2);


        gridLayout->addLayout(gridLayout_2, 2, 3, 1, 1);


        retranslateUi(Journal);

        QMetaObject::connectSlotsByName(Journal);
    } // setupUi

    void retranslateUi(QDialog *Journal)
    {
        Journal->setWindowTitle(QApplication::translate("Journal", "Dialog", 0));
        toolButton->setText(QApplication::translate("Journal", "Add Journal", 0));
        toolButton_3->setText(QApplication::translate("Journal", "Delete Journal", 0));
        toolButton_2->setText(QApplication::translate("Journal", "Edit Journal", 0));
        toolButton_5->setText(QApplication::translate("Journal", "Add Volume", 0));
        toolButton_4->setText(QApplication::translate("Journal", "Delete Volume", 0));
        toolButton_6->setText(QApplication::translate("Journal", "Add Issue", 0));
    } // retranslateUi

};

namespace Ui {
    class Journal: public Ui_Journal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOURNAL_H
