#include "helpdialog.h"
#include "ui_helpdialog.h"

helpDialog::helpDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::helpDialog)
{
    ui->setupUi(this);
    widget = new QWidget(this);

    QPushButton *playTicTacTieButton = new QPushButton("Play tic-tac toe", this);

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(playTicTacTieButton);

    this->setLayout(layout);
    connect(playTicTacTieButton, &QPushButton::clicked,this, &helpDialog::startTicTacToe);
    connect(this, &helpDialog::playingTicTacToe, this, &helpDialog::testSignal);
}

helpDialog::~helpDialog()
{
    delete ui;
}

void helpDialog::startTicTacToe()
{
    emit playingTicTacToe("Playing tic tac toe!");
    // Create a QGroupBox

    // Start the game
    // TODO, set up a simple game
    setUpTestBorad();
}

void helpDialog::testSignal()
{
    { qInfo() << "Plaing tic tac toe";}
}

void helpDialog::setUpTestBorad()
{
    for (size_t row = 0; row < 4; row++){
        for (size_t col = 0; col < 4; col++){
            QPushButton *btn= new QPushButton();
            btn->setProperty("cell", true);
            ui->gridBoard->addWidget(btn, static_cast<int>(row),
                                     static_cast<int>(col),
                                     1,1);

        }

    }
    adjustSize();
}
