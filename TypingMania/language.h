#ifndef LANGUAGE_H
#define LANGUAGE_H

#include <QDialog>
#include "mainwidget.h"

namespace Ui {
class Language;
}

class Language : public QDialog
{
    Q_OBJECT

public:
    explicit Language(MainWidget *parent = nullptr);
    ~Language();

private slots:
    void english_clicked();
    void russian_clicked();

private:
    Ui::Language *ui;

    MainWidget *parentWidget;
};

#endif // LANGUAGE_H
