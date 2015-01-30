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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_addIssue
{
public:
    QGridLayout *gridLayout;
    QSpinBox *spinBox;
    QDialogButtonBox *buttonBox;
    QLabel *yearLabel;
    QLabel *issueNumLabel;
    QLabel *monthLabel;
    QSpinBox *spinBox_2;
    QComboBox *comboBox;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *journalNameLabel;
    QLabel *volumeLabel;
    QFrame *line;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *addIssue)
    {
        if (addIssue->objectName().isEmpty())
            addIssue->setObjectName(QStringLiteral("addIssue"));
        addIssue->resize(617, 300);
        addIssue->setMinimumSize(QSize(500, 300));
        addIssue->setMaximumSize(QSize(900, 500));
        gridLayout = new QGridLayout(addIssue);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        spinBox = new QSpinBox(addIssue);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMinimum(1);

        gridLayout->addWidget(spinBox, 4, 2, 1, 1);

        buttonBox = new QDialogButtonBox(addIssue);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 9, 2, 1, 1);

        yearLabel = new QLabel(addIssue);
        yearLabel->setObjectName(QStringLiteral("yearLabel"));
        QFont font;
        font.setFamily(QStringLiteral("Trebuchet MS"));
        yearLabel->setFont(font);

        gridLayout->addWidget(yearLabel, 6, 0, 1, 1);

        issueNumLabel = new QLabel(addIssue);
        issueNumLabel->setObjectName(QStringLiteral("issueNumLabel"));
        issueNumLabel->setFont(font);

        gridLayout->addWidget(issueNumLabel, 4, 0, 1, 1);

        monthLabel = new QLabel(addIssue);
        monthLabel->setObjectName(QStringLiteral("monthLabel"));
        monthLabel->setFont(font);

        gridLayout->addWidget(monthLabel, 5, 0, 1, 1);

        spinBox_2 = new QSpinBox(addIssue);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setMinimum(1900);
        spinBox_2->setMaximum(2100);

        gridLayout->addWidget(spinBox_2, 6, 2, 1, 1);

        comboBox = new QComboBox(addIssue);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 5, 2, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        journalNameLabel = new QLabel(addIssue);
        journalNameLabel->setObjectName(QStringLiteral("journalNameLabel"));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        journalNameLabel->setFont(font1);

        verticalLayout->addWidget(journalNameLabel);

        volumeLabel = new QLabel(addIssue);
        volumeLabel->setObjectName(QStringLiteral("volumeLabel"));
        QFont font2;
        font2.setPointSize(13);
        font2.setBold(true);
        font2.setWeight(75);
        volumeLabel->setFont(font2);
        volumeLabel->setMargin(1);

        verticalLayout->addWidget(volumeLabel);

        line = new QFrame(addIssue);
        line->setObjectName(QStringLiteral("line"));
        line->setMinimumSize(QSize(0, 15));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line, 0, Qt::AlignBottom);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 8, 0, 1, 3);


        retranslateUi(addIssue);
        QObject::connect(buttonBox, SIGNAL(accepted()), addIssue, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), addIssue, SLOT(reject()));

        QMetaObject::connectSlotsByName(addIssue);
    } // setupUi

    void retranslateUi(QDialog *addIssue)
    {
        addIssue->setWindowTitle(QApplication::translate("addIssue", "Add Issue", 0));
        yearLabel->setText(QApplication::translate("addIssue", "Year:", 0));
        issueNumLabel->setText(QApplication::translate("addIssue", "Issue Number:", 0));
        monthLabel->setText(QApplication::translate("addIssue", "Month:", 0));
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
        journalNameLabel->setText(QApplication::translate("addIssue", "Journal Name", 0));
        volumeLabel->setText(QApplication::translate("addIssue", "Volume", 0));
    } // retranslateUi

};

namespace Ui {
    class addIssue: public Ui_addIssue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDISSUE_H
