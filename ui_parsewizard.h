/********************************************************************************
** Form generated from reading UI file 'parsewizard.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARSEWIZARD_H
#define UI_PARSEWIZARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include <QtWidgets/QWizard>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_parseWizard
{
public:
    QWizardPage *wizardPage1;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QWizardPage *wizardPage2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QGridLayout *gridLayout_4;
    QLabel *label_6;
    QTableView *authorTable;
    QSpacerItem *horizontalSpacer;
    QPushButton *deleteAuthor;
    QPushButton *addAuthor;
    QSpacerItem *verticalSpacer;
    QLabel *label_16;
    QLineEdit *lineEdit_4;
    QWizardPage *wizardPage3;
    QGridLayout *gridLayout_3;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QComboBox *comboBox;
    QLabel *label_8;
    QComboBox *comboBox_2;
    QTableView *journalTable;
    QLabel *label_5;
    QWizardPage *wizardPage;
    QGridLayout *gridLayout_5;
    QTextEdit *textEdit;
    QLabel *label_10;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_15;
    QComboBox *parserCombo;
    QPushButton *pushButton_2;
    QWizardPage *wizardPage_2;
    QGridLayout *gridLayout_6;
    QPushButton *pushButton_4;
    QLabel *label_11;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label_12;
    QTextEdit *textEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_14;
    QLabel *label_17;

    void setupUi(QWizard *parseWizard)
    {
        if (parseWizard->objectName().isEmpty())
            parseWizard->setObjectName(QStringLiteral("parseWizard"));
        parseWizard->resize(799, 442);
        QFont font;
        font.setPointSize(11);
        parseWizard->setFont(font);
        wizardPage1 = new QWizardPage();
        wizardPage1->setObjectName(QStringLiteral("wizardPage1"));
        gridLayout = new QGridLayout(wizardPage1);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(wizardPage1);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(250, 250));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/assist.png")));
        label->setScaledContents(true);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(wizardPage1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setWordWrap(true);

        gridLayout->addWidget(label_2, 1, 1, 1, 1, Qt::AlignTop);

        label_3 = new QLabel(wizardPage1);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font1;
        font1.setPointSize(14);
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        parseWizard->addPage(wizardPage1);
        wizardPage2 = new QWizardPage();
        wizardPage2->setObjectName(QStringLiteral("wizardPage2"));
        gridLayout_2 = new QGridLayout(wizardPage2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_4 = new QLabel(wizardPage2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        lineEdit = new QLineEdit(wizardPage2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 2);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_6 = new QLabel(wizardPage2);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_4->addWidget(label_6, 1, 0, 1, 1, Qt::AlignLeft|Qt::AlignTop);

        authorTable = new QTableView(wizardPage2);
        authorTable->setObjectName(QStringLiteral("authorTable"));
        authorTable->setMaximumSize(QSize(12000, 300));

        gridLayout_4->addWidget(authorTable, 2, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 1, 1, 1, 2);

        deleteAuthor = new QPushButton(wizardPage2);
        deleteAuthor->setObjectName(QStringLiteral("deleteAuthor"));
        deleteAuthor->setMinimumSize(QSize(300, 50));

        gridLayout_4->addWidget(deleteAuthor, 3, 2, 1, 1);

        addAuthor = new QPushButton(wizardPage2);
        addAuthor->setObjectName(QStringLiteral("addAuthor"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addAuthor->sizePolicy().hasHeightForWidth());
        addAuthor->setSizePolicy(sizePolicy);
        addAuthor->setMinimumSize(QSize(300, 50));
        addAuthor->setMaximumSize(QSize(600, 16777215));

        gridLayout_4->addWidget(addAuthor, 3, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 5, 0, 1, 3);

        label_16 = new QLabel(wizardPage2);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_4->addWidget(label_16, 4, 0, 1, 1);

        lineEdit_4 = new QLineEdit(wizardPage2);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        gridLayout_4->addWidget(lineEdit_4, 4, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout_4, 1, 0, 1, 2);

        parseWizard->addPage(wizardPage2);
        wizardPage3 = new QWizardPage();
        wizardPage3->setObjectName(QStringLiteral("wizardPage3"));
        gridLayout_3 = new QGridLayout(wizardPage3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        lineEdit_2 = new QLineEdit(wizardPage3);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout_3->addWidget(lineEdit_2, 5, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_7 = new QLabel(wizardPage3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_5->addWidget(label_7);

        comboBox = new QComboBox(wizardPage3);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_5->addWidget(comboBox);

        label_8 = new QLabel(wizardPage3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_5->addWidget(label_8);

        comboBox_2 = new QComboBox(wizardPage3);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        horizontalLayout_5->addWidget(comboBox_2);


        gridLayout_3->addLayout(horizontalLayout_5, 8, 0, 2, 1);

        journalTable = new QTableView(wizardPage3);
        journalTable->setObjectName(QStringLiteral("journalTable"));

        gridLayout_3->addWidget(journalTable, 6, 0, 1, 1);

        label_5 = new QLabel(wizardPage3);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 4, 0, 1, 1);

        parseWizard->addPage(wizardPage3);
        wizardPage = new QWizardPage();
        wizardPage->setObjectName(QStringLiteral("wizardPage"));
        gridLayout_5 = new QGridLayout(wizardPage);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        textEdit = new QTextEdit(wizardPage);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout_5->addWidget(textEdit, 3, 0, 1, 3);

        label_10 = new QLabel(wizardPage);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_5->addWidget(label_10, 2, 0, 1, 1);

        pushButton_3 = new QPushButton(wizardPage);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout_5->addWidget(pushButton_3, 4, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_15 = new QLabel(wizardPage);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_2->addWidget(label_15);

        parserCombo = new QComboBox(wizardPage);
        parserCombo->setObjectName(QStringLiteral("parserCombo"));

        horizontalLayout_2->addWidget(parserCombo);


        gridLayout_5->addLayout(horizontalLayout_2, 7, 0, 1, 1);

        pushButton_2 = new QPushButton(wizardPage);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout_5->addWidget(pushButton_2, 2, 2, 1, 1);

        parseWizard->addPage(wizardPage);
        label_10->raise();
        pushButton_3->raise();
        textEdit->raise();
        pushButton_2->raise();
        wizardPage_2 = new QWizardPage();
        wizardPage_2->setObjectName(QStringLiteral("wizardPage_2"));
        gridLayout_6 = new QGridLayout(wizardPage_2);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        pushButton_4 = new QPushButton(wizardPage_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setFont(font);

        gridLayout_6->addWidget(pushButton_4, 2, 0, 1, 1);

        label_11 = new QLabel(wizardPage_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font);

        gridLayout_6->addWidget(label_11, 0, 0, 1, 1);

        scrollArea = new QScrollArea(wizardPage_2);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setMaximumSize(QSize(150, 16777215));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 98, 28));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_6->addWidget(scrollArea, 1, 0, 1, 1);

        label_12 = new QLabel(wizardPage_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font);

        gridLayout_6->addWidget(label_12, 0, 1, 1, 1);

        textEdit_2 = new QTextEdit(wizardPage_2);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setReadOnly(true);

        gridLayout_6->addWidget(textEdit_2, 1, 1, 2, 4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_14 = new QLabel(wizardPage_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        QFont font2;
        font2.setPointSize(13);
        label_14->setFont(font2);

        horizontalLayout_3->addWidget(label_14);


        gridLayout_6->addLayout(horizontalLayout_3, 3, 0, 1, 2);

        label_17 = new QLabel(wizardPage_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setFont(font2);

        gridLayout_6->addWidget(label_17, 3, 4, 1, 1);

        parseWizard->addPage(wizardPage_2);

        retranslateUi(parseWizard);

        QMetaObject::connectSlotsByName(parseWizard);
    } // setupUi

    void retranslateUi(QWizard *parseWizard)
    {
        parseWizard->setWindowTitle(QApplication::translate("parseWizard", "Parsing Wizard", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("parseWizard", "This wizard will help you through the parsing process .You can input the text needed for the parser, by manually typing copy and pasting, or uploading an input file.", 0));
        label_3->setText(QApplication::translate("parseWizard", "INTRODUCTION", 0));
        label_4->setText(QApplication::translate("parseWizard", "Article Title:", 0));
        label_6->setText(QApplication::translate("parseWizard", "Author:", 0));
        deleteAuthor->setText(QApplication::translate("parseWizard", "Remove Author", 0));
        addAuthor->setText(QApplication::translate("parseWizard", "Add Author", 0));
        label_16->setText(QApplication::translate("parseWizard", "Pages: ", 0));
        label_7->setText(QApplication::translate("parseWizard", "Volume: ", 0));
        label_8->setText(QApplication::translate("parseWizard", "Issue:", 0));
        label_5->setText(QApplication::translate("parseWizard", "Journal:", 0));
        label_10->setText(QApplication::translate("parseWizard", "Parse Data:", 0));
        pushButton_3->setText(QApplication::translate("parseWizard", "Clear", 0));
        label_15->setText(QApplication::translate("parseWizard", "Parser: ", 0));
        pushButton_2->setText(QApplication::translate("parseWizard", "Upload File", 0));
        pushButton_4->setText(QApplication::translate("parseWizard", "Edit Parsed Citation", 0));
        label_11->setText(QApplication::translate("parseWizard", "Reference:", 0));
        label_12->setText(QApplication::translate("parseWizard", "Data:", 0));
        label_14->setText(QApplication::translate("parseWizard", "Errors for current output: ", 0));
        label_17->setText(QApplication::translate("parseWizard", "Total Errors: 0", 0));
    } // retranslateUi

};

namespace Ui {
    class parseWizard: public Ui_parseWizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARSEWIZARD_H
