/********************************************************************************
** Form generated from reading UI file 'parsers.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARSERS_H
#define UI_PARSERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_parsers
{
public:
    QGridLayout *gridLayout;
    QPushButton *addParser;
    QTableView *tableView;
    QPushButton *delParser;

    void setupUi(QDialog *parsers)
    {
        if (parsers->objectName().isEmpty())
            parsers->setObjectName(QStringLiteral("parsers"));
        parsers->resize(640, 480);
        gridLayout = new QGridLayout(parsers);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        addParser = new QPushButton(parsers);
        addParser->setObjectName(QStringLiteral("addParser"));

        gridLayout->addWidget(addParser, 1, 0, 1, 1);

        tableView = new QTableView(parsers);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 4);

        delParser = new QPushButton(parsers);
        delParser->setObjectName(QStringLiteral("delParser"));

        gridLayout->addWidget(delParser, 1, 1, 1, 1);


        retranslateUi(parsers);

        QMetaObject::connectSlotsByName(parsers);
    } // setupUi

    void retranslateUi(QDialog *parsers)
    {
        parsers->setWindowTitle(QApplication::translate("parsers", "Parsers", 0));
        addParser->setText(QApplication::translate("parsers", "Add Parser", 0));
        delParser->setText(QApplication::translate("parsers", "Delete Parser", 0));
    } // retranslateUi

};

namespace Ui {
    class parsers: public Ui_parsers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARSERS_H
