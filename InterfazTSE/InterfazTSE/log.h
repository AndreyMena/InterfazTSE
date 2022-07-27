#ifndef LOG_H
#define LOG_H

#include <iostream>
#include <fstream>
#include <string>
#include <chrono>

using namespace std;

/* Formato de los mensajes:
*
* Consulta del padrón: 1 cédula Fecha
* Actualizar el padrón: 2 cédula Fecha
* Respuesta 3 Bool Fecha
* Emitir voto: 4 #Partido Fecha
* Mensaje de error: 5 #Error Fecha
* Estoy vivo: 6 Bool Fecha
* ¿Esta vivo?: 7 Bool Fecha
*
*/

class Log
{
public:
    Log();
    ~Log();

    void registrar(char tipo);

private:
    string obtenerFecha();
};

#endif // LOG_H
