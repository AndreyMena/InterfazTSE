#include "votar.h"
#include "ui_votar.h"
#include <QMessageBox>

votar::votar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::votar)
{
    ui->setupUi(this);
    log = new Log();
    comunicaciones = new Comunicaciones();

}

votar::~votar()
{
    delete ui;
}

void votar::changeButton(int button){
    this->button = button;
}

void votar::on_votarPLN_clicked()
{

    log->registrar('4');

    comunicaciones->enviar("4 01");

    //string respuesta = comunicaciones->recibir();

}


void votar::on_votarPAC_clicked()
{
    log->registrar('4');
    comunicaciones->enviar("4 02");
}


void votar::on_votarUP_clicked()
{
    log->registrar('4');
    comunicaciones->enviar("4 03");

}


void votar::on_votarFA_clicked()
{
    log->registrar('4');
    comunicaciones->enviar("4 04");
}

void votar::execute(char* mensaje) {
  int comando = (int)mensaje[0];
  comando -= 48;
  switch(comando){
    case 3:
      std::cout << "Comando: 3" << std::endl;
      std::cout << "Booleano: " << mensaje[2] << std::endl;
      if(mensaje[2] == true){
        this->votoValido();
      }else{
        this->votoInvalido();
      }
      std::cout << std::endl;
      log->registrar('3');
      break;
  }
}


void votar::votoValido(){
    QMessageBox::information(this, "Votante Valido", "El número de cédula que se consultó SÍ se encuentra en el padrón");
    //activarMesas* w = new activarMesas();
    hide();
}

void votar::votoInvalido() {
    QMessageBox::information(this, "Votante Invalido", "El número de cédula que se consultó NO se encuentra en el padrón");
}
