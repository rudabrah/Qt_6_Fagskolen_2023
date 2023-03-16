/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QPushButton *btnNoParent;
    QLabel *label_2;
    QPushButton *btnWithParent;
    QLabel *label_3;
    QPushButton *btnChildren;
    QListWidget *listWidget;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(800, 600);
        verticalLayout_2 = new QVBoxLayout(Dialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(Dialog);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        btnNoParent = new QPushButton(Dialog);
        btnNoParent->setObjectName("btnNoParent");

        verticalLayout->addWidget(btnNoParent);


        verticalLayout_2->addLayout(verticalLayout);

        label_2 = new QLabel(Dialog);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        btnWithParent = new QPushButton(Dialog);
        btnWithParent->setObjectName("btnWithParent");

        verticalLayout_2->addWidget(btnWithParent);

        label_3 = new QLabel(Dialog);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        btnChildren = new QPushButton(Dialog);
        btnChildren->setObjectName("btnChildren");

        verticalLayout_2->addWidget(btnChildren);

        listWidget = new QListWidget(Dialog);
        listWidget->setObjectName("listWidget");

        verticalLayout_2->addWidget(listWidget);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "En annen dialog som ikke har en \"parent\"", nullptr));
        btnNoParent->setText(QCoreApplication::translate("Dialog", "Without parent", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "En annen dialog som har denne dialogen som parent. ", nullptr));
        btnWithParent->setText(QCoreApplication::translate("Dialog", "With parent", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "Skriv ut dens barn", nullptr));
        btnChildren->setText(QCoreApplication::translate("Dialog", "Who is my children", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
