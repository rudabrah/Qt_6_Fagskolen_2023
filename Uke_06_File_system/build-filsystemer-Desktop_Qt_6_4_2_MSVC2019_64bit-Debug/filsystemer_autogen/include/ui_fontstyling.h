/********************************************************************************
** Form generated from reading UI file 'fontstyling.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FONTSTYLING_H
#define UI_FONTSTYLING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_fontStyling
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFontComboBox *fontComboBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QComboBox *cmbSize;
    QGroupBox *grbAlign;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QRadioButton *alignLeft;
    QRadioButton *alignMid;
    QRadioButton *alignRight;
    QLabel *label_3;
    QTextEdit *textEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *fontStyling)
    {
        if (fontStyling->objectName().isEmpty())
            fontStyling->setObjectName("fontStyling");
        fontStyling->resize(702, 429);
        verticalLayout_3 = new QVBoxLayout(fontStyling);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(fontStyling);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        fontComboBox = new QFontComboBox(fontStyling);
        fontComboBox->setObjectName("fontComboBox");

        verticalLayout->addWidget(fontComboBox);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(fontStyling);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        cmbSize = new QComboBox(fontStyling);
        cmbSize->setObjectName("cmbSize");

        verticalLayout_2->addWidget(cmbSize);


        horizontalLayout_3->addLayout(verticalLayout_2);

        grbAlign = new QGroupBox(fontStyling);
        grbAlign->setObjectName("grbAlign");
        horizontalLayout_2 = new QHBoxLayout(grbAlign);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        alignLeft = new QRadioButton(grbAlign);
        alignLeft->setObjectName("alignLeft");

        horizontalLayout->addWidget(alignLeft);

        alignMid = new QRadioButton(grbAlign);
        alignMid->setObjectName("alignMid");

        horizontalLayout->addWidget(alignMid);

        alignRight = new QRadioButton(grbAlign);
        alignRight->setObjectName("alignRight");

        horizontalLayout->addWidget(alignRight);


        horizontalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_3->addWidget(grbAlign);


        verticalLayout_3->addLayout(horizontalLayout_3);

        label_3 = new QLabel(fontStyling);
        label_3->setObjectName("label_3");

        verticalLayout_3->addWidget(label_3);

        textEdit = new QTextEdit(fontStyling);
        textEdit->setObjectName("textEdit");

        verticalLayout_3->addWidget(textEdit);

        buttonBox = new QDialogButtonBox(fontStyling);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(fontStyling);

        QMetaObject::connectSlotsByName(fontStyling);
    } // setupUi

    void retranslateUi(QDialog *fontStyling)
    {
        fontStyling->setWindowTitle(QCoreApplication::translate("fontStyling", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("fontStyling", "Font", nullptr));
        label_2->setText(QCoreApplication::translate("fontStyling", "Size", nullptr));
        grbAlign->setTitle(QCoreApplication::translate("fontStyling", "Align", nullptr));
        alignLeft->setText(QCoreApplication::translate("fontStyling", "Left", nullptr));
        alignMid->setText(QCoreApplication::translate("fontStyling", "Mid", nullptr));
        alignRight->setText(QCoreApplication::translate("fontStyling", "Right", nullptr));
        label_3->setText(QCoreApplication::translate("fontStyling", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fontStyling: public Ui_fontStyling {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FONTSTYLING_H
