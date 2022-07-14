#include "mainwindow.h"
#include "confirmarvoto.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    //Probando confirmarVoto
    confirmarVoto w2;
    w2.show();
    return a.exec();
}
