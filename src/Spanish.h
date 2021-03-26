/***
    Spanish.h
***/

#ifndef _SPANISH
#define _SPANISH

#include <Arduino.h>
#include "SpanishDefinitions.h"

#define		NADA					0
#define		NUEVA_LINEA				1

//---------------Funciones--------------------------
//Configuracion
void configurarPin(int _pin = LED_BUILTIN, bool _modo = OUTPUT);
//Escritura digital
void encenderPin(int _pin = LED_BUILTIN);
void apagarPin(int _pin = LED_BUILTIN);
//Lectura digital
void leerPin(int _pin = LED_BUILTIN);
//Lectura Analogica
void leerPinA(int _pin);
//Serial
void imprimirEnPantalla(String text, int end = NUEVA_LINEA);

//Otros
void pausa(float _segundos = 1000);
float mapeoDecimal(float x, float in_min, float in_max, float out_min, float out_max);


#endif
