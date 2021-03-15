#ifndef COLOR_H
#define COLOR_H

#include <QDialog>
#include "mainwidget.h"

namespace Ui {
class color;
}

class color : public QDialog
{
    Q_OBJECT

public:
    explicit color(MainWidget *parent = nullptr, int red = 40, int green = 40, int blue = 40);
    ~color();

private slots:

    void on_redSlider_valueChanged(int value);
    void on_greenSlider_valueChanged(int value);
    void on_blueSlider_valueChanged(int value);

    void on_redValue_textEdited(const QString &arg1);

    void on_greenValue_textEdited(const QString &arg1);

    void on_blueValue_textEdited(const QString &arg1);

private:
    Ui::color *ui;
};

#endif // COLOR_H
