/********************************************************************************
** Form generated from reading UI file 'viewarticle.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWARTICLE_H
#define UI_VIEWARTICLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewArticle
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QLabel *parserLabel;
    QLabel *journalLabel;
    QLabel *articleLabel;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QLabel *monthLabel;
    QLabel *yearLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *issueLabel;
    QLabel *volumeLabel;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line;
    QLabel *authorLabel;
    QLabel *pageLabel;

    void setupUi(QWidget *ViewArticle)
    {
        if (ViewArticle->objectName().isEmpty())
            ViewArticle->setObjectName(QStringLiteral("ViewArticle"));
        ViewArticle->resize(705, 459);
        gridLayout = new QGridLayout(ViewArticle);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        parserLabel = new QLabel(ViewArticle);
        parserLabel->setObjectName(QStringLiteral("parserLabel"));
        QFont font;
        font.setFamily(QStringLiteral("Trebuchet MS"));
        parserLabel->setFont(font);

        gridLayout_2->addWidget(parserLabel, 12, 0, 1, 1);

        journalLabel = new QLabel(ViewArticle);
        journalLabel->setObjectName(QStringLiteral("journalLabel"));
        journalLabel->setFont(font);

        gridLayout_2->addWidget(journalLabel, 2, 0, 1, 1);

        articleLabel = new QLabel(ViewArticle);
        articleLabel->setObjectName(QStringLiteral("articleLabel"));
        QFont font1;
        font1.setFamily(QStringLiteral("Trebuchet MS"));
        font1.setPointSize(13);
        font1.setBold(true);
        font1.setWeight(75);
        articleLabel->setFont(font1);

        gridLayout_2->addWidget(articleLabel, 0, 0, 1, 1);

        tableView = new QTableView(ViewArticle);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->horizontalHeader()->setCascadingSectionResizes(false);
        tableView->horizontalHeader()->setStretchLastSection(false);

        gridLayout_2->addWidget(tableView, 10, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        monthLabel = new QLabel(ViewArticle);
        monthLabel->setObjectName(QStringLiteral("monthLabel"));
        monthLabel->setFont(font);

        horizontalLayout->addWidget(monthLabel);

        yearLabel = new QLabel(ViewArticle);
        yearLabel->setObjectName(QStringLiteral("yearLabel"));
        yearLabel->setFont(font);

        horizontalLayout->addWidget(yearLabel);


        gridLayout_2->addLayout(horizontalLayout, 5, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        issueLabel = new QLabel(ViewArticle);
        issueLabel->setObjectName(QStringLiteral("issueLabel"));
        issueLabel->setFont(font);

        horizontalLayout_2->addWidget(issueLabel);

        volumeLabel = new QLabel(ViewArticle);
        volumeLabel->setObjectName(QStringLiteral("volumeLabel"));
        volumeLabel->setFont(font);

        horizontalLayout_2->addWidget(volumeLabel);


        gridLayout_2->addLayout(horizontalLayout_2, 4, 0, 1, 1);

        line_2 = new QFrame(ViewArticle);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFont(font);
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_2, 7, 0, 1, 1);

        line_3 = new QFrame(ViewArticle);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFont(font);
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_3, 11, 0, 1, 1);

        line = new QFrame(ViewArticle);
        line->setObjectName(QStringLiteral("line"));
        line->setFont(font);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 1, 0, 1, 1);

        authorLabel = new QLabel(ViewArticle);
        authorLabel->setObjectName(QStringLiteral("authorLabel"));
        authorLabel->setFont(font);

        gridLayout_2->addWidget(authorLabel, 8, 0, 1, 1);

        pageLabel = new QLabel(ViewArticle);
        pageLabel->setObjectName(QStringLiteral("pageLabel"));

        gridLayout_2->addWidget(pageLabel, 6, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);


        retranslateUi(ViewArticle);

        QMetaObject::connectSlotsByName(ViewArticle);
    } // setupUi

    void retranslateUi(QWidget *ViewArticle)
    {
        ViewArticle->setWindowTitle(QString());
        parserLabel->setText(QApplication::translate("ViewArticle", "Parser used: ", 0));
        journalLabel->setText(QApplication::translate("ViewArticle", "Journal:", 0));
        articleLabel->setText(QApplication::translate("ViewArticle", "Article:", 0));
        monthLabel->setText(QApplication::translate("ViewArticle", "Month:", 0));
        yearLabel->setText(QApplication::translate("ViewArticle", "Year:", 0));
        issueLabel->setText(QApplication::translate("ViewArticle", "Issue: ", 0));
        volumeLabel->setText(QApplication::translate("ViewArticle", "Volume: ", 0));
        authorLabel->setText(QApplication::translate("ViewArticle", "Authors:", 0));
        pageLabel->setText(QApplication::translate("ViewArticle", "Pages: ", 0));
    } // retranslateUi

};

namespace Ui {
    class ViewArticle: public Ui_ViewArticle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWARTICLE_H
