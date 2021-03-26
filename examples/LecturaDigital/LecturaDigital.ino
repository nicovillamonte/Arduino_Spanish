/*
 * Spanish.h
 * Nicolas Matias Villamonte
 * nicovillamonte@gmail.com
 *  LecturaDigital

  Existen varias formas de leer valores digitales en la libreria Spanish.h
  Leeremos un valor de entrada digital en el pin 2, imprimimos el resultado en el monitor serie.
  
  La segunda manera (la tradicional) se basa en obtener el valor mediante la lectura analogica (Entre 0 y 1024) e imprimirlo en el monitor serie.

  Este codigo de ejemplo se encuentra en el repositorio de GitHub de Spanish.h
  https://github.com/nicovillamonte/Arduino_Spanish.git
*/
#include <Spanish.h>

definir pulsador en 2;

Vacio Configurar() {
  //Inicializamos la comunicacion serie a 9600 bits por segundo.
  Serie.comenzar(9600);
  // Configuramos el pulsador como entrada.
  configurarPin(pulsador,ENTRADA);
}

Vacio Repetir() {
  // MANERA 1: Imprimir si el pin se encuentra encendido o apagado automaticamente en el monitor serie. (Es muy limitada y no se recomienda mas que para uso educacional).
  leerPin(pulsador);

  // MANERA 2: Leer la entrada digital
  Entero estadoPulsador es lecturaDigital(pulsador);
  //Imprimir el estado del boton leido en el monitor serie:
  Serie.imprimirLinea(estadoPulsador);
  pausa(1 SEGUNDO);           // Una pausa de 1 segundo entre cada lectura.
}
