#ifndef CONTROLADOR_H
#define CONTROLADOR_H
#include <iostream>

#include "log.h"
#include "comunicaciones.h";



using namespace std;


class Controlador
{
public:
    Controlador();
    int consultarPadron(string cedula);
    //void votanteValido();
    //void votanteInvalido();
    void registrar(char caracter);
    void votar(string voto);
private:
    Log bitacora;
    Comunicaciones* cliente;
};

#endif // CONTROLADOR_H
