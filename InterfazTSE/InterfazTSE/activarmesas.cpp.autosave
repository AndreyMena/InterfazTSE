#include "activarmesas.h"
#include "ui_activarmesas.h"
#include "votar.h"

activarMesas::activarMesas(Comunicaciones* comunicaciones, ingresarVotante* ingresarvotante) :
    QWidget(nullptr),
    ui(new Ui::activarMesas), comunicaciones(comunicaciones), ingresarvotante(ingresarvotante)
{
    ui->setupUi(this);
}

activarMesas::~activarMesas()
{
    delete ui;
}

void activarMesas::on_pushButton_3_clicked()
{
    //this->setEnabled(false);
    votar1 = new votar(comunicaciones);
    cout << "hey" << endl;
    votar1->show();
    votar1->changeButton(1);
    this->hide();
}

void activarMesas::on_pushButton_4_clicked()
{
    //this->setEnabled(false);
    votar1 = new votar(comunicaciones);
    votar1->show();
    votar1->changeButton(2);
    this->hide();
}

/*
void activarMesas::enableButton(int button){
    if(button == 1){
        ui->pushButton_3->setEnabled(true);
    }else if(button == 2){
        ui->pushButton_4->setEnabled(true);
    }
}

*/

