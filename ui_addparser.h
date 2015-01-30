/********************************************************************************
** Form generated from reading UI file 'addparser.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPARSER_H
#define UI_ADDPARSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_addParser
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QPushButton *pushButton;

    void setupUi(QDialog *addParser)
    {
        if (addParser->objectName().isEmpty())
            addParser->setObjectName(QStringLiteral("addParser"));
        addParser->resize(640, 193);
        gridLayout = new QGridLayout(addParser);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buttonBox = new QDialogButtonBox(addParser);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 2);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_2 = new QLabel(addParser);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(addParser);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_2);

        lineEdit_3 = new QLineEdit(addParser);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_3);

        label_3 = new QLabel(addParser);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        pushButton = new QPushButton(addParser);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMaximumSize(QSize(100, 16777215));

        formLayout->setWidget(3, QFormLayout::FieldRole, pushButton);


        gridLayout->addLayout(formLayout, 0, 0, 1, 2);


        retranslateUi(addParser);
        QObject::connect(buttonBox, SIGNAL(accepted()), addParser, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), addParser, SLOT(reject()));

        QMetaObject::connectSlotsByName(addParser);
    } // setupUi

    void retranslateUi(QDialog *addParser)
    {
        addParser->setWindowTitle(QApplication::translate("addParser", "Add Parser", 0));
        label_2->setText(QApplication::translate("addParser", "Path:", 0));
        label_3->setText(QApplication::translate("addParser", "Parser:", 0));
        pushButton->setText(QApplication::translate("addParser", "Browse...", 0));
    } // retranslateUi

};

namespace Ui {
    class addParser: public Ui_addParser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPARSER_H
