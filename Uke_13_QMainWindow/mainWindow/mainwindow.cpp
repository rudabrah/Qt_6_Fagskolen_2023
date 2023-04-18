#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   this->setCentralWidget(ui->plainTextEdit);
    init();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::actionNew()
{
    /*
     * Vi må sette filname til "" slik at vi ikke skriver over filen som var der fra før
     * når vi lagrer det.
    */
    _filename = "";
    ui->plainTextEdit->clear();
    ui->statusbar->showMessage("making new file");
}

void MainWindow::actionOpen()
{
    QString path = QFileDialog::getOpenFileName(this, "Open a file");
    QFile file(path);

    if(!file.open(QIODevice::ReadOnly)){
        QMessageBox::critical(this, "Error", file.errorString());
        return;
    }
    QTextStream stream(&file);
    ui->plainTextEdit->setPlainText(stream.readAll());
    file.close();

    ui->statusbar->showMessage(path);
    _filename = path;

}

void MainWindow::actionSave()
{
    /* getSaveFileName åpner en "modal" dialog med dette hovedvinduet som "parent"
     * Det vil si at vi kun kan bruke dialogen som åpnes
     */

    QString path = _filename;

    if(_filename.isEmpty())
    {
        path = QFileDialog::getSaveFileName(this, "Save file");
    }

    QFile file(path);

    if(!file.open(QIODevice::WriteOnly)){
        QMessageBox::critical(this, "Error", file.errorString());
        return;
    }

    QTextStream stream(&file);
    stream << ui->plainTextEdit->toPlainText();
    file.close();

    ui->statusbar->showMessage(path);
    _filename = path;

}

void MainWindow::actionSaveAs()
{
    qInfo() << "Save as action";
}

void MainWindow::actionExit()
{
    QMessageBox msgBox;
    msgBox.setWindowTitle("Modified");
    msgBox.setText("The document has been modified.");
    msgBox.setInformativeText("Do you want to save your changes?");
    msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Save);

    int userAction = msgBox.exec();

    switch (userAction) {
    case QMessageBox::Save:
        actionSave();
        close();
        break;
    case QMessageBox::Cancel:
        break;
    case QMessageBox::Discard:
        this->close();
        break;
    default:
        break;
    }
    //QIntegerForSize

}

void MainWindow::actionHelp()
{
    helpDialog *help_Dialog = new helpDialog(this);
    connect(help_Dialog, &helpDialog::playingTicTacToe,this, &MainWindow::handleTicTacToeSignal);

    help_Dialog->exec();

    delete help_Dialog;
}

void MainWindow::actionShowLeftBarSide()
{

}

void MainWindow::actionShowRightBarSide()
{

}

void MainWindow::handleTicTacToeSignal(const QString message)
{
    ui->statusbar->showMessage(message);
}

void MainWindow::createActions()
{

    showLeftBarSideAct = new QAction(tr("&Show left sidebar"), this);
    showLeftBarSideAct->setShortcut(Qt::CTRL | Qt::Key_0);
    showLeftBarSideAct->setIcon(QIcon(":/menu_icons/images/LeftBarSide.png"));
    connect(showLeftBarSideAct, &QAction::triggered, this, &MainWindow::actionShowLeftBarSide);

    // right barside
    showRightBarSideAct = new QAction(tr("&Show right sidebar"), this);
    showRightBarSideAct->setShortcut(Qt::CTRL | Qt::SHIFT | Qt::Key_0);
    showRightBarSideAct->setIcon(QIcon(":/menu_icons/images/RightBarSide.png"));
    connect(showRightBarSideAct, &QAction::triggered, this, &MainWindow::actionShowRightBarSide);

    // Help act
    helpAct = new QAction(tr("&Help"), this);
    helpAct->setShortcut(QKeySequence::HelpContents);
    helpAct->setStatusTip("Help senter");
    connect(helpAct, &QAction::triggered, this, &MainWindow::actionHelp);
}


void MainWindow::setupToolbar()
{
    QToolBar* toolBarTop = addToolBar("secound toolbar");

    toolBarTop->addAction("New", this, SLOT(actionNew()));
    toolBarTop->addAction("Open", this, SLOT(actionOpen()));
    toolBarTop->addAction("Save", this, SLOT(actionSave()));
    toolBarTop->addSeparator();
    toolBarTop->addAction("Exit", this, SLOT(actionExit()));
    toolBarTop->addSeparator();
    toolBarTop->setMovable(false);

    // These actions is defines differently from the ones above
    toolBarTop->addAction(helpAct);

}

void MainWindow::setupMenu()
{
    auto menuFile = menuBar()->addMenu(tr("&File"));
    auto menuEdit = menuBar()->addMenu(tr("&Edit"));
    auto menuView = menuBar()->addMenu(tr("&View"));
    auto menuBuild = menuBar()->addMenu(tr("&Build"));
    auto menuDebug = menuBar()->addMenu(tr("&Debug"));
    auto menuTools = menuBar()->addMenu(tr("&Tools"));
    auto menuWindow = menuBar()->addMenu(tr("&Window"));
    auto menuHelp = menuBar()->addMenu(tr("&Help"));


    menuFile->addAction("New", QKeySequence::New, this, SLOT(actionNew()));
    menuFile->addAction("Open", QKeySequence::Open, this,SLOT(actionOpen()));
    menuFile->addAction("Save", QKeySequence::Save, this, SLOT(actionSave()));

    menuFile->addSeparator();
    menuFile->addAction("Exit", QKeySequence::Quit, this, SLOT(actionExit()));

    // Menu edit actions
    menuEdit->addAction("Select All", QKeySequence::SelectAll, this, [&](){ui->plainTextEdit->selectAll();});
    menuEdit->addAction("Copy", QKeySequence::Copy, this, [&](){ ui->plainTextEdit->copy(); });
    menuEdit->addAction("Cut", QKeySequence::Cut, this, [&](){ui->plainTextEdit->cut();});
    menuEdit->addAction("Paste", QKeySequence::Paste, this, [&](){ui->plainTextEdit->paste();});

    // View
    menuView->addAction(showLeftBarSideAct);
    menuView->addAction(showRightBarSideAct);

    // Menu helo action
    menuHelp->addAction(helpAct);

    menuWindow->addAction(helpAct);

}

void MainWindow::init()
{
    createActions();
    setupToolbar();
    setupMenu();
}

