/********************************************************************************
** Form generated from reading UI file 'addauthor.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDAUTHOR_H
#define UI_ADDAUTHOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_addAuthor
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_2;

    void setupUi(QDialog *addAuthor)
    {
        if (addAuthor->objectName().isEmpty())
            addAuthor->setObjectName(QStringLiteral("addAuthor"));
        addAuthor->resize(526, 235);
        gridLayout = new QGridLayout(addAuthor);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buttonBox = new QDialogButtonBox(addAuthor);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 1, 1, 1);

        label = new QLabel(addAuthor);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(addAuthor);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        lineEdit_2 = new QLineEdit(addAuthor);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        label_2 = new QLabel(addAuthor);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);


        retranslateUi(addAuthor);
        QObject::connect(buttonBox, SIGNAL(accepted()), addAuthor, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), addAuthor, SLOT(reject()));

        QMetaObject::connectSlotsByName(addAuthor);
    } // setupUi

    void retranslateUi(QDialog *addAuthor)
    {
        addAuthor->setWindowTitle(QApplication::translate("addAuthor", "Add Author", 0));
        label->setText(QApplication::translate("addAuthor", "Author:", 0));
        label_2->setText(QApplication::translate("addAuthor", "Affiliation:", 0));
    } // retranslateUi

};

namespace Ui {
    class addAuthor: public Ui_addAuthor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDAUTHOR_H
