/********************************************************************************
** Form generated from reading UI file 'deleteparsedreferences.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEPARSEDREFERENCES_H
#define UI_DELETEPARSEDREFERENCES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DeleteParsedReferences
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QPushButton *pushButton;

    void setupUi(QDialog *DeleteParsedReferences)
    {
        if (DeleteParsedReferences->objectName().isEmpty())
            DeleteParsedReferences->setObjectName(QStringLiteral("DeleteParsedReferences"));
        DeleteParsedReferences->resize(785, 640);
        gridLayout = new QGridLayout(DeleteParsedReferences);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableView = new QTableView(DeleteParsedReferences);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);

        pushButton = new QPushButton(DeleteParsedReferences);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(DeleteParsedReferences);

        QMetaObject::connectSlotsByName(DeleteParsedReferences);
    } // setupUi

    void retranslateUi(QDialog *DeleteParsedReferences)
    {
        DeleteParsedReferences->setWindowTitle(QApplication::translate("DeleteParsedReferences", "Delete Parsed References", 0));
        pushButton->setText(QApplication::translate("DeleteParsedReferences", "Delete", 0));
    } // retranslateUi

};

namespace Ui {
    class DeleteParsedReferences: public Ui_DeleteParsedReferences {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEPARSEDREFERENCES_H
