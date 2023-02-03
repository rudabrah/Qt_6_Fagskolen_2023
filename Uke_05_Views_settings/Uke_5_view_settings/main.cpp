#include "dialog.h"
#include <QApplication>
#include <QSettings>
#include <QMessageBox>

/*
 * QStringView
 */


void show(QByteArrayView &view)
{

    /*
     * Selv om vi endrer verdi her i funksjonen så vil det ikke
     * påvirke den opprinnelige variabelen vi sender inn
     * i vårt tilfelle er det: QByteArray str("Dette er applikasjonsutvikling");
     * i main. "str" vil fortsatt har samme verdi.
*/
    view = "Endrer verdien lokalt i denne funksjonen";
    qInfo() << view;
    qInfo() << view.size();

    for(auto &ch: view){
        qInfo() << ch;
    }
}

void show(QStringView &view)
{
    qInfo() << view;
    qInfo() << view.size();

    for(auto &ch: view){
        qInfo() << ch;
    }
}



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;

    QByteArray str("Dette er applikasjonsutvikling");
    QByteArrayView view(str);

    show(view);

    QString data = "string view";
    QStringView dataView(data);

    show(dataView);

    w.show();
    return a.exec();
}
