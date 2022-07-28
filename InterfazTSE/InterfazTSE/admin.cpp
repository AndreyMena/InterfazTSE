#include "admin.h"
#include "ui_admin.h"

#include <iostream>
#include <cstring>
using namespace std;

Admin::Admin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Admin)
{
    ui->setupUi(this);
}

Admin::~Admin()
{
    delete ui;
}

void Admin::on_pushButton_clicked()
{
    comunicaciones = new Comunicaciones();
    comunicaciones->enviar("8");
    std::string votos = comunicaciones->recibir();
    int posInit = 0;
    int posFound = 0;
    std::string splitted;
    std::vector<std::string> partidos;
    while(posFound >= 0){
        posFound = votos.find(" ", posInit);
        splitted = votos.substr(posInit, posFound - posInit);
        posInit = posFound + 1;
         partidos.push_back(splitted);
      }

    std::string fa = partidos[3];
    //partidos.pop_back();
    std::string up = partidos[2];
    //partidos.pop_back();
    std::string pac = partidos[1];
    //partidos.pop_back();
    std::string pln = partidos[0];
    partidos.pop_back();

    conteovotos = new conteoVotos();
    conteovotos->cambiarVotos(pln, pac, up, fa);
    conteovotos->show();
    this->hide();
}
