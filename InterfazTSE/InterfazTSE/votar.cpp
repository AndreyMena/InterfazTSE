#include "votar.h"
#include "ui_votar.h"

votar::votar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::votar)
{
    ui->setupUi(this);
}

votar::~votar()
{
    delete ui;
}
