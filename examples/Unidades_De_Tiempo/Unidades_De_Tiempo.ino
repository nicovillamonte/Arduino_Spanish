#include <Spanish.h>

Decimal tiempo es 0.1 SEGUNDO;
Entero cont es 0;

Vacio Configurar() {
  Serie.comenzar(9600);
  configurarPin();
}

Vacio Repetir() {
  encenderPin();
  pausa(tiempo);
  apagarPin();
  pausa(tiempo);
  
  incrementar cont;
  Serie.imprimir(cont,DEC);
  Serie.imprimir(" ---> ");
  Serie.imprimirLinea(tiempo,DEC);


  Si(tiempo < 100000 MICROSEGUNDOS) 
      tiempo /= 2;
     //tiempo dividir 2;
  sino tiempo restar 10000 MICROSEGUNDOS;
}
