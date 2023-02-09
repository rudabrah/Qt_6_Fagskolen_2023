#include "dialog.h"
#include "./ui_dialog.h"

Dialog::Dialog(QString orgName,QString appName, QWidget *parent)
    : QDialog(parent), ui(new Ui::Dialog)
    , settings(orgName, appName)
{
    ui->setupUi(this);

    // Settings
    info();
    loadSettings();


    ui->lblNotify->setText("Typed: " + temp);
    // This is how we connect, when we want to have full controll
    connect(ui->btnOne, &QPushButton::clicked, this, &Dialog::append);
    connect(ui->btnTwo, &QPushButton::clicked, this, &Dialog::append);
    connect(ui->btnThree, &QPushButton::clicked, this, &Dialog::append);
    connect(ui->btnFour, &QPushButton::clicked, this, &Dialog::append);
    connect(ui->btnFive, &QPushButton::clicked, this, &Dialog::append);
    connect(ui->btnSix, &QPushButton::clicked, this, &Dialog::append);
    connect(ui->btnSeven, &QPushButton::clicked, this, &Dialog::append);
    connect(ui->btnEight, &QPushButton::clicked, this, &Dialog::append);
    connect(ui->btnNine, &QPushButton::clicked, this, &Dialog::append);
    connect(ui->btnZero, &QPushButton::clicked, this, &Dialog::append);
}

Dialog::~Dialog()
{
    saveSettings();
    delete ui;
}

void Dialog::info()
{
        qInfo() << "File: " << settings.fileName ();
        qInfo() << "Organization name: " << settings.organizationName();
        qInfo() << "Application name: " << settings.applicationName();
}

void Dialog::saveSettings()
{
    settings.setValue("Code", code);
    settings.setValue("temp", temp);

    qInfo() << "Settings status" << settings.status();
}

void Dialog::loadSettings()
{
    if(settings.contains("Code") && settings.contains(("temp"))){
        code = settings.value("Code").toString();
        temp = settings.value("temp").toString();
    }
    else {
        qInfo() << "Failed to set setttings";
        QMessageBox::warning(this, "Settigs failed", "Could not set settings");
    }
}

void Dialog::append()
{
    // The sender is allways is the one who sends the signal
    QPushButton* btn = qobject_cast<QPushButton*>(sender());
    if(!btn) return;
    temp.append(btn->text());
    ui->lblNotify->setText("Typed: " + temp);

    if(code.isEmpty())
    {
        ui->btnSave->setEnabled(true);
        ui->btnVerify->setEnabled(false);
        ui->btnReset->setEnabled(false);
    }
    else {
        ui->btnSave->setEnabled(false);
        ui->btnVerify->setEnabled(true);
        ui->btnReset->setEnabled(true);
    }
}


void Dialog::on_btnSave_clicked()
{
    code = temp;
    temp.clear();
    ui->btnReset->setEnabled(true);
    ui->btnSave->setEnabled(false);
    ui->btnVerify->setEnabled(true);
    ui->lblNotify->setText("Code saved, please re-enter the code and click verify");
    QMessageBox::information(this,"Saved", ui->lblNotify->text());
}


void Dialog::on_btnVerify_clicked()
{
    if(temp == code)
    {
        QMessageBox::information(this,"Code", "The code matches");
    }
    else
    {
        QMessageBox::information(this,"Code", "The code do not matches");
    }
    temp.clear();
    ui->lblNotify->setText("Enter the code and click verdify");
}

void Dialog::on_btnReset_clicked()
{
    QMessageBox::StandardButton message = QMessageBox::question(this,"Change code", "Are you sure?");
    qInfo() << message;

    if(message == QMessageBox::Yes){
        QString oldCode = code;
        code.clear();
        ui->lblNotify->setText("Please enter new code");
        ui->btnReset->setEnabled(false);
        ui->btnVerify->setEnabled(false);
    }
}




















