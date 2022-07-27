#include "activarmesas.h"
#include "ui_activarmesas.h"

activarMesas::activarMesas(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::activarMesas)
{
    ui->setupUi(this);
}

activarMesas::~activarMesas()
{
    delete ui;
}
