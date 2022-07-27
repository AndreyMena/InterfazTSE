#ifndef CONTROLADOR_H
#define CONTROLADOR_H
#include <iostream>

#include "log.h"



using namespace std;


class Controlador
{
public:
    Controlador();
    int consultarPadron(string cedula);
    void votante();
    void registrar(char caracter);
private:
    Log bitacora;
};

#endif // CONTROLADOR_H
