#include "dialog.h"
#include "./ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}
//Verdier for koder. Bruker vectorer for å sammenlikne
int kodelengde = 3;
QVector <int> tall;
QVector <int> tall2;
QString Kode1{};
QString Kode2{};

void verify(QVector <int> a, QString b)
{

}

bool isverified = false;



//Lager en funksjon som tar seg av å fylle koder osv.
void Kodefyller(int a, QVector <int> b, QVector <int> c)
{
    if(isverified == false)
    {
        b.push_back(a);
        std::cout << "Added " << a << std::endl;
    }
    else
    {
        c.push_back(a);
        std::cout << "Added " << a << " to verify" << std::endl;
    }
}


//Dette er veldig kjip kode. Mye repetisjon osv, så om jeg skal optimalisere eller rydde opp vil jeg se om jeg kan lage en
//funksjon som leser hva som står på knappen, og adder dette.
void Dialog::on_pushButton_2_clicked()
{
    Kodefyller(1, tall, tall2);
}


void Dialog::on_pushButton_4_clicked()
{
    Kodefyller(2, tall, tall2);
}


void Dialog::on_pushButton_5_clicked()
{
    Kodefyller(3, tall, tall2);
}


void Dialog::on_pushButton_clicked()
{
    Kodefyller(4, tall, tall2);
}


void Dialog::on_pushButton_6_clicked()
{
    Kodefyller(5, tall, tall2);
}


void Dialog::on_pushButton_7_clicked()
{
    Kodefyller(6, tall, tall2);
}


void Dialog::on_pushButton_3_clicked()
{
    Kodefyller(7, tall, tall2);
}


void Dialog::on_pushButton_8_clicked()
{
    Kodefyller(8, tall, tall2);
}


void Dialog::on_pushButton_9_clicked()
{
    Kodefyller(9, tall, tall2);
}


void Dialog::on_pushButton_10_clicked()
{
    Kodefyller(0, tall, tall2);
}


void Dialog::on_VerifyButton_clicked()
{

}

