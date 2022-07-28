#include "login.h"
#include "ui_login.h"
#include <iostream>
#include "ingresarvotante.h"
#include "admin.h"
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

    std::string user = ui->usuario->text().toStdString();
    std::string password = ui->contrasena->text().toStdString();

    if(user == "tse" && password == "1234"){
        ingresarVotante* w = new ingresarVotante();
        w->show();
        hide();
    }else if(user == "admin" && password == "admin"){
        Admin* admin = new Admin();
        admin->show();
        hide();
    }else{
        QMessageBox::critical(this, "Login", "Credenciales invalidas");
    }
}
