#include "comunicaciones.h"


Comunicaciones::Comunicaciones(){
    //ingresarvotante = new ingresarVotante();
    //log = new Log();

    struct sockaddr_in socketReceptor;
    receptor = 0;

    receptor = socket(AF_INET, SOCK_STREAM, 0);
    socketReceptor.sin_family = AF_INET;
    socketReceptor.sin_addr.s_addr = htonl(INADDR_ANY);
    socketReceptor.sin_port = htons(1032);

    bind(receptor, (struct sockaddr*)&socketReceptor ,
            sizeof(socketReceptor));
    listen(receptor , 20);
}

int Comunicaciones::enviar(std::string mensaje) {
    int resultado=0 ;
    int s = 0, n = 0, length = 0;
    std::string datos;
    struct sockaddr_in ipServidor;
    datos += mensaje;
    datos += " " + getDate();
    length = datos.length()+1;
    if((s = socket(AF_INET, SOCK_STREAM, 0))< 0){
      std::cout << "Error de creación de socket" << std::endl;
      resultado=1 ;
    } else {
      ipServidor.sin_family = AF_INET;
      ipServidor.sin_port = htons(1030);
      ipServidor.sin_addr.s_addr = inet_addr("192.168.22.20");
      if(connect(s, (struct sockaddr *)&ipServidor, sizeof(ipServidor))<0){
        std::cout << std::endl << "Error de conexión por IP o puerto" << std::endl ;
        resultado= 2;
      } else {
        n = write(s, &length, sizeof(int));
        n = write(s, datos.data(), length);
      }
    }
    return resultado;
}

string Comunicaciones::recibir() {
    bool resultado = false;
    int n = 0, conexion = 0;
    char datosReceptor[30];
    struct sockaddr_storage ipRemoto;
    socklen_t l= sizeof(ipRemoto);

    conexion = accept(receptor, (struct sockaddr*) &ipRemoto, &l);
    if(conexion != -1){
      int textSize = 0;
      n = read(conexion, &textSize, sizeof(int));
      if(n > 0){
        n = read(conexion, datosReceptor, textSize);
        if(n > 0){
          //Se registra que se obtuvo respuesta

          // Si el votante es válido
          char v = datosReceptor[2];
          if(v == '1'){
            resultado = true;
          }
        }
      }
      close(conexion);
    }
    //string str(datosReceptor);
    //return str;
    string str(datosReceptor);
    cout <<"el c" << str << endl;
    return str;
}

std::string Comunicaciones::getDate(){
  auto start = std::chrono::system_clock::now();
  auto end = std::chrono::system_clock::now();
  std::chrono::duration<double> elapsed_seconds = end-start;
  std::time_t end_time =
  std::chrono::system_clock::to_time_t(end);
  std::string date(std::ctime(&end_time));
  return date;
}
