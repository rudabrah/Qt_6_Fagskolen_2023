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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *btnOk;
    QPushButton *btnNormal;
    QPushButton *btnAutoRepeat;
    QCheckBox *checkBox;
    QCheckBox *checkBox_4;
    QPushButton *btnToggleAuto;
    QLabel *label;
    QPushButton *btnToggle;
    QCheckBox *checkBox_3;
    QPushButton *pushButton;
    QCheckBox *checkBox_2;
    QPushButton *btnDefault;
    QPushButton *btnChecked;
    QPushButton *btnCheckable;
    QSpacerItem *verticalSpacer;
    QGroupBox *grpCampus;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_8;
    QPushButton *btnOkey;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *grpValgfag;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QVBoxLayout *verticalLayout;
    QPushButton *btnTest1;
    QPushButton *btnTest2;
    QPushButton *btnTest3;
    QPushButton *btnTest4;
    QLabel *lblTesting;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(649, 370);
        gridLayout_2 = new QGridLayout(Dialog);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        btnOk = new QPushButton(Dialog);
        btnOk->setObjectName("btnOk");

        gridLayout->addWidget(btnOk, 9, 1, 1, 1);

        btnNormal = new QPushButton(Dialog);
        btnNormal->setObjectName("btnNormal");

        gridLayout->addWidget(btnNormal, 0, 1, 1, 1);

        btnAutoRepeat = new QPushButton(Dialog);
        btnAutoRepeat->setObjectName("btnAutoRepeat");

        gridLayout->addWidget(btnAutoRepeat, 1, 0, 1, 1);

        checkBox = new QCheckBox(Dialog);
        checkBox->setObjectName("checkBox");

        gridLayout->addWidget(checkBox, 7, 1, 1, 1);

        checkBox_4 = new QCheckBox(Dialog);
        checkBox_4->setObjectName("checkBox_4");

        gridLayout->addWidget(checkBox_4, 7, 0, 1, 1);

        btnToggleAuto = new QPushButton(Dialog);
        btnToggleAuto->setObjectName("btnToggleAuto");

        gridLayout->addWidget(btnToggleAuto, 2, 1, 1, 1);

        label = new QLabel(Dialog);
        label->setObjectName("label");

        gridLayout->addWidget(label, 5, 0, 1, 1);

        btnToggle = new QPushButton(Dialog);
        btnToggle->setObjectName("btnToggle");

        gridLayout->addWidget(btnToggle, 2, 0, 1, 1);

        checkBox_3 = new QCheckBox(Dialog);
        checkBox_3->setObjectName("checkBox_3");

        gridLayout->addWidget(checkBox_3, 8, 0, 1, 1);

        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 4, 0, 1, 1);

        checkBox_2 = new QCheckBox(Dialog);
        checkBox_2->setObjectName("checkBox_2");

        gridLayout->addWidget(checkBox_2, 8, 1, 1, 1);

        btnDefault = new QPushButton(Dialog);
        btnDefault->setObjectName("btnDefault");
        btnDefault->setCheckable(false);

        gridLayout->addWidget(btnDefault, 4, 1, 1, 1);

        btnChecked = new QPushButton(Dialog);
        btnChecked->setObjectName("btnChecked");

        gridLayout->addWidget(btnChecked, 1, 1, 1, 1);

        btnCheckable = new QPushButton(Dialog);
        btnCheckable->setObjectName("btnCheckable");
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        btnCheckable->setFont(font);
        btnCheckable->setAutoFillBackground(false);

        gridLayout->addWidget(btnCheckable, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 10, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 2, 1);

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

        btnOkey = new QPushButton(grpCampus);
        btnOkey->setObjectName("btnOkey");

        verticalLayout_2->addWidget(btnOkey);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        gridLayout_2->addWidget(grpCampus, 0, 2, 2, 1);

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


        gridLayout_2->addWidget(grpValgfag, 0, 3, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        btnTest1 = new QPushButton(Dialog);
        btnTest1->setObjectName("btnTest1");

        verticalLayout->addWidget(btnTest1);

        btnTest2 = new QPushButton(Dialog);
        btnTest2->setObjectName("btnTest2");

        verticalLayout->addWidget(btnTest2);

        btnTest3 = new QPushButton(Dialog);
        btnTest3->setObjectName("btnTest3");

        verticalLayout->addWidget(btnTest3);

        btnTest4 = new QPushButton(Dialog);
        btnTest4->setObjectName("btnTest4");

        verticalLayout->addWidget(btnTest4);

        lblTesting = new QLabel(Dialog);
        lblTesting->setObjectName("lblTesting");

        verticalLayout->addWidget(lblTesting);


        gridLayout_2->addLayout(verticalLayout, 0, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 1, 3, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 1, 1, 1, 1);


        retranslateUi(Dialog);
        QObject::connect(pushButton, &QPushButton::clicked, Dialog, qOverload<>(&QDialog::accept));

        btnDefault->setDefault(true);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        btnOk->setText(QCoreApplication::translate("Dialog", "OK", nullptr));
        btnNormal->setText(QCoreApplication::translate("Dialog", "Normal", nullptr));
        btnAutoRepeat->setText(QCoreApplication::translate("Dialog", "Auto Repeat", nullptr));
        checkBox->setText(QCoreApplication::translate("Dialog", "Databaser", nullptr));
        checkBox_4->setText(QCoreApplication::translate("Dialog", "Prosjektledelse", nullptr));
        btnToggleAuto->setText(QCoreApplication::translate("Dialog", "Toggle Auto", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Fagskolen - velg fag", nullptr));
        btnToggle->setText(QCoreApplication::translate("Dialog", "Toggle", nullptr));
        checkBox_3->setText(QCoreApplication::translate("Dialog", "Elkraft", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "Exit", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Dialog", "Programering", nullptr));
        btnDefault->setText(QCoreApplication::translate("Dialog", "Default", nullptr));
        btnChecked->setText(QCoreApplication::translate("Dialog", "Is checked", nullptr));
        btnCheckable->setText(QCoreApplication::translate("Dialog", "Checkable", nullptr));
        grpCampus->setTitle(QCoreApplication::translate("Dialog", "Campus", nullptr));
        radioButton_6->setText(QCoreApplication::translate("Dialog", "Kongsberg", nullptr));
        radioButton_7->setText(QCoreApplication::translate("Dialog", "Oslo", nullptr));
        radioButton_5->setText(QCoreApplication::translate("Dialog", "Drammen", nullptr));
        radioButton_8->setText(QCoreApplication::translate("Dialog", "Trondheim", nullptr));
        btnOkey->setText(QCoreApplication::translate("Dialog", "Okey", nullptr));
        grpValgfag->setTitle(QCoreApplication::translate("Dialog", "Valg fag", nullptr));
        radioButton->setText(QCoreApplication::translate("Dialog", "Programmering", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Dialog", "Elkraft", nullptr));
        radioButton_3->setText(QCoreApplication::translate("Dialog", "Databaser", nullptr));
        radioButton_4->setText(QCoreApplication::translate("Dialog", "Prosjektledelse", nullptr));
        btnTest1->setText(QCoreApplication::translate("Dialog", "Test 1", nullptr));
        btnTest2->setText(QCoreApplication::translate("Dialog", "Test 2", nullptr));
        btnTest3->setText(QCoreApplication::translate("Dialog", "Test 3", nullptr));
        btnTest4->setText(QCoreApplication::translate("Dialog", "Test 4", nullptr));
        lblTesting->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
