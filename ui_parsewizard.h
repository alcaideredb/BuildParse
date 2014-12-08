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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
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
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QLabel *label_6;
    QTableView *tableView;
    QPushButton *pushButton;
    QWizardPage *wizardPage3;
    QGridLayout *gridLayout_3;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QComboBox *comboBox;
    QLabel *label_8;
    QComboBox *comboBox_2;
    QTableView *tableView_2;
    QLabel *label_5;

    void setupUi(QWizard *parseWizard)
    {
        if (parseWizard->objectName().isEmpty())
            parseWizard->setObjectName(QStringLiteral("parseWizard"));
        parseWizard->resize(799, 442);
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
        QFont font;
        font.setPointSize(14);
        label_3->setFont(font);

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
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 4, 1, 1, 1);

        label_6 = new QLabel(wizardPage2);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_4->addWidget(label_6, 1, 0, 1, 1, Qt::AlignLeft|Qt::AlignTop);

        tableView = new QTableView(wizardPage2);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setMaximumSize(QSize(12000, 300));

        gridLayout_4->addWidget(tableView, 2, 0, 1, 2);

        pushButton = new QPushButton(wizardPage2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(600, 50));
        pushButton->setMaximumSize(QSize(600, 16777215));

        gridLayout_4->addWidget(pushButton, 3, 1, 1, 1, Qt::AlignHCenter);


        gridLayout_2->addLayout(gridLayout_4, 1, 0, 1, 1);

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

        horizontalLayout_5->addWidget(comboBox, 0, Qt::AlignLeft);

        label_8 = new QLabel(wizardPage3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_5->addWidget(label_8);

        comboBox_2 = new QComboBox(wizardPage3);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        horizontalLayout_5->addWidget(comboBox_2, 0, Qt::AlignLeft);


        gridLayout_3->addLayout(horizontalLayout_5, 8, 0, 2, 1);

        tableView_2 = new QTableView(wizardPage3);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));

        gridLayout_3->addWidget(tableView_2, 6, 0, 1, 1);

        label_5 = new QLabel(wizardPage3);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 4, 0, 1, 1);

        parseWizard->addPage(wizardPage3);
        lineEdit_2->raise();
        tableView_2->raise();
        label_5->raise();

        retranslateUi(parseWizard);

        QMetaObject::connectSlotsByName(parseWizard);
    } // setupUi

    void retranslateUi(QWizard *parseWizard)
    {
        parseWizard->setWindowTitle(QApplication::translate("parseWizard", "Wizard", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("parseWizard", "This wizard will help you through the parsing process .You can input the text needed for the parser, by manually typing copy and pasting, or uploading an input file.A default label will be assigned to the output, which is editable upon preference.", 0));
        label_3->setText(QApplication::translate("parseWizard", "INTRODUCTION", 0));
        label_4->setText(QApplication::translate("parseWizard", "Article Title:", 0));
        label_6->setText(QApplication::translate("parseWizard", "Author:", 0));
        pushButton->setText(QApplication::translate("parseWizard", "Add Author", 0));
        label_7->setText(QApplication::translate("parseWizard", "Volume: ", 0));
        label_8->setText(QApplication::translate("parseWizard", "Issue:", 0));
        label_5->setText(QApplication::translate("parseWizard", "Journal:", 0));
    } // retranslateUi

};

namespace Ui {
    class parseWizard: public Ui_parseWizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARSEWIZARD_H
