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
#include <QtWidgets/QDialogButtonBox>
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
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QTableView *tableView_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QLabel *label_3;
    QLabel *label_4;
    QDialogButtonBox *buttonBox;
    QTableView *tableView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Articles)
    {
        if (Articles->objectName().isEmpty())
            Articles->setObjectName(QStringLiteral("Articles"));
        Articles->resize(640, 480);
        gridLayout = new QGridLayout(Articles);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_5 = new QLabel(Articles);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        lineEdit = new QLineEdit(Articles);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 2, 1);

        tableView_2 = new QTableView(Articles);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));

        gridLayout->addWidget(tableView_2, 9, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(Articles);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(Articles);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout->addWidget(comboBox, 0, Qt::AlignLeft);

        label_2 = new QLabel(Articles);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        comboBox_2 = new QComboBox(Articles);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        horizontalLayout->addWidget(comboBox_2, 0, Qt::AlignLeft);

        label_3 = new QLabel(Articles);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        label_4 = new QLabel(Articles);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);


        gridLayout->addLayout(horizontalLayout, 7, 0, 1, 1);

        buttonBox = new QDialogButtonBox(Articles);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 12, 0, 1, 1);

        tableView = new QTableView(Articles);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setMaximumSize(QSize(16777215, 200));

        gridLayout->addWidget(tableView, 4, 0, 1, 2);

        pushButton = new QPushButton(Articles);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 10, 0, 1, 1);

        pushButton_2 = new QPushButton(Articles);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 11, 0, 1, 1);


        retranslateUi(Articles);
        QObject::connect(buttonBox, SIGNAL(accepted()), Articles, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Articles, SLOT(reject()));

        QMetaObject::connectSlotsByName(Articles);
    } // setupUi

    void retranslateUi(QDialog *Articles)
    {
        Articles->setWindowTitle(QApplication::translate("Articles", "Dialog", 0));
        label_5->setText(QApplication::translate("Articles", "Journal:", 0));
        label->setText(QApplication::translate("Articles", "Volume:", 0));
        label_2->setText(QApplication::translate("Articles", "Issue:", 0));
        label_3->setText(QApplication::translate("Articles", "Month: ", 0));
        label_4->setText(QApplication::translate("Articles", "Year: ", 0));
        pushButton->setText(QApplication::translate("Articles", "Edit Article", 0));
        pushButton_2->setText(QApplication::translate("Articles", "Delete Article", 0));
    } // retranslateUi

};

namespace Ui {
    class Articles: public Ui_Articles {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARTICLES_H
