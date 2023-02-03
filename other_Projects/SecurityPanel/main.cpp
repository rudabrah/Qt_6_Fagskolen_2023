#include "dialog.h"

#include <QApplication>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w("Fagskolen i viken", "Sikkerhetspanel");
    w.show();
    return a.exec();
}
