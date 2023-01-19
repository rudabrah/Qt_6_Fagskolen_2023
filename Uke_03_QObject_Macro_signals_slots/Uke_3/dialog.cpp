#include "dialog.h"
#include "./ui_dialog.h"


Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    qInfo() << "Constructed";
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    qInfo() << "Destructed";
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    qInfo() << "clicked";
    // Lager en messageBox
    QMessageBox::information(this, "Informasjon", "Du trykket");

}

