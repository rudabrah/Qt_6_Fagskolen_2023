#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setupActions();
    setupMenu();
    setupToolbar();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::actionOpen()
{
    QString filename = "default";
    statusBar()->showMessage("Opening new file...");

    // TODO - OPEN FILE implementasjon

}

void MainWindow::actionShowLeftBarside()
{
    QString checked = (showLeftBarSide->isChecked()) ? "Checked" : "Unchecked";
    statusBar()->showMessage("Left statusbar: "  + checked);

    emit leftBarsideActive(showLeftBarSide->isChecked());

}

void MainWindow::setupMenu()
{
    // Setter opp meny til mainwindow

    const auto menuFile = menuBar()->addMenu(tr("&File"));
    QMenu *menuEdit = menuBar()->addMenu(tr("&Edit"));
    auto menuView = menuBar()->addMenu(tr("&View"));
    auto menuHelp = menuBar()->addMenu(tr("&Help"));

    // setter opp "Actions"
    menuFile->addAction("New", QKeySequence::New, [&](){statusBar()->showMessage("Making new file...");});
    menuFile->addAction("Open", QKeySequence::Open, this, SLOT(actionOpen()) );


    // view
    menuView->addAction(showLeftBarSide);
}

void MainWindow::setupActions()
{
    showLeftBarSide = new QAction(tr("&Show lef barside"));
    showLeftBarSide->setCheckable(true);
    showLeftBarSide->setShortcut(Qt::CTRL | Qt::Key_0);
    connect(showLeftBarSide, &QAction::triggered, this, &MainWindow::actionShowLeftBarside);
}

void MainWindow::setUpTopToolbar()
{
    QToolBar *toolbar = addToolBar("Top toolbar");

    toolbar->addAction("New", QKeySequence::New, [&](){statusBar()->showMessage("Making new file");});
    toolbar->addAction("Open", QKeySequence::Open, this, SLOT(actionOpen()) );
    toolbar->addAction(showLeftBarSide);
}

void MainWindow::setupToolbar()
{
    // Setter opp verktøy linjer
    setUpTopToolbar();
}

