/*
 * Spanish.h
 * Nicolas Matias Villamonte
 * nicovillamonte@gmail.com
 *  LecturaAnalogica 

  Existen varias formas de leer valores analogicos en la libreria Spanish.h
  Leeremos el pin analogicos A0 para ejemplificar.
  La representación gráfica está disponible usando Serial Plotter (Herramientas > Serial Plotter).
  Conecte el pin central de un potenciómetro al pin A0, y los pines exteriores a + 5V y tierra.

  La primera forma imprime directamente el valor de voltaje en el monitor serie (Es muy limitada y no se recomienda mas que para uso educacional y con placas de 5V de tension).
  La segunda manera (la tradicional) se basa en obtener el valor mediante la lectura analogica (Entre 0 y 1024) e imprimirlo en el monitor serie.

  Este codigo de ejemplo se encuentra en el repositorio de GitHub de Spanish.h
  https://github.com/nicovillamonte/Arduino_Spanish.git
*/
#include <Spanish.h>  //Incluimos la libreria Spanish.h

Vacio Configurar() {
  //Inicializamos la comunicacion serie a 9600 bits por segundo.
  Serie.comenzar(9600);
}

Vacio Repetir() {
  // MANERA 1: Imprimir valor en Voltaje del pin A0 (Solo funciona correctamente con placas de 5V como tension base)
  leerPinA(A0);

  // MANERA 2: Leemos el valor de entrada del pin de entrada analogica A0
  Entero valorSensor es lecturaAnalogica(A0);
  //Imprimimos el valor que leimos:
  Serie.imprimirLinea(valorSensor);
  pausa(1 SEGUNDO);           // Una pausa de 1 segundo entre cada lectura.
}
