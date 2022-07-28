#include "conteovotos.h"
#include "ui_conteovotos.h"
#include <QString>

conteoVotos::conteoVotos(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::conteoVotos)
{
    ui->setupUi(this);
}

conteoVotos::~conteoVotos()
{
    delete ui;
}

void conteoVotos::cambiarVotos(std::string pln, std::string pac, std::string up, std::string fa){
    ui->votospln->setText(QString::fromStdString(pln));
    ui->votospac->setText(QString::fromStdString(pac));
    ui->votosup->setText(QString::fromStdString(up));
    ui->votosfa->setText(QString::fromStdString(fa));
}
