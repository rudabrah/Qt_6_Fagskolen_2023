/********************************************************************************
** Form generated from reading UI file 'helpdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPDIALOG_H
#define UI_HELPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>

QT_BEGIN_NAMESPACE

class Ui_helpDialog
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridBoard;

    void setupUi(QDialog *helpDialog)
    {
        if (helpDialog->objectName().isEmpty())
            helpDialog->setObjectName("helpDialog");
        helpDialog->resize(400, 300);
        gridLayout = new QGridLayout(helpDialog);
        gridLayout->setObjectName("gridLayout");
        gridBoard = new QGridLayout();
        gridBoard->setObjectName("gridBoard");

        gridLayout->addLayout(gridBoard, 0, 0, 1, 1);


        retranslateUi(helpDialog);

        QMetaObject::connectSlotsByName(helpDialog);
    } // setupUi

    void retranslateUi(QDialog *helpDialog)
    {
        helpDialog->setWindowTitle(QCoreApplication::translate("helpDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class helpDialog: public Ui_helpDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPDIALOG_H
