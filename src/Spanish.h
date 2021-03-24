/***
    Spanish.h
***/

#ifndef _SPANISH
#define _SPANISH

#include <Arduino.h>
#include "SpanishDefinitions.h"
#include <stdio.h>
//#include <stdargs>

#define		NADA					0
#define		NUEVA_LINEA				1

//---------------Funciones--------------------------
//Configuracion
void configurarPin(int _pin = 13, boolean _modo = OUTPUT);
//Escritura digital
void encenderPin(int _pin = 13);
void apagarPin(int _pin = 13);
//Lectura digital
void leerPin(int _pin = 13);
//Serial
void imprimirEnPantalla(String text = "", char end = NUEVA_LINEA);

//Otros
void pausa(float _segundos);



#endif
