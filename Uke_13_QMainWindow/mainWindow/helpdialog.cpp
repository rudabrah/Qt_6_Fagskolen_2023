#include "helpdialog.h"
#include "ui_helpdialog.h"

helpDialog::helpDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::helpDialog)
{
    ui->setupUi(this);


    QPushButton *pushButton = new QPushButton("Testing", this);
    pushButton->setGeometry(100,10,100,20);

}

helpDialog::~helpDialog()
{
    delete ui;
}
