#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QDebug>
#include <QDateTime>
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
    void on_btnNormal_clicked();

    void on_btnCheckable_clicked();

    void on_btnAutoRepeat_clicked();

    void on_btnChecked_clicked();

    void on_btnToggle_clicked();

    void on_btnToggleAuto_clicked();

    void on_btnDefault_clicked();


    void on_btnOk_clicked();

    void on_btnOkey_clicked();

private:
    Ui::Dialog *ui;
    QString getBoxNames(QObject *obj);
};
#endif // DIALOG_H
