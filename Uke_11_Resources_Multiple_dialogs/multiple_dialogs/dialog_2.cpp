#include "dialog_2.h"
#include "ui_dialog_2.h"

Dialog_2::Dialog_2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_2)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &Dialog_2::getChildren);
}

Dialog_2::~Dialog_2()
{
    delete ui;
}

void Dialog_2::getChildren()
{
   if(auto par = this->parent()){
       qInfo() << par->objectName();
   }
}
