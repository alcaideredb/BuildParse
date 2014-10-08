/********************************************************************************
** Form generated from reading UI file 'viewparsedreferences.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWPARSEDREFERENCES_H
#define UI_VIEWPARSEDREFERENCES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewParsedReferences
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_3;
    QLabel *label_3;
    QTableView *tableView;
    QLabel *label_2;
    QTextBrowser *textBrowser;
    QPushButton *pushButton;

    void setupUi(QDialog *ViewParsedReferences)
    {
        if (ViewParsedReferences->objectName().isEmpty())
            ViewParsedReferences->setObjectName(QStringLiteral("ViewParsedReferences"));
        ViewParsedReferences->resize(728, 640);
        gridLayout_2 = new QGridLayout(ViewParsedReferences);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(ViewParsedReferences);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        scrollArea = new QScrollArea(ViewParsedReferences);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 349, 277));
        scrollArea->setWidget(scrollAreaWidgetContents_3);

        gridLayout->addWidget(scrollArea, 2, 0, 1, 1);

        label_3 = new QLabel(ViewParsedReferences);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        tableView = new QTableView(ViewParsedReferences);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 1, 0, 1, 1);

        label_2 = new QLabel(ViewParsedReferences);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        textBrowser = new QTextBrowser(ViewParsedReferences);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        gridLayout->addWidget(textBrowser, 1, 1, 2, 1);

        pushButton = new QPushButton(ViewParsedReferences);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 3, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(ViewParsedReferences);

        QMetaObject::connectSlotsByName(ViewParsedReferences);
    } // setupUi

    void retranslateUi(QDialog *ViewParsedReferences)
    {
        ViewParsedReferences->setWindowTitle(QApplication::translate("ViewParsedReferences", "View Parsed References", 0));
        label->setText(QApplication::translate("ViewParsedReferences", "Output: ", 0));
        label_3->setText(QApplication::translate("ViewParsedReferences", "No. Of Errors: 0", 0));
        label_2->setText(QApplication::translate("ViewParsedReferences", "Parsed References:", 0));
        pushButton->setText(QApplication::translate("ViewParsedReferences", "Export As AGM", 0));
    } // retranslateUi

};

namespace Ui {
    class ViewParsedReferences: public Ui_ViewParsedReferences {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWPARSEDREFERENCES_H
