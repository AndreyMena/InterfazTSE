#include "comunicaciones.h"


Comunicaciones::Comunicaciones(){
}

int Comunicaciones::cliente(std::string mensaje){
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
    ipServidor.sin_addr.s_addr = inet_addr("192.168.22.21");
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

int Comunicaciones::servidor(){
  char datos[64];
    int socketServidor = 0, conexion = 0, n = 0;
    struct sockaddr_in ip;
    socketServidor = socket(AF_INET, SOCK_STREAM, 0);

    memset(&ip, '0', sizeof(ip));
    memset(datos, '0', sizeof(datos));
    ip.sin_family = AF_INET;
    ip.sin_addr.s_addr = htonl(INADDR_ANY);
    ip.sin_port = htons(1337);

  bind(socketServidor, (struct sockaddr*)&ip , sizeof(ip));
    listen(socketServidor , 20);
  int msjs =0 ;sleep(1);
  struct sockaddr_storage ipRemoto;
  socklen_t l= sizeof(ipRemoto);
  char strIpRemoto[INET6_ADDRSTRLEN];
  int port;
  std::cout << std::endl << "[SERVIDOR ESCUCHANDO]" << std::endl ;
    while(true){
        conexion= accept(socketServidor, (struct sockaddr*) &ipRemoto, &l);
    if (conexion!=-1) {
      std::cout << "[MENSAJE RECIBIDO] #"<< ++msjs ;
      struct sockaddr_in *s = (struct sockaddr_in *)&ipRemoto;
      port = ntohs(s->sin_port);
      inet_ntop(AF_INET, &s->sin_addr, strIpRemoto, sizeof strIpRemoto);
      std::cout << " IP Remoto: " << strIpRemoto << std::endl ;
      int textSize = 0;
      std::string ip(strIpRemoto);
      if(ip != "172.18.0.1"){
        n = read(conexion, &textSize, sizeof(int));
        std::cout << " Text Size: " << textSize << std::endl;
        if(n > 0){
          n = read(conexion, datos, textSize);
          for(int i = 0; i < textSize; i++){
            std::cout << datos[i];
          }
          execute(datos);
        } else {
          std::cout<<"No se recibió el tamano del string"<<std::endl;
        }
      }

      close(conexion);
    }
    sleep(1);
  }

  std::cout << std::endl << "[SERVIDOR DETENIDO]" << std::endl;
  return 0;
}

void Comunicaciones::execute(char* mensaje){
  int comando = (int)mensaje[0];
  comando -= 48;
  std::string cedula = "";
  int partido = 0, partido2 = 0, respuesta = 0;
  switch(comando){
    case 3:
      std::cout << "Comando: 3" << std::endl;
      std::cout << "Booleano: " << mensaje[2] << std::endl;
      if(mensaje[2] == true){
        controlador->votante();
      }
      std::cout << std::endl;
      controlador->registrar('3');
      break;
  }
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
