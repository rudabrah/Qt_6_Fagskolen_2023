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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnRead;
    QPushButton *pushButton_2;
    QPushButton *btnWrite;
    QLabel *label_2;
    QLineEdit *LEFileName;
    QComboBox *CMBfileFormat;
    QLabel *label;
    QLineEdit *LEoutPut;
    QLabel *label_3;
    QTextEdit *txtEdit;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(852, 531);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName("verticalLayout");
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

        CMBfileFormat = new QComboBox(Dialog);
        CMBfileFormat->addItem(QString());
        CMBfileFormat->addItem(QString());
        CMBfileFormat->setObjectName("CMBfileFormat");

        horizontalLayout->addWidget(CMBfileFormat);


        verticalLayout->addLayout(horizontalLayout);

        label = new QLabel(Dialog);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        LEoutPut = new QLineEdit(Dialog);
        LEoutPut->setObjectName("LEoutPut");

        verticalLayout->addWidget(LEoutPut);

        label_3 = new QLabel(Dialog);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        txtEdit = new QTextEdit(Dialog);
        txtEdit->setObjectName("txtEdit");

        verticalLayout->addWidget(txtEdit);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        btnRead->setText(QCoreApplication::translate("Dialog", "Read", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "Append", nullptr));
        btnWrite->setText(QCoreApplication::translate("Dialog", "Write", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Filename", nullptr));
        CMBfileFormat->setItemText(0, QCoreApplication::translate("Dialog", ".txt", nullptr));
        CMBfileFormat->setItemText(1, QString());

        label->setText(QCoreApplication::translate("Dialog", "Output message", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "Editor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
