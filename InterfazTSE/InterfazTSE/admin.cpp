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
    comunicaciones->enviar("");
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
    std::string fa = partidos.pop_back();
    std::string up = partidos.pop_back();
    std::string pac = partidos.pop_back();
    std::string pln = partidos.pop_back();

    conteovotos = new conteoVotos();
    conteovotos->cambiarVotos(pln, pac, up, fa);
}
