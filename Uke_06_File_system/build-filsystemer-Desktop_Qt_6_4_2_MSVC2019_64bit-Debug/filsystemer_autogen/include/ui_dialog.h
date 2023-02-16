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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *btnAddFormat;
    QLineEdit *LEFormat;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *LEoutPut;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnRead;
    QPushButton *pushButton_2;
    QPushButton *btnWrite;
    QLabel *label_2;
    QLineEdit *LEFileName;
    QLabel *label_4;
    QComboBox *CMBfileFormat;
    QTextEdit *txtEdit;
    QLabel *label_3;
    QListWidget *listWidget;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(852, 531);
        gridLayout = new QGridLayout(Dialog);
        gridLayout->setObjectName("gridLayout");
        btnAddFormat = new QPushButton(Dialog);
        btnAddFormat->setObjectName("btnAddFormat");

        gridLayout->addWidget(btnAddFormat, 1, 1, 1, 1);

        LEFormat = new QLineEdit(Dialog);
        LEFormat->setObjectName("LEFormat");

        gridLayout->addWidget(LEFormat, 2, 1, 1, 1);

        label = new QLabel(Dialog);
        label->setObjectName("label");

        gridLayout->addWidget(label, 4, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");

        gridLayout->addLayout(horizontalLayout_2, 10, 0, 1, 1);

        label_5 = new QLabel(Dialog);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 8, 1, 1, 1);

        LEoutPut = new QLineEdit(Dialog);
        LEoutPut->setObjectName("LEoutPut");

        gridLayout->addWidget(LEoutPut, 6, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btnRead = new QPushButton(Dialog);
        btnRead->setObjectName("btnRead");

        horizontalLayout->addWidget(btnRead);

        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);

        btnWrite = new QPushButton(Dialog);
        btnWrite->setObjectName("btnWrite");

        horizontalLayout->addWidget(btnWrite);

        label_2 = new QLabel(Dialog);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        LEFileName = new QLineEdit(Dialog);
        LEFileName->setObjectName("LEFileName");

        horizontalLayout->addWidget(LEFileName);

        label_4 = new QLabel(Dialog);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        CMBfileFormat = new QComboBox(Dialog);
        CMBfileFormat->addItem(QString());
        CMBfileFormat->setObjectName("CMBfileFormat");
        CMBfileFormat->setMinimumSize(QSize(30, 10));

        horizontalLayout->addWidget(CMBfileFormat);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 2);

        txtEdit = new QTextEdit(Dialog);
        txtEdit->setObjectName("txtEdit");
        txtEdit->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(txtEdit, 9, 0, 1, 1);

        label_3 = new QLabel(Dialog);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 8, 0, 1, 1);

        listWidget = new QListWidget(Dialog);
        listWidget->setObjectName("listWidget");

        gridLayout->addWidget(listWidget, 9, 1, 1, 1);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        btnAddFormat->setText(QCoreApplication::translate("Dialog", "Add new format", nullptr));
        LEFormat->setText(QCoreApplication::translate("Dialog", "Add new format", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Output message", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "ListWiew", nullptr));
        btnRead->setText(QCoreApplication::translate("Dialog", "Read", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "Append", nullptr));
        btnWrite->setText(QCoreApplication::translate("Dialog", "Write", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Filename", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "Format", nullptr));
        CMBfileFormat->setItemText(0, QCoreApplication::translate("Dialog", ".txt", nullptr));

        label_3->setText(QCoreApplication::translate("Dialog", "Editor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
