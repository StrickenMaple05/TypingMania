#include "color.h"
#include "ui_color.h"

#define colorStyle(red, green, blue) \
{\
    colorStr = "background: rgb(" + QString::number(red) +\
                          ',' + QString::number(green) +\
                          ',' + QString::number(blue) + ");";\
}

QString colorStr;
MainWidget *mainWidget;
int r,g,b;

color::color(MainWidget *parent, int red, int green, int blue) :
    QDialog(parent),
    ui(new Ui::color)
{
    mainWidget = parent;
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint | Qt::Popup);
    setGeometry(1138, 382, 400, 400);
    saveGeometry();

    ui->redSlider->setValue(red);
    colorStyle(red,0,0);
    ui->red->setStyleSheet(colorStr);
    ui->greenSlider->setValue(green);
    colorStyle(0,green,0);
    ui->green->setStyleSheet(colorStr);
    ui->blueSlider->setValue(blue);
    colorStyle(0,0,blue);
    ui->blue->setStyleSheet(colorStr);
    colorStyle(red,green,blue);
    ui->finishedColor->setStyleSheet(colorStr);
    ui->redValue->setText(QString::number(r));
    ui->greenValue->setText(QString::number(g));
    ui->blueValue->setText(QString::number(b));
}

void color::on_redSlider_valueChanged(int value)
{
    r = value;
    colorStyle(r,0,0);
    ui->red->setStyleSheet(colorStr);
    ui->red->repaint();
    colorStyle(r,g,b);
    ui->finishedColor->setStyleSheet(colorStr);
    ui->finishedColor->repaint();
    ui->redValue->setText(QString::number(value));
    mainWidget->changeColor(QColor(r,g,b));
}

void color::on_greenSlider_valueChanged(int value)
{
    g = value;
    colorStyle(0,g,0);
    ui->green->setStyleSheet(colorStr);
    ui->green->repaint();
    colorStyle(r,g,b);
    ui->finishedColor->setStyleSheet(colorStr);
    ui->finishedColor->repaint();
    ui->greenValue->setText(QString::number(value));
    mainWidget->changeColor(QColor(r,g,b));
}

void color::on_blueSlider_valueChanged(int value)
{
    b = value;
    colorStyle(0,0,b);
    ui->blue->setStyleSheet(colorStr);
    ui->blue->repaint();
    colorStyle(r,g,b);
    ui->finishedColor->setStyleSheet(colorStr);
    ui->finishedColor->repaint();
    ui->blueValue->setText(QString::number(value));
    mainWidget->changeColor(QColor(r,g,b));
}

color::~color()
{
    delete ui;
}


void color::on_redValue_textEdited(const QString &arg1)
{
    for (int i = 0; i < arg1.length(); ++i)
        if (!(arg1[i] >= '0' && arg1[i] <= '9'))
        {
            ui->redValue->undo(); return;
        }
    int value = ui->redValue->text().toInt();
    if (value > 255) value = 255, ui->redValue->setText("255");
    ui->redSlider->setValue(value), ui->redSlider->repaint();
    on_redSlider_valueChanged(value);
}

void color::on_greenValue_textEdited(const QString &arg1)
{
    for (int i = 0; i < arg1.length(); ++i)
        if (!(arg1[i] >= '0' && arg1[i] <= '9'))
        {
            ui->greenValue->undo(); return;
        }
    int value = ui->greenValue->text().toInt();
    if (value > 255) value = 255, ui->greenValue->setText("255");
    ui->greenSlider->setValue(value), ui->greenSlider->repaint();
    on_greenSlider_valueChanged(value);
}

void color::on_blueValue_textEdited(const QString &arg1)
{
    for (int i = 0; i < arg1.length(); ++i)
        if (!(arg1[i] >= '0' && arg1[i] <= '9'))
        {
            ui->blueValue->undo(); return;
        }
    int value = ui->blueValue->text().toInt();
    if (value > 255) value = 255, ui->blueValue->setText("255");
    ui->blueSlider->setValue(value), ui->blueSlider->repaint();
    on_blueSlider_valueChanged(value);
}
