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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Journal
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QGridLayout *gridLayout_2;
    QToolButton *toolButton_4;
    QTableView *volumeTable;
    QToolButton *toolButton_5;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout;
    QTableView *journalTable;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton;
    QToolButton *editJournButton;
    QToolButton *toolButton_3;

    void setupUi(QDialog *Journal)
    {
        if (Journal->objectName().isEmpty())
            Journal->setObjectName(QStringLiteral("Journal"));
        Journal->resize(945, 530);
        gridLayout = new QGridLayout(Journal);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(Journal);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        toolButton_4 = new QToolButton(Journal);
        toolButton_4->setObjectName(QStringLiteral("toolButton_4"));

        gridLayout_2->addWidget(toolButton_4, 1, 2, 1, 1);

        volumeTable = new QTableView(Journal);
        volumeTable->setObjectName(QStringLiteral("volumeTable"));
        volumeTable->setMaximumSize(QSize(2000, 300));

        gridLayout_2->addWidget(volumeTable, 0, 0, 1, 3);

        toolButton_5 = new QToolButton(Journal);
        toolButton_5->setObjectName(QStringLiteral("toolButton_5"));

        gridLayout_2->addWidget(toolButton_5, 1, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 1, 3, 1, 1);

        lineEdit = new QLineEdit(Journal);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 2, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        journalTable = new QTableView(Journal);
        journalTable->setObjectName(QStringLiteral("journalTable"));

        verticalLayout->addWidget(journalTable);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        toolButton = new QToolButton(Journal);
        toolButton->setObjectName(QStringLiteral("toolButton"));

        horizontalLayout->addWidget(toolButton);

        editJournButton = new QToolButton(Journal);
        editJournButton->setObjectName(QStringLiteral("editJournButton"));

        horizontalLayout->addWidget(editJournButton);

        toolButton_3 = new QToolButton(Journal);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));

        horizontalLayout->addWidget(toolButton_3);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 3);


        retranslateUi(Journal);

        QMetaObject::connectSlotsByName(Journal);
    } // setupUi

    void retranslateUi(QDialog *Journal)
    {
        Journal->setWindowTitle(QApplication::translate("Journal", "Dialog", 0));
        label->setText(QApplication::translate("Journal", "Search:", 0));
        toolButton_4->setText(QApplication::translate("Journal", "Delete Volume", 0));
        toolButton_5->setText(QApplication::translate("Journal", "Add Volume", 0));
        toolButton->setText(QApplication::translate("Journal", "Add Journal", 0));
        editJournButton->setText(QApplication::translate("Journal", "Edit Journal", 0));
        toolButton_3->setText(QApplication::translate("Journal", "Delete Journal", 0));
    } // retranslateUi

};

namespace Ui {
    class Journal: public Ui_Journal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOURNAL_H
