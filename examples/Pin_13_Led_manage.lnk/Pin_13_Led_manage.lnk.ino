#include <Spanish.h>

Vacio Configurar(){
  configurarPin();    //Configurar el pin, por defecto el 13
}

Vacio Repetir(){
  encenderPin();      //Encender el pin, por defecto el 13
  leerPin();          //Leer el pin, por defecto el 13 (Impresion en monitor serie)
  pausa(1);           //Pausar por 1 segundo
  apagarPin();        //Apagar el pin, por defecto el 13
  leerPin();
  pausa(0.5);         //Pausar por 0.5 segundos
}
