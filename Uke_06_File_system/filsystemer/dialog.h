#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QIODevice>
#include <QFile>
#include <QDateTime>
#include <QDir>
#include <QTextStream>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private:
    Ui::Dialog *ui;

    void read();
    void write();
    void append();
};
#endif // DIALOG_H
