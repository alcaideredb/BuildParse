/********************************************************************************
** Form generated from reading UI file 'addvolume.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDVOLUME_H
#define UI_ADDVOLUME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_addVolume
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QDialogButtonBox *buttonBox;
    QSpinBox *spinBox;
    QLabel *label_2;

    void setupUi(QDialog *addVolume)
    {
        if (addVolume->objectName().isEmpty())
            addVolume->setObjectName(QStringLiteral("addVolume"));
        addVolume->resize(640, 265);
        gridLayout = new QGridLayout(addVolume);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(addVolume);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 1, 1, 1);

        buttonBox = new QDialogButtonBox(addVolume);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 2, 1, 1);

        spinBox = new QSpinBox(addVolume);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMinimum(1);

        gridLayout->addWidget(spinBox, 1, 2, 1, 1);

        label_2 = new QLabel(addVolume);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setPointSize(16);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 2, 1, 1);


        retranslateUi(addVolume);
        QObject::connect(buttonBox, SIGNAL(accepted()), addVolume, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), addVolume, SLOT(reject()));

        QMetaObject::connectSlotsByName(addVolume);
    } // setupUi

    void retranslateUi(QDialog *addVolume)
    {
        addVolume->setWindowTitle(QApplication::translate("addVolume", "Dialog", 0));
        label->setText(QApplication::translate("addVolume", "Volume: ", 0));
        label_2->setText(QApplication::translate("addVolume", "Journal Name", 0));
    } // retranslateUi

};

namespace Ui {
    class addVolume: public Ui_addVolume {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDVOLUME_H
