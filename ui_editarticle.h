/********************************************************************************
** Form generated from reading UI file 'editarticle.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITARTICLE_H
#define UI_EDITARTICLE_H

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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editarticle
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *articleLabel;
    QLineEdit *lineEdit;
    QWidget *tab_2;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *searchjournal;
    QLabel *journalLabel;
    QHBoxLayout *horizontalLayout;
    QLabel *monthLabel;
    QLabel *yearLabel;
    QTableView *tableView_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *volumeLabel;
    QComboBox *comboBox;
    QLabel *issueLabel;
    QComboBox *comboBox_2;
    QWidget *tab_3;
    QGridLayout *gridLayout_5;
    QLabel *label;
    QPushButton *addAuthor;
    QPushButton *removeAuthor;
    QTableView *tableView;

    void setupUi(QDialog *editarticle)
    {
        if (editarticle->objectName().isEmpty())
            editarticle->setObjectName(QStringLiteral("editarticle"));
        editarticle->resize(646, 574);
        gridLayout = new QGridLayout(editarticle);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_2 = new QPushButton(editarticle);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 1, 1, 1);

        pushButton = new QPushButton(editarticle);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        tabWidget = new QTabWidget(editarticle);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_3 = new QGridLayout(tab);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        articleLabel = new QLabel(tab);
        articleLabel->setObjectName(QStringLiteral("articleLabel"));
        QFont font;
        font.setFamily(QStringLiteral("Trebuchet MS"));
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        articleLabel->setFont(font);

        horizontalLayout_3->addWidget(articleLabel);

        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_3->addWidget(lineEdit);


        gridLayout_3->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_4 = new QGridLayout(tab_2);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_4->addWidget(label_2);

        searchjournal = new QLineEdit(tab_2);
        searchjournal->setObjectName(QStringLiteral("searchjournal"));

        horizontalLayout_4->addWidget(searchjournal);


        gridLayout_2->addLayout(horizontalLayout_4, 2, 0, 1, 3);

        journalLabel = new QLabel(tab_2);
        journalLabel->setObjectName(QStringLiteral("journalLabel"));
        QFont font1;
        font1.setFamily(QStringLiteral("Trebuchet MS"));
        journalLabel->setFont(font1);

        gridLayout_2->addWidget(journalLabel, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        monthLabel = new QLabel(tab_2);
        monthLabel->setObjectName(QStringLiteral("monthLabel"));
        monthLabel->setFont(font1);

        horizontalLayout->addWidget(monthLabel);

        yearLabel = new QLabel(tab_2);
        yearLabel->setObjectName(QStringLiteral("yearLabel"));
        yearLabel->setFont(font1);

        horizontalLayout->addWidget(yearLabel);


        gridLayout_2->addLayout(horizontalLayout, 9, 0, 1, 2);

        tableView_2 = new QTableView(tab_2);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));

        gridLayout_2->addWidget(tableView_2, 4, 0, 1, 3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        volumeLabel = new QLabel(tab_2);
        volumeLabel->setObjectName(QStringLiteral("volumeLabel"));
        volumeLabel->setFont(font1);

        horizontalLayout_2->addWidget(volumeLabel);

        comboBox = new QComboBox(tab_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_2->addWidget(comboBox);

        issueLabel = new QLabel(tab_2);
        issueLabel->setObjectName(QStringLiteral("issueLabel"));
        issueLabel->setFont(font1);

        horizontalLayout_2->addWidget(issueLabel);

        comboBox_2 = new QComboBox(tab_2);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        horizontalLayout_2->addWidget(comboBox_2);


        gridLayout_2->addLayout(horizontalLayout_2, 8, 0, 1, 3);


        gridLayout_4->addLayout(gridLayout_2, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_5 = new QGridLayout(tab_3);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label = new QLabel(tab_3);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font1);

        gridLayout_5->addWidget(label, 0, 0, 1, 1);

        addAuthor = new QPushButton(tab_3);
        addAuthor->setObjectName(QStringLiteral("addAuthor"));
        addAuthor->setMinimumSize(QSize(300, 50));

        gridLayout_5->addWidget(addAuthor, 2, 0, 1, 1);

        removeAuthor = new QPushButton(tab_3);
        removeAuthor->setObjectName(QStringLiteral("removeAuthor"));
        removeAuthor->setMinimumSize(QSize(300, 50));

        gridLayout_5->addWidget(removeAuthor, 2, 1, 1, 1);

        tableView = new QTableView(tab_3);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->horizontalHeader()->setCascadingSectionResizes(false);
        tableView->horizontalHeader()->setStretchLastSection(false);

        gridLayout_5->addWidget(tableView, 1, 0, 1, 2);

        tabWidget->addTab(tab_3, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 2);


        retranslateUi(editarticle);
        QObject::connect(pushButton, SIGNAL(clicked()), editarticle, SLOT(accept()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), editarticle, SLOT(reject()));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(editarticle);
    } // setupUi

    void retranslateUi(QDialog *editarticle)
    {
        editarticle->setWindowTitle(QApplication::translate("editarticle", "Dialog", 0));
        pushButton_2->setText(QApplication::translate("editarticle", "Cancel", 0));
        pushButton->setText(QApplication::translate("editarticle", "Save Changes", 0));
        articleLabel->setText(QApplication::translate("editarticle", "Article:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("editarticle", "Article", 0));
        label_2->setText(QApplication::translate("editarticle", "Search: ", 0));
        journalLabel->setText(QApplication::translate("editarticle", "Journal:", 0));
        monthLabel->setText(QApplication::translate("editarticle", "Month:", 0));
        yearLabel->setText(QApplication::translate("editarticle", "Year:", 0));
        volumeLabel->setText(QApplication::translate("editarticle", "Volume: ", 0));
        issueLabel->setText(QApplication::translate("editarticle", "Issue: ", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("editarticle", "Journal Information", 0));
        label->setText(QApplication::translate("editarticle", "Authors:", 0));
        addAuthor->setText(QApplication::translate("editarticle", "Add Author", 0));
        removeAuthor->setText(QApplication::translate("editarticle", "Remove Author", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("editarticle", "Authors", 0));
    } // retranslateUi

};

namespace Ui {
    class editarticle: public Ui_editarticle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITARTICLE_H
