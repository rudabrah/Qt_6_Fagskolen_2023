#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QMessageBox>
#include <QSettings>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QString orgName,QString appName, QWidget *parent = nullptr);
    Dialog() = default;
    ~Dialog();

private slots:

    void append();
    void on_btnSave_clicked();
    void on_btnVerify_clicked();
    void on_btnReset_clicked();

private:

    Ui::Dialog *ui;
    QString temp;
    QString code;

    //QSettings settings;
    QSettings settings;

    // Private function
    void info();
    void saveSettings();
    void loadSettings();

};
#endif // DIALOG_H
