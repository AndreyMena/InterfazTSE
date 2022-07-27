#include "ingresarvotante.h"
#include "ui_ingresarvotante.h"
#include <iostream>
#include "controlador.h"


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
    controlador->consultarPadron(cedula);
    //controlador->consultarPadron(cedula);
    //qDebug().nospace() << qPrintable(ui->login->text());
   //cout << ui->login->text() << endl;
}

