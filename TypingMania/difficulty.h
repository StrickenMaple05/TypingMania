#ifndef DIFFICULTY_H
#define DIFFICULTY_H

#include <QDialog>
#include "mainwidget.h"

namespace Ui {
class Difficulty;
}

class Difficulty : public QDialog
{
    Q_OBJECT

public:
    explicit Difficulty(MainWidget *parent = nullptr);
    ~Difficulty();
    MainWidget *parentWidget;


private slots:
    void okay_clicked();
    void on_slider_valueChanged(int value);

private:
    Ui::Difficulty *ui;
};



#endif // DIFFICULTY_H
