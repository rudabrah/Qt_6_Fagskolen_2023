#ifndef HELPDIALOG_H
#define HELPDIALOG_H

#include <QDialog>
#include  <qlineedit.h>
#include   <qpushbutton.h>
#include <QVBoxLayout>
#include <QGroupBox>
#include <QLabel>

namespace Ui {
class helpDialog;
}

class helpDialog : public QDialog
{
    Q_OBJECT

public:
    explicit helpDialog(QWidget *parent = nullptr);
    ~helpDialog();

signals:
    void playingTicTacToe(const QString message);


public slots:
    void startTicTacToe();
    void testSignal();

private:
    Ui::helpDialog *ui;
    QWidget *widget;
    void setUpTestBorad();


};

#endif // HELPDIALOG_H
