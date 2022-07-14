#include "mainwindow.h"
#include "confirmarvoto.h"
#include "ventanadeerror.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    //Probando confirmarVoto (quitar luego)
    confirmarVoto w2;
    w2.show();

    //Probando ventana de error (quitar luego)
    ventanaDeError w3;
    w3.show();
    return a.exec();
}
