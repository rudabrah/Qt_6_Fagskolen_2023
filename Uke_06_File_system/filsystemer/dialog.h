#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QIODevice>
#include <QFile>
#include <QDateTime>
#include <QDir>
#include <QTextStream>
#include <QMessageBox>
#include "fontstyling.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

signals:
    void userActed(const QObject *obj);

private slots:
    void read();
    void write();
    void append();
    void addFormat();
    void updateFont();
    void updateFont2(const QFont &font);
    void trackUserAction(const QObject *obj);

    void on_btnStyling_clicked();

private:
    Ui::Dialog *ui;

    void cleanTextEdit();
    QString writeToFile(QFile& file, const QByteArray& data, QIODevice::OpenModeFlag flag);
};
#endif // DIALOG_H
