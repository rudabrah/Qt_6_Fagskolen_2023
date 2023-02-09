#include "dialog.h"
#include "./ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    connect(ui->btnRead, &QPushButton::clicked, this, &Dialog::read);
    connect(ui->btnWrite, &QPushButton::clicked, this, &Dialog::write);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::read()
{
    QString filename = ui->LEFileName->text() + ui->CMBfileFormat->currentText();
    QFile file(filename);

    if(file.open(QIODevice::OpenModeFlag::ReadOnly))
    {
        ui->txtEdit->setText(file.readAll());
        ui->LEoutPut->setText("Successfull read");
        file.close();
    }
    else {
        ui->LEoutPut->setText(file.errorString());
    }

}

void Dialog::write()
{
    QString filename = ui->LEFileName->text() + ui->CMBfileFormat->currentText();
    QFile file(filename);

    // TODO 1
    if(!file.exists()){
        ui->LEoutPut->setText("File do not exist!");
        return;
    }

    if(file.open(QIODevice::WriteOnly)){
        // TODO 2


        file.close();
    }
    else {
        ui->LEoutPut->setText(file.errorString());
    }
}













