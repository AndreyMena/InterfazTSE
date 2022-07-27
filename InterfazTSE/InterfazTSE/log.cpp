#include "log.h"

Log::Log()
{

}

Log::~Log() {
}

void Log::registrar(char tipo) {
  int mensaje = tipo-48;
  string fecha;
  ofstream bitacora("bitacora.txt", std::ios_base::app);
  // bitacora.open("bitacora.txt");
  if (bitacora.is_open()) {
    switch (mensaje) {
    case 1:
      //cout << "Entré 1" << endl;
      fecha = this->obtenerFecha() + "\tSe consultó a padrón\n";
      bitacora << fecha;
    break;
    case 2:
      //cout << "Entré 2" << endl;
      fecha = this->obtenerFecha() + "\tSe actualizó el padrón\n";
      bitacora << fecha;
    break;
    case 3:
      //cout << "Entré 3" << endl;
      fecha = this->obtenerFecha() + "\tSe respondió la solicitud\n";
      bitacora << fecha;
    break;
    case 4:
      //cout << "Entré 4" << endl;
      fecha = this->obtenerFecha() + "\tSe emitió un voto\n";
      bitacora << fecha;
    break;
    }
    bitacora.close();
  }
}

string Log::obtenerFecha() {
  auto start = std::chrono::system_clock::now();
  auto end = std::chrono::system_clock::now();
  std::chrono::duration<double> elapsed_seconds = end-start;
  std::time_t end_time =
  std::chrono::system_clock::to_time_t(end);
  std::string date(std::ctime(&end_time));
  if (!date.empty() && date[date.length()-1] == '\n') {
    date.erase(date.length()-1);
  }
  return date;
}
