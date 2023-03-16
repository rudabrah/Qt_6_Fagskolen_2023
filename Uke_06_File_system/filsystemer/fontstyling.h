#ifndef FONTSTYLING_H
#define FONTSTYLING_H

#include <QDialog>

namespace Ui {
class fontStyling;
}

class fontStyling : public QDialog
{
    Q_OBJECT

public:
    explicit fontStyling(QWidget *parent = nullptr);
    ~fontStyling();
    void init(QFont &font, Qt::Alignment &alignment, QString &txt);

private slots:
    void updateFont(const QFont &font);
    void updateFontSize(int index);

private:
    Ui::fontStyling *ui;
    QFont _font;
    Qt::Alignment _alignment;



};

#endif // FONTSTYLING_H
