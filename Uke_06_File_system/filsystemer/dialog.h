#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QIODevice>
#include <QFile>
#include <QDateTime>
#include <QDir>
#include <QTextStream>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();
private slots:
    void read();
    void write();
    void append();
    void addFormat();

private:
    Ui::Dialog *ui;

    void cleanTextEdit();
    QString writeToFile(QFile& file, const QByteArray& data, QIODevice::OpenModeFlag flag);
};
#endif // DIALOG_H
