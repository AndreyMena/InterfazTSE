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
#include "controlador.cpp"

class Comunicaciones
{
public:
  Comunicaciones();
  int cliente(std::string mensaje);
  int servidor();
  std::string getDate();
  void execute(char* mensaje);
  std::string convertToString(char* a, int size);
private:
  Controlador* controlador;
};

#endif // COMUNICACIONES_H
