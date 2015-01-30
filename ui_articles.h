/********************************************************************************
** Form generated from reading UI file 'articles.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARTICLES_H
#define UI_ARTICLES_H

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
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Articles
{
public:
    QGridLayout *gridLayout;
    QTableView *journalTable;
    QHBoxLayout *horizontalLayout;
    QLabel *volume;
    QComboBox *vComboBox;
    QLabel *issue;
    QComboBox *iComboBox;
    QLabel *month;
    QLabel *year;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QTableView *articleTable;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *viewArticleButton;
    QPushButton *editArticleButton;
    QPushButton *delArticleButton;

    void setupUi(QDialog *Articles)
    {
        if (Articles->objectName().isEmpty())
            Articles->setObjectName(QStringLiteral("Articles"));
        Articles->resize(640, 480);
        QFont font;
        font.setFamily(QStringLiteral("Trebuchet MS"));
        Articles->setFont(font);
        gridLayout = new QGridLayout(Articles);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        journalTable = new QTableView(Articles);
        journalTable->setObjectName(QStringLiteral("journalTable"));
        journalTable->setMaximumSize(QSize(16777215, 200));

        gridLayout->addWidget(journalTable, 4, 0, 1, 4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        volume = new QLabel(Articles);
        volume->setObjectName(QStringLiteral("volume"));

        horizontalLayout->addWidget(volume);

        vComboBox = new QComboBox(Articles);
        vComboBox->setObjectName(QStringLiteral("vComboBox"));

        horizontalLayout->addWidget(vComboBox, 0, Qt::AlignLeft);

        issue = new QLabel(Articles);
        issue->setObjectName(QStringLiteral("issue"));

        horizontalLayout->addWidget(issue);

        iComboBox = new QComboBox(Articles);
        iComboBox->setObjectName(QStringLiteral("iComboBox"));

        horizontalLayout->addWidget(iComboBox, 0, Qt::AlignLeft);

        month = new QLabel(Articles);
        month->setObjectName(QStringLiteral("month"));

        horizontalLayout->addWidget(month);

        year = new QLabel(Articles);
        year->setObjectName(QStringLiteral("year"));

        horizontalLayout->addWidget(year);


        gridLayout->addLayout(horizontalLayout, 7, 0, 1, 4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_5 = new QLabel(Articles);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        lineEdit = new QLineEdit(Articles);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 2, 4);

        articleTable = new QTableView(Articles);
        articleTable->setObjectName(QStringLiteral("articleTable"));

        gridLayout->addWidget(articleTable, 9, 0, 1, 4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        viewArticleButton = new QPushButton(Articles);
        viewArticleButton->setObjectName(QStringLiteral("viewArticleButton"));

        horizontalLayout_3->addWidget(viewArticleButton);

        editArticleButton = new QPushButton(Articles);
        editArticleButton->setObjectName(QStringLiteral("editArticleButton"));

        horizontalLayout_3->addWidget(editArticleButton);

        delArticleButton = new QPushButton(Articles);
        delArticleButton->setObjectName(QStringLiteral("delArticleButton"));

        horizontalLayout_3->addWidget(delArticleButton);


        gridLayout->addLayout(horizontalLayout_3, 10, 0, 1, 4);


        retranslateUi(Articles);

        QMetaObject::connectSlotsByName(Articles);
    } // setupUi

    void retranslateUi(QDialog *Articles)
    {
        Articles->setWindowTitle(QApplication::translate("Articles", "Articles", 0));
        volume->setText(QApplication::translate("Articles", "Volume:", 0));
        issue->setText(QApplication::translate("Articles", "Issue:", 0));
        month->setText(QApplication::translate("Articles", "Month: ", 0));
        year->setText(QApplication::translate("Articles", "Year: ", 0));
        label_5->setText(QApplication::translate("Articles", "Journal:", 0));
        viewArticleButton->setText(QApplication::translate("Articles", "View Article", 0));
        editArticleButton->setText(QApplication::translate("Articles", "Edit Article", 0));
        delArticleButton->setText(QApplication::translate("Articles", "Delete Article", 0));
    } // retranslateUi

};

namespace Ui {
    class Articles: public Ui_Articles {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARTICLES_H
