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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
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
    QTableView *tableView_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QTableView *tableView;
    QTextBrowser *textBrowser;
    QLabel *label_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *comboBox;
    QLabel *label_5;
    QComboBox *comboBox_2;
    QPushButton *editButton;
    QPushButton *pushButton;

    void setupUi(QDialog *ViewParsedReferences)
    {
        if (ViewParsedReferences->objectName().isEmpty())
            ViewParsedReferences->setObjectName(QStringLiteral("ViewParsedReferences"));
        ViewParsedReferences->resize(734, 782);
        QFont font;
        font.setFamily(QStringLiteral("Trebuchet MS"));
        ViewParsedReferences->setFont(font);
        gridLayout_2 = new QGridLayout(ViewParsedReferences);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(ViewParsedReferences);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 2);

        tableView_2 = new QTableView(ViewParsedReferences);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setMaximumSize(QSize(16777215, 100));

        gridLayout->addWidget(tableView_2, 3, 0, 1, 5);

        label_2 = new QLabel(ViewParsedReferences);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setPointSize(14);
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 0, 0, 1, 2);

        lineEdit = new QLineEdit(ViewParsedReferences);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 2, 0, 1, 5);

        tableView = new QTableView(ViewParsedReferences);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setMaximumSize(QSize(400, 16777215));

        gridLayout->addWidget(tableView, 5, 0, 1, 1);

        textBrowser = new QTextBrowser(ViewParsedReferences);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        gridLayout->addWidget(textBrowser, 5, 1, 2, 4);

        label_3 = new QLabel(ViewParsedReferences);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 7, 0, 1, 1);

        scrollArea = new QScrollArea(ViewParsedReferences);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setMaximumSize(QSize(400, 16777215));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 398, 242));
        scrollArea->setWidget(scrollAreaWidgetContents_3);

        gridLayout->addWidget(scrollArea, 6, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_6 = new QLabel(ViewParsedReferences);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_3->addWidget(label_6);

        label_7 = new QLabel(ViewParsedReferences);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_3->addWidget(label_7);


        gridLayout->addLayout(horizontalLayout_3, 4, 1, 1, 4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(ViewParsedReferences);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4, 0, Qt::AlignRight);

        comboBox = new QComboBox(ViewParsedReferences);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_4->addWidget(comboBox, 0, Qt::AlignLeft);

        label_5 = new QLabel(ViewParsedReferences);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setMidLineWidth(0);

        horizontalLayout_4->addWidget(label_5, 0, Qt::AlignRight);

        comboBox_2 = new QComboBox(ViewParsedReferences);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_4->addWidget(comboBox_2, 0, Qt::AlignLeft);


        gridLayout->addLayout(horizontalLayout_4, 4, 0, 1, 1);

        editButton = new QPushButton(ViewParsedReferences);
        editButton->setObjectName(QStringLiteral("editButton"));

        gridLayout->addWidget(editButton, 7, 1, 1, 1);

        pushButton = new QPushButton(ViewParsedReferences);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 7, 4, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 1, 1, 1);


        retranslateUi(ViewParsedReferences);

        QMetaObject::connectSlotsByName(ViewParsedReferences);
    } // setupUi

    void retranslateUi(QDialog *ViewParsedReferences)
    {
        ViewParsedReferences->setWindowTitle(QApplication::translate("ViewParsedReferences", "View Parsed References", 0));
        label->setText(QApplication::translate("ViewParsedReferences", "Search:", 0));
        label_2->setText(QApplication::translate("ViewParsedReferences", "Parsed References", 0));
        label_3->setText(QApplication::translate("ViewParsedReferences", "No. of Errors: (No output selected yet!)", 0));
        label_6->setText(QApplication::translate("ViewParsedReferences", "Month: ", 0));
        label_7->setText(QApplication::translate("ViewParsedReferences", "Year: ", 0));
        label_4->setText(QApplication::translate("ViewParsedReferences", "Volume: ", 0));
        label_5->setText(QApplication::translate("ViewParsedReferences", "Issue: ", 0));
        editButton->setText(QApplication::translate("ViewParsedReferences", "Edit Current Output", 0));
        pushButton->setText(QApplication::translate("ViewParsedReferences", "Export As AGM", 0));
    } // retranslateUi

};

namespace Ui {
    class ViewParsedReferences: public Ui_ViewParsedReferences {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWPARSEDREFERENCES_H
