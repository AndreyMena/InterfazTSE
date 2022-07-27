#include "confirmarvoto.h"
#include "ui_confirmarvoto.h"

confirmarVoto::confirmarVoto(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::confirmarVoto)
{
    ui->setupUi(this);
}

confirmarVoto::~confirmarVoto()
{
    delete ui;
}
