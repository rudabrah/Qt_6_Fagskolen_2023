/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QCommandLinkButton *commandLinkButton_2;
    QCommandLinkButton *commandLinkButton;
    QCommandLinkButton *commandLinkButton_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(800, 600);
        horizontalLayout = new QHBoxLayout(Dialog);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(Dialog);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        commandLinkButton_2 = new QCommandLinkButton(Dialog);
        commandLinkButton_2->setObjectName("commandLinkButton_2");

        verticalLayout->addWidget(commandLinkButton_2);

        commandLinkButton = new QCommandLinkButton(Dialog);
        commandLinkButton->setObjectName("commandLinkButton");

        verticalLayout->addWidget(commandLinkButton);

        commandLinkButton_3 = new QCommandLinkButton(Dialog);
        commandLinkButton_3->setObjectName("commandLinkButton_3");

        verticalLayout->addWidget(commandLinkButton_3);

        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
        commandLinkButton_2->setText(QCoreApplication::translate("Dialog", "CommandLinkButton", nullptr));
        commandLinkButton->setText(QCoreApplication::translate("Dialog", "CommandLinkButton", nullptr));
        commandLinkButton_3->setText(QCoreApplication::translate("Dialog", "CommandLinkButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
