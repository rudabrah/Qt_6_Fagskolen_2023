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
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 77, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(0, 0, 115, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(0, 0, 96, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(0, 0, 38, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(0, 0, 51, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        QBrush brush7(QColor(0, 0, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush7);
        palette.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        QBrush brush8(QColor(85, 170, 255, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush8);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush9(QColor(98, 179, 255, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
        QBrush brush10(QColor(255, 255, 255, 127));
        brush10.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush7);
        QBrush brush11(QColor(240, 240, 240, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush);
        QBrush brush12(QColor(227, 227, 227, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        QBrush brush13(QColor(160, 160, 160, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush11);
        QBrush brush14(QColor(105, 105, 105, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush14);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush7);
        QBrush brush15(QColor(245, 245, 245, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        QBrush brush16(QColor(255, 255, 220, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush16);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
        QBrush brush17(QColor(0, 0, 0, 128));
        brush17.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush17);
#endif
        QBrush brush18(QColor(170, 0, 0, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush18);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush15);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush16);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush17);
#endif
        fontStyling->setPalette(palette);
        fontStyling->setAutoFillBackground(true);
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
