#include "fontstyling.h"
#include "ui_fontstyling.h"

fontStyling::fontStyling(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fontStyling)
{
    ui->setupUi(this);
    connect(ui->fontComboBox, &QFontComboBox::currentFontChanged, this, &fontStyling::updateFont);
    connect(ui->cmbSize, &QComboBox::currentIndexChanged, this, &fontStyling::updateFontSize);

    for (int i=0; i < 99; i++){
        ui->cmbSize->addItem(QString::number(i));
    }
}

fontStyling::~fontStyling()
{
    delete ui;
}

void fontStyling::init(QFont &font, Qt::Alignment &alignment, QString &txt)
{
    _font = font;
    _font.setPixelSize(font.pointSize());
    _alignment = alignment;

    ui->fontComboBox->setCurrentFont(_font);
    qInfo() << _font.pixelSize();
    ui->cmbSize->setCurrentIndex(_font.pixelSize());
    ui->textEdit->setText(txt);
    ui->textEdit->setAlignment(_alignment);
    ui->textEdit->setReadOnly(true);

}

QFont fontStyling::getFont()
{
    return _font;
}
void fontStyling::updateFont(const QFont &font)
{
    auto size = _font.pixelSize();
    auto temp_font = font;
    temp_font.setPixelSize(size);
    ui->textEdit->setFont(temp_font);
}

void fontStyling::updateFontSize(int index)
{
    auto temp_font = ui->textEdit->font();
    temp_font.setPixelSize(index);
    ui->textEdit->setFont(temp_font);
}


void fontStyling::on_buttonBox_accepted()
{
    _font = ui->textEdit->font();
    accept();
}


void fontStyling::on_buttonBox_rejected()
{
    reject();
}


















