#include "ingresarvotante.h"
#include "ui_ingresarvotante.h"
#include <iostream>
#include <QMessageBox>

#include <string.h>


using namespace std;

ingresarVotante::ingresarVotante(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ingresarVotante)
{
    log = new Log();
    comunicaciones = new Comunicaciones();
    activarmesas = new activarMesas(comunicaciones);
    ui->setupUi(this);
}

ingresarVotante::~ingresarVotante()
{
    delete ui;
}

void ingresarVotante::on_pushButton_3_clicked()
{
    //char datos[64];
    cedula = ui->login->text().toStdString();
    comunicaciones->enviar("1 "+cedula);
    cout << "sad";
    string datos = comunicaciones->recibir();
    cout << "tesxsto"<< datos << endl;
    execute(datos);
}

void ingresarVotante::votanteValido(){
    QMessageBox::information(this, "Votante Valido", "El número de cédula que se consultó SÍ se encuentra en el padrón");
    //activarMesas* w = new activarMesas();
    comunicaciones->enviar("2 "+cedula);

    comunicaciones->recibir();
    log->registrar('2');
    activarmesas->show();
    //hide();
}

void ingresarVotante::votanteInvalido(){
    QMessageBox::information(this, "Votante Invalido", "El número de cédula que se consultó NO se encuentra en el padrón");
}

void ingresarVotante::execute(string mensaje){
  cout << mensaje <<endl;
  int comando = mensaje[0] - 48;
  //comando -= 48;
  cout << comando <<endl;
  switch(comando){
    case 3:
      std::cout << "Comando: 3" << std::endl;
      std::cout << "Booleano: " << mensaje[2] << std::endl;
      if(mensaje[2] == '1'){
        votanteValido();
      }else{
        votanteInvalido();
      }
      std::cout << std::endl;
      log->registrar('3');
      break;
  }
}
