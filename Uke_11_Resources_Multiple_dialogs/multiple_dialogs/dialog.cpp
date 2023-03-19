#include "dialog.h"
#include "./ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    QDialog::setObjectName("Dialog" + QString::number(titleName++));

    connect(ui->btnWithParent, &QPushButton::clicked, this, &Dialog::btnWithParent);
    connect(ui->btnNoParent, &QPushButton::clicked, this, &Dialog::btnNoParent);
    connect(ui->btnChildren, &QPushButton::clicked, this, &Dialog::getChildren);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::btnWithParent()
{
   // dialog 2 har "denne" dialogen som "parent"
   QDialog *dialog_2_ptr = new Dialog_2(this);

   dialog_2_ptr->setObjectName("Dialog" + QString::number(titleName++));

   dialog_2_ptr->exec();
   delete dialog_2_ptr;
}

void Dialog::btnNoParent()
{
    // Denne dialogen har ingen "parent"
    QDialog *dialog_2_ptr = new Dialog_2();
    dialog_2_ptr->setObjectName("Dialog" + QString::number(titleName++));
    dialog_2_ptr->show();
}

void Dialog::getChildren()
{
    qInfo() << this->children();
}

