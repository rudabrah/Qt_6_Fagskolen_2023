#include "dialog.h"
#include "./ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    connect(ui->btnRead, &QPushButton::clicked, this, &Dialog::read);
    connect(ui->btnWrite, &QPushButton::clicked, this, &Dialog::write);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &Dialog::append);
    connect(ui->btnAddFormat, &QPushButton::clicked, this, &Dialog::addFormat);

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
        cleanTextEdit();
    }

}

void Dialog::write()
{
    QString filename = ui->LEFileName->text() + ui->CMBfileFormat->currentText();
    QFile file(filename);
    QString messageOutput{"Undefined"};
    QByteArray data;
    data.append(ui->txtEdit->toPlainText().toStdString());

    if(file.exists()){
        auto answer = QMessageBox::question(this, "Overriting the file", "Are you sure you want to overwrite the file?");

        switch (answer) {
        case QMessageBox::Yes :
            messageOutput = writeToFile(file, data, QIODevice::WriteOnly);
            break;
        case QMessageBox::No :
            messageOutput = "File not overwritten!";
            break;
        default:
            messageOutput = "Action not defined. File not overwritten!";
            break;
        }
    }
    else {
        messageOutput = writeToFile(file, data, QIODevice::WriteOnly);
    }

    ui->LEoutPut->setText(messageOutput + " - " + QDateTime::currentDateTime().toString());

    // set output LEoutPut
}

void Dialog::append()
{
    QString filename = ui->LEFileName->text() + ui->CMBfileFormat->currentText();
    QFile file(filename);
    QByteArray data;
    QString msg;
    data.append(ui->txtEdit->toPlainText().toStdString());

    if(file.exists()){
        msg = writeToFile(file, data, QIODevice::Append);
        qInfo() << QIODevice::Append;
    }
    else {
        auto answer = QMessageBox::question(this, "File does not exist!", "Do you want to create new file?");
        switch (answer) {
        case QMessageBox::Yes:
            write();
            break;
        case QMessageBox::No:
            msg = "File not created!";
        default:
            msg = "Action not defined. File not overwritten!";
            break;
        }
    }
    ui->LEoutPut->setText(msg);
}

void Dialog::cleanTextEdit()
{
    ui->txtEdit->clear();
}

void Dialog::addFormat()
{
    QComboBox* cmb = ui->CMBfileFormat;
    QString newformat = ui->LEFormat->text();

    /* Sjekker om det første bokstaven er et " . " og at formattypen
     * ikke inneholder mellomrom.
    */

    if(newformat.at(0) == '.' && !newformat.contains(" "))
    {
        bool exists = false;
        // TODO sjekke om formattypen finnes fra før for å unngå duplikater


        for(int i= 0; i < cmb->count(); i ++){
            if(cmb->itemText(i).compare(newformat, Qt::CaseInsensitive) == 0)
            {

                exists = true;
            }
        }
        if(!exists){
            cmb->addItem(newformat);
            cmb->setCurrentIndex(cmb->count() - 1);
            qInfo() << ui->CMBfileFormat->count();
            ui->LEoutPut->setText("New format added: " + newformat);
            ui->listWidget->addItem(newformat);
        }
    }
    else{
        QMessageBox::critical(this, "Wrong format!", "Contains special charachter!");
    }
}

QString Dialog::writeToFile(QFile& file, const QByteArray& data, QIODevice::OpenModeFlag flag = QIODevice::WriteOnly)
{

    if(file.open(flag)){

        /* Siden file.write(#QByteArray) tar QByteArray som parameter kan vi ikke skrive en QString direkte til filen. */
        /* Metode 1 for å skrive til filen: */

        // QTextStream f(&file);
        // f << ui->txtEdit->toPlainText();

        /* Metode 2: Bruke QByteArray */
        file.write(data);
        file.close();
        return "Successfull write!";
    }
    else {
        return file.errorString();
    }

}













