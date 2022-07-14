#include "ventanadeerror.h"
#include "ui_ventanadeerror.h"

ventanaDeError::ventanaDeError(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ventanaDeError)
{
    ui->setupUi(this);
}

ventanaDeError::~ventanaDeError()
{
    delete ui;
}

void ventanaDeError::on_botonOk_clicked()
{

}

