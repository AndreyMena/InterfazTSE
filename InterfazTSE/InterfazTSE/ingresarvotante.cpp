#include "ingresarvotante.h"
#include "ui_ingresarvotante.h"
#include "controlador.h"
#include "activarmesas.h"
#include <iostream>
#include <QMessageBox>



using namespace std;

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

void ingresarVotante::on_pushButton_3_clicked()
{
    Controlador* controlador = new Controlador();

    string cedula = ui->login->text().toStdString();
    controlador->consultarPadron("1"+cedula);
}

void ingresarVotante::votanteValido(){
    QMessageBox::information(this, "Votante Valido", "El número de cédula que se consultó SÍ se encuentra en el padrón");
    activarMesas* w = new activarMesas();
    w->show();
    hide();
}

void ingresarVotante::votanteInvalido(){
    QMessageBox::information(this, "Votante Invalido", "El número de cédula que se consultó NO se encuentra en el padrón");
}

