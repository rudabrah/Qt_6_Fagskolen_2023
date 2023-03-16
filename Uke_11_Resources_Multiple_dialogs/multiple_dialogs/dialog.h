#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "dialog_2.h"

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
    void btnWithParent();
    void btnNoParent();
    void getChildren();

private:
    Ui::Dialog *ui;
    int titleName{1000};
};
#endif // DIALOG_H
