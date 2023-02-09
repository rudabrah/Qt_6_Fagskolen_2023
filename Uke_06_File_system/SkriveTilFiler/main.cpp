#include <QCoreApplication>
#include <QFile>
#include <QDateTime>
#include <QDir>

void skriveTilFilFunksjon(){

    /* Lagrer filen i prosjektmappen siden vi ikke har definert hvor det skal lagres*/
    QString filename = "fagskolen_i_viken.txt";

    QFile file;
    QDir::setCurrent("C:/Users/Shahin Ostadahmadi/OneDrive - USN/Skrivebord");
    file.setFileName(filename);
    QDir::setCurrent("/home");
    if (file.open(QIODevice::Append)){

        QString now = QDateTime::currentDateTime().toString();
        QByteArray data;
        data.append(now.toLocal8Bit());
        data.append(" _ ");
        data.append("Hei alle studenter!");
        data.append("\r\n");

        qInfo() << file.write(data);
        /* close() kallser flush() automatisk.
         * flush, sletter alle bufferet data til filen.
         */
        file.close();
    }
    else {
        qInfo() << file.errorString();
    }
}
void leseFiler(){

    QString filename = "test.txt";
    QFile file(filename);

    if(file.exists()){
        qInfo() << "Does not exist, making the file";
        if(file.open(QIODevice::WriteOnly)){

            file.write("This is a test. Testing a file");
            file.write("\r\n");
            file.write("THIS IS MIDDLE OF THE TEXT");
            file.write(QDateTime::currentDateTime().toString().toLocal8Bit());
            file.close();
        }
        else {
            qInfo() << file.errorString();
        }
    }

    if(file.open(QIODevice::ReadOnly))
    {
        // Leser alt
        qInfo() << "Reading the file:\r\n";
        qInfo() << file.readAll();
        file.close();
    }
    else {
        qInfo() << file.errorString();
    }


}

void leseLinjer(QFile file){

    if(!file.isReadable()) return;
    file.seek(0); // Her kan vi bestemme hvilket tegn vi skal starte fra

    /*
     * Her leser vi helt til enden av filen
 */

    while(!file.atEnd()){
        qInfo() << file.readLine();
    }
}

void readChunks(QFile &file, unsigned int amount)
{
    if(!file.isReadable()) return;
    file.seek(0);
    while(!file.atEnd()){

        /*
         * Leser "amount" antall tegn om gangen
*/
        qInfo() << file.read(amount);
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    leseFiler();
    QString filename = "test.txt";
    QFile file(filename);

    if(file.open(QIODevice::ReadOnly)){

        file.readAll();
        qInfo() << "--------------------------------------------";
        readChunks(file, 1);
        qInfo() << "--------------------------------------------";
        readChunks(file, 2);
        file.close();
    }
    else {
        qInfo() << file.errorString();
    }

    return a.exec();
}
