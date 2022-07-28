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

    if (QMessageBox::Yes == QMessageBox(QMessageBox::Information, "Votar", "Seguro que desea votar por el Partido Liberación Nacional", QMessageBox::Yes|QMessageBox::No).exec())
    {
        comunicaciones->enviar("4 01");
        log->registrar('4');
        hide();
    }
}


void votar::on_votarPAC_clicked()
{
    if (QMessageBox::Yes == QMessageBox(QMessageBox::Information, "Votar", "Seguro que desea votar por el Partido Acci[on Ciudadana", QMessageBox::Yes|QMessageBox::No).exec())
    {
        comunicaciones->enviar("4 01");
        log->registrar('4');
        hide();
    }
}


void votar::on_votarUP_clicked()
{
    if (QMessageBox::Yes == QMessageBox(QMessageBox::Information, "Votar", "Seguro que desea votar por el Partido Unidos Podemos", QMessageBox::Yes|QMessageBox::No).exec())
    {
        comunicaciones->enviar("4 01");
        log->registrar('4');
        std::string datos = comunicaciones->recibir();
        execute(datos);
        hide();
    }

}


void votar::on_votarFA_clicked()
{
    if (QMessageBox::Yes == QMessageBox(QMessageBox::Information, "Votar", "Seguro que desea votar por el Partido Frente Amplio", QMessageBox::Yes|QMessageBox::No).exec())
    {
        comunicaciones->enviar("4 01");
        log->registrar('4');
        hide()
    }
}


void votar::votoValido(){
    QMessageBox::information(this, "Voto Valido", "El voto se realizo correctamente");
    //activarMesas* w = new activarMesas();
    hide();
}

void votar::votoInvalido() {
    QMessageBox::information(this, "Votante Invalido", "El voto no se pudo realizar");
}

void votar::execute(std::string mensaje){
  int comando = mensaje[0] - 48;
  switch(comando){
    case 3:
      std::cout << "Comando: 3" << std::endl;
      std::cout << "Booleano: " << mensaje[2] << std::endl;
      if(mensaje[2] == '1'){
        votoValido();
      }else{
        votoInvalido();
      }
      log->registrar('3');
      break;
  }
}
