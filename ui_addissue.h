/********************************************************************************
** Form generated from reading UI file 'addissue.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDISSUE_H
#define UI_ADDISSUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_addIssue
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QLabel *label_2;
    QComboBox *comboBox;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *addIssue)
    {
        if (addIssue->objectName().isEmpty())
            addIssue->setObjectName(QStringLiteral("addIssue"));
        addIssue->resize(792, 304);
        gridLayout = new QGridLayout(addIssue);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buttonBox = new QDialogButtonBox(addIssue);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 2, 1, 1);

        label_2 = new QLabel(addIssue);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        comboBox = new QComboBox(addIssue);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 2, 2, 1, 1);

        spinBox_2 = new QSpinBox(addIssue);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setMinimum(1900);
        spinBox_2->setMaximum(2100);

        gridLayout->addWidget(spinBox_2, 3, 2, 1, 1);

        spinBox = new QSpinBox(addIssue);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMinimum(1);

        gridLayout->addWidget(spinBox, 1, 2, 1, 1);

        label = new QLabel(addIssue);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_3 = new QLabel(addIssue);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_4 = new QLabel(addIssue);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font;
        font.setPointSize(14);
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 0, 2, 1, 1);


        retranslateUi(addIssue);
        QObject::connect(buttonBox, SIGNAL(accepted()), addIssue, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), addIssue, SLOT(reject()));

        QMetaObject::connectSlotsByName(addIssue);
    } // setupUi

    void retranslateUi(QDialog *addIssue)
    {
        addIssue->setWindowTitle(QApplication::translate("addIssue", "Dialog", 0));
        label_2->setText(QApplication::translate("addIssue", "Month:", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("addIssue", "January", 0)
         << QApplication::translate("addIssue", "February", 0)
         << QApplication::translate("addIssue", "March", 0)
         << QApplication::translate("addIssue", "April", 0)
         << QApplication::translate("addIssue", "May", 0)
         << QApplication::translate("addIssue", "June", 0)
         << QApplication::translate("addIssue", "July", 0)
         << QApplication::translate("addIssue", "August", 0)
         << QApplication::translate("addIssue", "September", 0)
         << QApplication::translate("addIssue", "October", 0)
         << QApplication::translate("addIssue", "November", 0)
         << QApplication::translate("addIssue", "December", 0)
        );
        label->setText(QApplication::translate("addIssue", "Issue Number:", 0));
        label_3->setText(QApplication::translate("addIssue", "Year:", 0));
        label_4->setText(QApplication::translate("addIssue", "Journal Name", 0));
    } // retranslateUi

};

namespace Ui {
    class addIssue: public Ui_addIssue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDISSUE_H
