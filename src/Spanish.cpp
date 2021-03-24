#include "Spanish.h"

void configurarPin(int _pin = 13, boolean _modo = OUTPUT){
	pinMode(_pin,_modo);
}

void encenderPin(int _pin = 13){
	digitalWrite(_pin,HIGH);
}
void apagarPin(int _pin = 13){
	digitalWrite(_pin,LOW);
}

void leerPin(int _pin = 13){
	Serial.begin(9600);
	Serial.println(digitalRead(_pin));
	Serial.end();
}

void imprimirEnPantalla(String text, int end = 0){
	Serial.begin(9600);
	if(end == NUEVA_LINEA) Serial.println(text);
	else{
		Serial.print(text);
		if(end != NADA) Serial.print(end);
	}
	
	Serial.end();
}

void pausa(float _segundos){
	delay(_segundos*1000);
}
