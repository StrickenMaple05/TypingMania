#include "difficulty.h"
#include "ui_difficulty.h"


Difficulty::Difficulty(MainWidget *parent) :
    QDialog(parent),
    ui(new Ui::Difficulty)
{
    parentWidget = parent;
    setWindowFlags(Qt::FramelessWindowHint | Qt::Popup);
    setModal(true);
    ui->setupUi(this);
    int value = parentWidget->difficulty;
    ui->slider->setValue(value);
    connect(ui->okay, SIGNAL(clicked()), SLOT(okay_clicked()));
}

void Difficulty::on_slider_valueChanged(int value)
{
    QString str;
    if (value == 1) str = "Easy";
    else if (value == 2) str = "Medium";
    else if (value == 3) str = "Hard";
    else if (value == 4) str = "Insane";
    else if (value == 5) str = "Suicidal";
    parentWidget->difficulty = value;
    ui->difficultyLabel->setText(str);
    parentWidget->ChangeDifficulty(value);
    QFile file("difficulty.txt");
    file.open(QIODevice::WriteOnly);
    file.write((QString("%1").arg(parentWidget->difficulty)).toUtf8());
    file.close();
}

void Difficulty::okay_clicked()
{
    parentWidget->Play();
    close();
}

Difficulty::~Difficulty()
{
    delete ui;
}

