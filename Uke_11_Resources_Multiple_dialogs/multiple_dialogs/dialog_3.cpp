#include "dialog_3.h"
#include "ui_dialog_3.h"

Dialog_3::Dialog_3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_3)
{
    ui->setupUi(this);
}

Dialog_3::~Dialog_3()
{
    delete ui;
}
