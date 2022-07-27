#include "ingresarvotante.h"
#include "ui_ingresarvotante.h"
#include <iostream>
#include <QMessageBox>



using namespace std;

ingresarVotante::ingresarVotante(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ingresarVotante)
{
    log = new Log();
    comunicaciones = new Comunicaciones();
    activarmesas = new activarMesas();
    ui->setupUi(this);
}

ingresarVotante::~ingresarVotante()
{
    delete ui;
}

void ingresarVotante::on_pushButton_3_clicked()
{
    char* datos;
    cedula = ui->login->text().toStdString();
    comunicaciones->enviar("1 "+cedula);
    datos = comunicaciones->recibir();
    execute(datos);
}

void ingresarVotante::votanteValido(){
    QMessageBox::information(this, "Votante Valido", "El número de cédula que se consultó SÍ se encuentra en el padrón");
    //activarMesas* w = new activarMesas();
    comunicaciones->enviar("2 "+cedula);
    activarmesas->show();
    hide();
}

void ingresarVotante::votanteInvalido(){
    QMessageBox::information(this, "Votante Invalido", "El número de cédula que se consultó NO se encuentra en el padrón");
}

void ingresarVotante::execute(char* mensaje){
  int comando = (int)mensaje[0];
  comando -= 48;
  switch(comando){
    case 3:
      std::cout << "Comando: 3" << std::endl;
      std::cout << "Booleano: " << mensaje[2] << std::endl;
      if(mensaje[2] == true){
        votanteValido();
      }else{
        votanteInvalido();
      }
      std::cout << std::endl;
      log->registrar('3');
      break;
  }
}
