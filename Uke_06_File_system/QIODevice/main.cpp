#include <QCoreApplication>
#include <QIODevice>
#include <QBuffer>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QBuffer buffer;

    /*
     * Vi kan se flaggene via: QIODevice::OpenModeFlag::
     */

    if(buffer.open(QIODevice::OpenModeFlag::ReadWrite)){
        qInfo() << "Device is open";

        QByteArray data("Hello wordl");

        for(int i=0; i < 10; i ++){
            buffer.write(data);
            buffer.write("\r\n"); // "\r\n" er samme som å press "Enter" når du skriver i en editor
        }

        /* Tenk på det som en bok. Vi er på side nr. 10 etter loppen
         * seek funksjonen hopper til angitt posisjon i filen
         */
        buffer.seek(0);

        qInfo() << buffer.readLine();
        qInfo() << buffer.readAll();
        qInfo() << "Closing the buffer";
        /*
         * Vi bør stenge den med engang vi åpner
         * Eller vil ikke andre programmer kunne opne filen
        */
        buffer.close();
    }
    else
    {
        qInfo() << "Could not open the device";
    }

    qInfo() << "Finished";
    return a.exec();
}
