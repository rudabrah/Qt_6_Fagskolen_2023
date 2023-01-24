#include "dialog.h"
#include "./ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->btnCheckable->setCheckable(true);
    ui->btnDefault->setDefault(true);
    ui->btnAutoRepeat->setAutoRepeat(true);
    qInfo() << ui->btnCheckable->text() << "is checkable?" << ui->btnCheckable->isCheckable();
}

Dialog::~Dialog()
{
    delete ui;

}

void Dialog::on_btnNormal_clicked()
{
      qInfo() << "Clicked";
}

void Dialog::on_btnCheckable_clicked()
{
    qInfo() << "Checked: " << ui->btnCheckable->isChecked();
}

void Dialog::on_btnAutoRepeat_clicked()
{
    qInfo() << "Clicked: " << QDateTime::currentDateTime();
}

void Dialog::on_btnChecked_clicked()
{
    QString message;
   if(ui->btnCheckable->isChecked()){
       message = "The button is checked";
   }
   else{
       message = "The message is not checked";
   }

   QMessageBox::critical(this, "Checked", message);
}

void Dialog::on_btnToggle_clicked()
{

}

void Dialog::on_btnToggleAuto_clicked()
{

}
void Dialog::on_btnDefault_clicked()
{

}


void Dialog::on_btnOk_clicked()
{
    QString valgfag;
    QObjectList box = this->children();
    qInfo() << box;
    qInfo() << "Her kommer bare Boxer: ";
    foreach (QObject *obj, box)
    {
        if(obj->inherits("QCheckBox"))
           {
            QCheckBox* box = qobject_cast<QCheckBox*>(obj);
            if(box && box->isChecked())
            {
                // qInfo() << box->text(); // Skriver ut box-navnene
                valgfag += box->text() + "\r\n";
            }
        }
    }
    if(valgfag.isEmpty()){
        QMessageBox::critical(this, "SIKKER????", "Du har ikke valgt nok valgfag!");
    }
    else {
        QMessageBox::information(this,"Valgfag","Du har valgt følgende valgfag\r\n" + valgfag);
    }

}

void Dialog::on_btnOkey_clicked()
{
    QString campus = getBoxNames(ui->grpCampus);
    QString valgfag = getBoxNames(ui->grpValgfag);

    if(campus.isEmpty() || valgfag.isEmpty()){
        QMessageBox::critical(this, "Ikke valgt", "Du må velge en campus OG et valgfag.");
    }
    else
    {
        QString value = "Du har valgt campus: " + campus + "\t\r\n og valgfag:" + valgfag;
        QMessageBox::information(this, "Campus og valgfag",value);
    }

}

QString Dialog::getBoxNames(QObject *obj)
{
    QString boxValue;
    QList<QRadioButton*> radioButtonList = obj->findChildren<QRadioButton*>(QString(), Qt::FindDirectChildrenOnly);

    foreach (QRadioButton* rdo, radioButtonList) {
        if(rdo->isChecked()){
            boxValue = rdo->text();
            break;
        }
    }
    return boxValue;
}

