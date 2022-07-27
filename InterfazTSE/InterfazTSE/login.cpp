#include "login.h"
#include "ui_login.h"
#include <iostream>
#include "ingresarvotante.h"
#include <QMessageBox>

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_3_clicked()
{
    std::string user = ui->lnuser()->text;
    std::string password = ui->lnpassword()->text;

    if(user == "tse" && password == "1234"){
        ingresarVotante* w = new ingresarVotante();
        w->show();
        hide();
    }else{
        QMessageBox::critical(this, "Login", "Usuario o/y contraseña incorrecta");
    }
}
