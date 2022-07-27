#include "votar.h"
#include "ui_votar.h"
#include "controlador.h"

votar::votar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::votar)
{
    ui->setupUi(this);
    controlador = new Controlador;

}

votar::~votar()
{
    delete ui;
}

void votar::changeButton(int button){
    this->button = button;
}

void votar::on_pushButton_clicked()
{
    controlador->votar("4 01");
}

void votar::on_pushButton_2_clicked()
{
    controlador->votar("4 02");
}

void votar::on_pushButton_3_clicked()
{
    controlador->votar("4 03");
}

void votar::on_pushButton_4_clicked()
{
    controlador->votar("4 04");
}
