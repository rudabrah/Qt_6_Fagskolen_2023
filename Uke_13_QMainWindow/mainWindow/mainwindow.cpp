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

}

void MainWindow::createActions()
{
    helpAct = new QAction(tr("#Help"), this);
    helpAct->setShortcut(QKeySequence::HelpContents);
    helpAct->setToolTip("Help senter");
    connect(helpAct, &QAction::triggered, this, &MainWindow::actionHelp);
}

void MainWindow::setupMenuBar()
{

}


void MainWindow::setupToolbar()
{

    QToolBar* toolbarLeft = new QToolBar(this);
    toolbarLeft->addAction("Save", this, SLOT(save()));
    addToolBar(Qt::ToolBarArea::LeftToolBarArea, toolbarLeft);

    QToolBar* toolbar = addToolBar("secound toolbar");

    toolbar->addAction("New", this, SLOT(actionNew()));
    toolbar->addAction("Open", this, SLOT(actionOpen()));
    toolbar->addAction("Save", this, SLOT(actionSave()));
    toolbar->addSeparator();
    toolbar->addAction("Exit", this, SLOT(actionExit()));

}

void MainWindow::setupMenu()
{



    auto menuFile = menuBar()->addMenu(tr("&File"));
    auto menuEdit = menuBar()->addMenu(tr("&Edit"));

    menuFile->addAction("New", QKeySequence::New, this, SLOT(actionNew()));
    menuFile->addAction("Open", QKeySequence::Open, this,SLOT(actionOpen()));
    menuFile->addAction("Save", QKeySequence::Save, this, SLOT(actionSave()));

    menuFile->addSeparator();
    menuFile->addAction("Exit", QKeySequence::Quit, this, SLOT(actionExit()));

    // Menu edit actions
    menuEdit->addAction("Select All", QKeySequence::SelectAll, this, [&]{ui->plainTextEdit->selectAll();});
    menuEdit->addAction("Copy", QKeySequence::Copy, this, [&](){ui->plainTextEdit->copy();});
    menuEdit->addAction("Cut", QKeySequence::Cut, this, [&]{ui->plainTextEdit->cut();});
    menuEdit->addAction("Paste", QKeySequence::Paste, this, [&]{ui->plainTextEdit->paste();});

    // Legger til nye menyer, vanskelig å finne de senere å legge til Actios
    QList menus = {"Build", "Debug", "Tools", "Window", "Help"};
    for(auto menu: menus){
        ui->menubar->addMenu(menu);
    }
}

void MainWindow::init()
{
    setupToolbar();
    setupMenu();
}

