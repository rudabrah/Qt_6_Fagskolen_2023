#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QToolBar>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void actionOpen();
    void actionShowLeftBarside();

signals:
     void leftBarsideActive(bool checked);

private:
    Ui::MainWindow *ui;

    QAction *showLeftBarSide;

    void setupMenu();
    void setupActions();
    void setUpTopToolbar();
    void setupToolbar();

};
#endif // MAINWINDOW_H
