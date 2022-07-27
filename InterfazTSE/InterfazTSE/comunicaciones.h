#ifndef COMUNICACIONES_H
#define COMUNICACIONES_H

#include <iostream>
#include <fstream>
#include <netdb.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <vector>
#include <chrono>
//#include "controlador.h"

#include "log.h"

//class ingresarVotante;

class Comunicaciones
{
public:
  Comunicaciones();
  int enviar(std::string mensaje);
  char* recibir();

  std::string getDate();

  std::string convertToString(char* a, int size);
private:

  //ingresarVotante* ingresarvotante;
  //Log* log;

  int emisor;
  int receptor;
  struct sockaddr_in ipServidor;
  //Controlador* controlador;
};

#endif // COMUNICACIONES_H
