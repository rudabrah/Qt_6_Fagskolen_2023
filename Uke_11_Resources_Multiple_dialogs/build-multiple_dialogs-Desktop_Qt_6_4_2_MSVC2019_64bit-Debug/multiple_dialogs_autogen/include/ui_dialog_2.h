/********************************************************************************
** Form generated from reading UI file 'dialog_2.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_2_H
#define UI_DIALOG_2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog_2
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *Dialog_2)
    {
        if (Dialog_2->objectName().isEmpty())
            Dialog_2->setObjectName("Dialog_2");
        Dialog_2->resize(400, 300);
        pushButton = new QPushButton(Dialog_2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(90, 100, 211, 61));

        retranslateUi(Dialog_2);

        QMetaObject::connectSlotsByName(Dialog_2);
    } // setupUi

    void retranslateUi(QDialog *Dialog_2)
    {
        Dialog_2->setWindowTitle(QCoreApplication::translate("Dialog_2", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog_2", "Who is my parent", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_2: public Ui_Dialog_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_2_H
