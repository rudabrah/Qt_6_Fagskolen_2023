#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>
//#include <QAction>
#include "actions.h"

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
    void actionNew();
    void actionOpen();
    void actionSave();
    void actionSaveAs();
    void actionExit();
    void actionHelp();


private:
    Ui::MainWindow *ui;
    QString _filename{""};
    QAction *helpAct;

    void createActions();
    void setupMenuBar();
    void setupToolbar();
    void setupMenu();
    void init();

};
#endif // MAINWINDOW_H
