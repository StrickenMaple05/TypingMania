#include "language.h"
#include "ui_language.h"
#include <QTextStream>

Language::Language(MainWidget *parent) :
    QDialog(parent),
    ui(new Ui::Language)
{
    parentWidget = parent;
    setWindowFlags(Qt::FramelessWindowHint | Qt::Popup);
    ui->setupUi(this);
    connect(ui->english, SIGNAL(clicked()), SLOT(english_clicked()));
    connect(ui->russian, SIGNAL(clicked()), SLOT(russian_clicked()));
}

void Language::english_clicked()
{
    parentWidget->WordInit("english");
    close();
}

void Language::russian_clicked()
{
    parentWidget->WordInit("russian");
    close();
}

Language::~Language()
{
    delete ui;
}
