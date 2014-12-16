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
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_editarticle
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *editarticle)
    {
        if (editarticle->objectName().isEmpty())
            editarticle->setObjectName(QStringLiteral("editarticle"));
        editarticle->resize(640, 480);
        buttonBox = new QDialogButtonBox(editarticle);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 440, 621, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(editarticle);
        QObject::connect(buttonBox, SIGNAL(accepted()), editarticle, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), editarticle, SLOT(reject()));

        QMetaObject::connectSlotsByName(editarticle);
    } // setupUi

    void retranslateUi(QDialog *editarticle)
    {
        editarticle->setWindowTitle(QApplication::translate("editarticle", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class editarticle: public Ui_editarticle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITARTICLE_H
