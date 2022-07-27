#include "controlador.h"

Controlador::Controlador()
{

}

int Controlador::consultarPadron(string cedula) {

    cout << "se consulta padron con cedula: " << cedula <<endl;


    return 0;
}

void Controlador::votante() {
    //ui.
}

void Controlador::registrar(char caracter) {
    bitacora.registrar(caracter);
}
