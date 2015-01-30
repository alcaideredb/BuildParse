/********************************************************************************
** Form generated from reading UI file 'editissue.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITISSUE_H
#define UI_EDITISSUE_H

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

class Ui_editIssue
{
public:
    QGridLayout *gridLayout;
    QSpinBox *spinBox_2;
    QComboBox *comboBox;
    QLabel *issueNumLabel;
    QSpinBox *spinBox;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *journalNameLabel;
    QLabel *volumeLabel;
    QFrame *line;
    QSpacerItem *verticalSpacer;
    QLabel *monthLabel;
    QDialogButtonBox *buttonBox;
    QLabel *yearLabel;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QDialog *editIssue)
    {
        if (editIssue->objectName().isEmpty())
            editIssue->setObjectName(QStringLiteral("editIssue"));
        editIssue->resize(729, 253);
        gridLayout = new QGridLayout(editIssue);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        spinBox_2 = new QSpinBox(editIssue);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setMinimum(1900);
        spinBox_2->setMaximum(2100);

        gridLayout->addWidget(spinBox_2, 3, 1, 1, 1);

        comboBox = new QComboBox(editIssue);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 2, 1, 1, 1);

        issueNumLabel = new QLabel(editIssue);
        issueNumLabel->setObjectName(QStringLiteral("issueNumLabel"));
        QFont font;
        font.setFamily(QStringLiteral("Trebuchet MS"));
        issueNumLabel->setFont(font);

        gridLayout->addWidget(issueNumLabel, 1, 0, 1, 1);

        spinBox = new QSpinBox(editIssue);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMinimum(1);

        gridLayout->addWidget(spinBox, 1, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 24, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 4, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        journalNameLabel = new QLabel(editIssue);
        journalNameLabel->setObjectName(QStringLiteral("journalNameLabel"));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        journalNameLabel->setFont(font1);

        verticalLayout->addWidget(journalNameLabel);

        volumeLabel = new QLabel(editIssue);
        volumeLabel->setObjectName(QStringLiteral("volumeLabel"));
        QFont font2;
        font2.setPointSize(13);
        font2.setBold(true);
        font2.setWeight(75);
        volumeLabel->setFont(font2);
        volumeLabel->setMargin(1);

        verticalLayout->addWidget(volumeLabel);

        line = new QFrame(editIssue);
        line->setObjectName(QStringLiteral("line"));
        line->setMinimumSize(QSize(0, 15));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line, 0, Qt::AlignBottom);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 2);

        monthLabel = new QLabel(editIssue);
        monthLabel->setObjectName(QStringLiteral("monthLabel"));
        monthLabel->setFont(font);

        gridLayout->addWidget(monthLabel, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(editIssue);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 6, 1, 1, 1);

        yearLabel = new QLabel(editIssue);
        yearLabel->setObjectName(QStringLiteral("yearLabel"));
        yearLabel->setFont(font);

        gridLayout->addWidget(yearLabel, 3, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 5, 0, 1, 2);


        retranslateUi(editIssue);
        QObject::connect(buttonBox, SIGNAL(accepted()), editIssue, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), editIssue, SLOT(reject()));

        QMetaObject::connectSlotsByName(editIssue);
    } // setupUi

    void retranslateUi(QDialog *editIssue)
    {
        editIssue->setWindowTitle(QApplication::translate("editIssue", "Dialog", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("editIssue", "January", 0)
         << QApplication::translate("editIssue", "February", 0)
         << QApplication::translate("editIssue", "March", 0)
         << QApplication::translate("editIssue", "April", 0)
         << QApplication::translate("editIssue", "May", 0)
         << QApplication::translate("editIssue", "June", 0)
         << QApplication::translate("editIssue", "July", 0)
         << QApplication::translate("editIssue", "August", 0)
         << QApplication::translate("editIssue", "September", 0)
         << QApplication::translate("editIssue", "October", 0)
         << QApplication::translate("editIssue", "November", 0)
         << QApplication::translate("editIssue", "December", 0)
        );
        issueNumLabel->setText(QApplication::translate("editIssue", "Issue Number:", 0));
        journalNameLabel->setText(QApplication::translate("editIssue", "Journal Name", 0));
        volumeLabel->setText(QApplication::translate("editIssue", "Volume", 0));
        monthLabel->setText(QApplication::translate("editIssue", "Month:", 0));
        yearLabel->setText(QApplication::translate("editIssue", "Year:", 0));
    } // retranslateUi

};

namespace Ui {
    class editIssue: public Ui_editIssue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITISSUE_H
