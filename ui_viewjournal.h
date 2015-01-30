/********************************************************************************
** Form generated from reading UI file 'viewjournal.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWJOURNAL_H
#define UI_VIEWJOURNAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_viewJournal
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QFrame *line_3;
    QGridLayout *gridLayout_2;
    QPushButton *editIssueButton;
    QPushButton *deleteIssueButton;
    QPushButton *addIssueButton;
    QVBoxLayout *vLayout;
    QLabel *journalLabel;
    QLabel *volumeLabel;
    QFrame *line;
    QVBoxLayout *vLayout2;
    QLabel *issueInfoLabel;
    QLabel *issueLabel;
    QLabel *monthLabel;
    QLabel *yearLabel;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QFrame *line_2;
    QTableView *issueTable;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *viewJournal)
    {
        if (viewJournal->objectName().isEmpty())
            viewJournal->setObjectName(QStringLiteral("viewJournal"));
        viewJournal->resize(851, 491);
        gridLayout = new QGridLayout(viewJournal);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);

        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        line_3 = new QFrame(viewJournal);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(20);
        editIssueButton = new QPushButton(viewJournal);
        editIssueButton->setObjectName(QStringLiteral("editIssueButton"));

        gridLayout_2->addWidget(editIssueButton, 2, 3, 1, 1);

        deleteIssueButton = new QPushButton(viewJournal);
        deleteIssueButton->setObjectName(QStringLiteral("deleteIssueButton"));

        gridLayout_2->addWidget(deleteIssueButton, 2, 2, 1, 1);

        addIssueButton = new QPushButton(viewJournal);
        addIssueButton->setObjectName(QStringLiteral("addIssueButton"));

        gridLayout_2->addWidget(addIssueButton, 2, 1, 1, 1);

        vLayout = new QVBoxLayout();
        vLayout->setSpacing(0);
        vLayout->setObjectName(QStringLiteral("vLayout"));
        vLayout->setSizeConstraint(QLayout::SetMinimumSize);
        vLayout->setContentsMargins(-1, 15, -1, -1);
        journalLabel = new QLabel(viewJournal);
        journalLabel->setObjectName(QStringLiteral("journalLabel"));
        QFont font;
        font.setFamily(QStringLiteral("Trebuchet MS"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        journalLabel->setFont(font);

        vLayout->addWidget(journalLabel);

        volumeLabel = new QLabel(viewJournal);
        volumeLabel->setObjectName(QStringLiteral("volumeLabel"));
        volumeLabel->setFont(font);
        volumeLabel->setMargin(3);

        vLayout->addWidget(volumeLabel);

        line = new QFrame(viewJournal);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShadow(QFrame::Raised);
        line->setFrameShape(QFrame::HLine);

        vLayout->addWidget(line);


        gridLayout_2->addLayout(vLayout, 0, 1, 1, 3);

        vLayout2 = new QVBoxLayout();
        vLayout2->setSpacing(10);
        vLayout2->setObjectName(QStringLiteral("vLayout2"));
        issueInfoLabel = new QLabel(viewJournal);
        issueInfoLabel->setObjectName(QStringLiteral("issueInfoLabel"));
        issueInfoLabel->setFont(font);

        vLayout2->addWidget(issueInfoLabel);

        issueLabel = new QLabel(viewJournal);
        issueLabel->setObjectName(QStringLiteral("issueLabel"));
        QFont font1;
        font1.setFamily(QStringLiteral("Trebuchet MS"));
        font1.setPointSize(13);
        issueLabel->setFont(font1);
        issueLabel->setMargin(1);

        vLayout2->addWidget(issueLabel);

        monthLabel = new QLabel(viewJournal);
        monthLabel->setObjectName(QStringLiteral("monthLabel"));
        monthLabel->setFont(font1);
        monthLabel->setMargin(1);

        vLayout2->addWidget(monthLabel);

        yearLabel = new QLabel(viewJournal);
        yearLabel->setObjectName(QStringLiteral("yearLabel"));
        yearLabel->setFont(font1);
        yearLabel->setMargin(1);

        vLayout2->addWidget(yearLabel);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vLayout2->addItem(verticalSpacer_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vLayout2->addItem(verticalSpacer_2);


        gridLayout_2->addLayout(vLayout2, 4, 1, 1, 3);

        line_2 = new QFrame(viewJournal);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setMinimumSize(QSize(0, 0));
        line_2->setMaximumSize(QSize(16777215, 100));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_2, 3, 1, 1, 3);

        issueTable = new QTableView(viewJournal);
        issueTable->setObjectName(QStringLiteral("issueTable"));
        issueTable->setMinimumSize(QSize(750, 0));
        issueTable->setMaximumSize(QSize(800, 250));
        issueTable->setSelectionMode(QAbstractItemView::SingleSelection);

        gridLayout_2->addWidget(issueTable, 1, 1, 1, 3, Qt::AlignHCenter);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 5, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);


        retranslateUi(viewJournal);

        QMetaObject::connectSlotsByName(viewJournal);
    } // setupUi

    void retranslateUi(QDialog *viewJournal)
    {
        viewJournal->setWindowTitle(QApplication::translate("viewJournal", "Dialog", 0));
        editIssueButton->setText(QApplication::translate("viewJournal", "Edit Issue", 0));
        deleteIssueButton->setText(QApplication::translate("viewJournal", "Delete Issue", 0));
        addIssueButton->setText(QApplication::translate("viewJournal", "Add Issue", 0));
        journalLabel->setText(QApplication::translate("viewJournal", "Journal: ", 0));
        volumeLabel->setText(QApplication::translate("viewJournal", "Volume:", 0));
        issueInfoLabel->setText(QApplication::translate("viewJournal", "Issue Information", 0));
        issueLabel->setText(QApplication::translate("viewJournal", "Issue:", 0));
        monthLabel->setText(QApplication::translate("viewJournal", "Month: ", 0));
        yearLabel->setText(QApplication::translate("viewJournal", "Year: ", 0));
    } // retranslateUi

};

namespace Ui {
    class viewJournal: public Ui_viewJournal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWJOURNAL_H
