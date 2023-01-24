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
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QPushButton *btnAutoRepeat;
    QPushButton *btnChecked;
    QPushButton *btnCheckable;
    QSpacerItem *verticalSpacer_2;
    QPushButton *btnToggle;
    QSpacerItem *verticalSpacer;
    QPushButton *btnNormal;
    QPushButton *btnToggleAuto;
    QPushButton *pushButton;
    QPushButton *btnDefault;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_4;
    QLabel *label;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox;
    QCheckBox *checkBox_4;
    QPushButton *btnOk;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOkey;
    QGroupBox *grpCampus;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_8;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *grpValgfag;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(646, 364);
        horizontalLayout = new QHBoxLayout(Dialog);
        horizontalLayout->setObjectName("horizontalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        btnAutoRepeat = new QPushButton(Dialog);
        btnAutoRepeat->setObjectName("btnAutoRepeat");

        gridLayout->addWidget(btnAutoRepeat, 2, 0, 1, 1);

        btnChecked = new QPushButton(Dialog);
        btnChecked->setObjectName("btnChecked");

        gridLayout->addWidget(btnChecked, 2, 1, 1, 1);

        btnCheckable = new QPushButton(Dialog);
        btnCheckable->setObjectName("btnCheckable");
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        btnCheckable->setFont(font);
        btnCheckable->setAutoFillBackground(false);

        gridLayout->addWidget(btnCheckable, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        btnToggle = new QPushButton(Dialog);
        btnToggle->setObjectName("btnToggle");

        gridLayout->addWidget(btnToggle, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 7, 0, 1, 1);

        btnNormal = new QPushButton(Dialog);
        btnNormal->setObjectName("btnNormal");

        gridLayout->addWidget(btnNormal, 1, 1, 1, 1);

        btnToggleAuto = new QPushButton(Dialog);
        btnToggleAuto->setObjectName("btnToggleAuto");

        gridLayout->addWidget(btnToggleAuto, 3, 1, 1, 1);

        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 5, 0, 1, 1);

        btnDefault = new QPushButton(Dialog);
        btnDefault->setObjectName("btnDefault");
        btnDefault->setCheckable(false);

        gridLayout->addWidget(btnDefault, 5, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        label = new QLabel(Dialog);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        checkBox_2 = new QCheckBox(Dialog);
        checkBox_2->setObjectName("checkBox_2");

        verticalLayout->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(Dialog);
        checkBox_3->setObjectName("checkBox_3");

        verticalLayout->addWidget(checkBox_3);

        checkBox = new QCheckBox(Dialog);
        checkBox->setObjectName("checkBox");

        verticalLayout->addWidget(checkBox);

        checkBox_4 = new QCheckBox(Dialog);
        checkBox_4->setObjectName("checkBox_4");

        verticalLayout->addWidget(checkBox_4);

        btnOk = new QPushButton(Dialog);
        btnOk->setObjectName("btnOk");

        verticalLayout->addWidget(btnOk);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(6, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnOkey = new QPushButton(Dialog);
        btnOkey->setObjectName("btnOkey");

        horizontalLayout->addWidget(btnOkey);

        grpCampus = new QGroupBox(Dialog);
        grpCampus->setObjectName("grpCampus");
        verticalLayout_2 = new QVBoxLayout(grpCampus);
        verticalLayout_2->setObjectName("verticalLayout_2");
        radioButton_6 = new QRadioButton(grpCampus);
        radioButton_6->setObjectName("radioButton_6");

        verticalLayout_2->addWidget(radioButton_6);

        radioButton_7 = new QRadioButton(grpCampus);
        radioButton_7->setObjectName("radioButton_7");

        verticalLayout_2->addWidget(radioButton_7);

        radioButton_5 = new QRadioButton(grpCampus);
        radioButton_5->setObjectName("radioButton_5");

        verticalLayout_2->addWidget(radioButton_5);

        radioButton_8 = new QRadioButton(grpCampus);
        radioButton_8->setObjectName("radioButton_8");

        verticalLayout_2->addWidget(radioButton_8);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_6);


        horizontalLayout->addWidget(grpCampus);

        horizontalSpacer_2 = new QSpacerItem(7, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        grpValgfag = new QGroupBox(Dialog);
        grpValgfag->setObjectName("grpValgfag");
        verticalLayout_3 = new QVBoxLayout(grpValgfag);
        verticalLayout_3->setObjectName("verticalLayout_3");
        radioButton = new QRadioButton(grpValgfag);
        radioButton->setObjectName("radioButton");

        verticalLayout_3->addWidget(radioButton);

        radioButton_2 = new QRadioButton(grpValgfag);
        radioButton_2->setObjectName("radioButton_2");

        verticalLayout_3->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(grpValgfag);
        radioButton_3->setObjectName("radioButton_3");

        verticalLayout_3->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(grpValgfag);
        radioButton_4->setObjectName("radioButton_4");

        verticalLayout_3->addWidget(radioButton_4);


        horizontalLayout->addWidget(grpValgfag);


        retranslateUi(Dialog);
        QObject::connect(pushButton, &QPushButton::clicked, Dialog, qOverload<>(&QDialog::accept));

        btnDefault->setDefault(true);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        btnAutoRepeat->setText(QCoreApplication::translate("Dialog", "Auto Repeat", nullptr));
        btnChecked->setText(QCoreApplication::translate("Dialog", "Is checked", nullptr));
        btnCheckable->setText(QCoreApplication::translate("Dialog", "Checkable", nullptr));
        btnToggle->setText(QCoreApplication::translate("Dialog", "Toggle", nullptr));
        btnNormal->setText(QCoreApplication::translate("Dialog", "Normal", nullptr));
        btnToggleAuto->setText(QCoreApplication::translate("Dialog", "Toggle Auto", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "Exit", nullptr));
        btnDefault->setText(QCoreApplication::translate("Dialog", "Default", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Fagskolen - velg fag", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Dialog", "Programering", nullptr));
        checkBox_3->setText(QCoreApplication::translate("Dialog", "Elkraft", nullptr));
        checkBox->setText(QCoreApplication::translate("Dialog", "Databaser", nullptr));
        checkBox_4->setText(QCoreApplication::translate("Dialog", "Prosjektledelse", nullptr));
        btnOk->setText(QCoreApplication::translate("Dialog", "OK", nullptr));
        btnOkey->setText(QCoreApplication::translate("Dialog", "Okey", nullptr));
        grpCampus->setTitle(QCoreApplication::translate("Dialog", "Campus", nullptr));
        radioButton_6->setText(QCoreApplication::translate("Dialog", "Kongsberg", nullptr));
        radioButton_7->setText(QCoreApplication::translate("Dialog", "Oslo", nullptr));
        radioButton_5->setText(QCoreApplication::translate("Dialog", "Drammen", nullptr));
        radioButton_8->setText(QCoreApplication::translate("Dialog", "Trondheim", nullptr));
        grpValgfag->setTitle(QCoreApplication::translate("Dialog", "Valg fag", nullptr));
        radioButton->setText(QCoreApplication::translate("Dialog", "Programmering", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Dialog", "Elkraft", nullptr));
        radioButton_3->setText(QCoreApplication::translate("Dialog", "Databaser", nullptr));
        radioButton_4->setText(QCoreApplication::translate("Dialog", "Prosjektledelse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
