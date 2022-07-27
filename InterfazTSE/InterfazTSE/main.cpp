#include "mainwindow.h"
#include "confirmarvoto.h"
#include "ventanadeerror.h"
#include "conteovotos.h"
#include "ingresarvotante.h"
#include "login.h"
#include "votar.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;

    ingresarVotante ingre;
    ingre.show();

    // w.show();

    // w.show();

    //Probando confirmarVoto (quitar luego)
//    confirmarVoto w2;
//    w2.show();

    //Probando ventana de error (quitar luego)
//    ventanaDeError w3;
//    w3.show();
/*
    conteoVotos w4;
    w4.show();

    Login w5;
    w5.show();

    votar w6;
    w6.show();
*/
    return a.exec();
}
