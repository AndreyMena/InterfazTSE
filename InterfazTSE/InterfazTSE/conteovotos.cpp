#include "conteovotos.h"
#include "ui_conteovotos.h"

conteoVotos::conteoVotos(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::conteoVotos)
{
    ui->setupUi(this);
}

conteoVotos::~conteoVotos()
{
    delete ui;
}
