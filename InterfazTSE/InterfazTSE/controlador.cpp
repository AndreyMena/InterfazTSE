#include "controlador.h"
#include "comunicaciones.h"
#include "ingresarvotante.h"
Controlador::Controlador()
{
    cliente = new Comunicaciones();
}

int Controlador::consultarPadron(string cedula) {
    cout << "se consulta padron con cedula: " << cedula <<endl;
    return cliente->cliente(cedula);
}

void Controlador::votanteValido() {
    ingresarVotante* w = new ingresarVotante();
    w->votanteValido();
}

void Controlador::votanteInvalido() {
    ingresarVotante* w = new ingresarVotante();
    w->votanteInvalido();
}

void Controlador::registrar(char caracter) {
    bitacora.registrar(caracter);
}

void Controlador::votar(string voto){
    cliente->cliente(voto);
}
