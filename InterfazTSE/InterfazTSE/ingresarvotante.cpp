#include "ingresarvotante.h"
#include "ui_ingresarvotante.h"

ingresarVotante::ingresarVotante(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ingresarVotante)
{
    ui->setupUi(this);
}

ingresarVotante::~ingresarVotante()
{
    delete ui;
}
