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
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_parsers
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton_3;
    QDialogButtonBox *buttonBox;
    QTableView *tableView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *parsers)
    {
        if (parsers->objectName().isEmpty())
            parsers->setObjectName(QStringLiteral("parsers"));
        parsers->resize(640, 480);
        gridLayout = new QGridLayout(parsers);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_3 = new QPushButton(parsers);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 1, 1, 1, 1, Qt::AlignRight);

        buttonBox = new QDialogButtonBox(parsers);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 3, 1, 1);

        tableView = new QTableView(parsers);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 4);

        pushButton = new QPushButton(parsers);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(parsers);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 2, 1, 1, Qt::AlignRight);


        retranslateUi(parsers);
        QObject::connect(buttonBox, SIGNAL(accepted()), parsers, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), parsers, SLOT(reject()));

        QMetaObject::connectSlotsByName(parsers);
    } // setupUi

    void retranslateUi(QDialog *parsers)
    {
        parsers->setWindowTitle(QApplication::translate("parsers", "Dialog", 0));
        pushButton_3->setText(QApplication::translate("parsers", "Set Default Parser", 0));
        pushButton->setText(QApplication::translate("parsers", "Add Parser", 0));
        pushButton_2->setText(QApplication::translate("parsers", "Delete Parser", 0));
    } // retranslateUi

};

namespace Ui {
    class parsers: public Ui_parsers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARSERS_H
