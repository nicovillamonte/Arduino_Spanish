#include "Spanish.h"

//////////////////////////////////////////////////
//// Configuracion
//////////////////////////////////////////////////
void configurarPin(int _pin, bool _modo){
	pinMode(_pin,_modo);
}

//////////////////////////////////////////////////
//// Escritura digital
//////////////////////////////////////////////////
void encenderPin(int _pin){
	digitalWrite(_pin,HIGH);
}
void apagarPin(int _pin){
	digitalWrite(_pin,LOW);
}

//////////////////////////////////////////////////
//// Lectura digital
//////////////////////////////////////////////////
void leerPin(int _pin){
	Serial.begin(9600);
	Serial.print("Pin ");
	Serial.print(_pin);
	if(digitalRead(_pin))
		Serial.println(" encendido");
	else Serial.println(" apagado"); 
	//Serial.end();
}

//////////////////////////////////////////////////
//// Lectura Analogica
//////////////////////////////////////////////////
void leerPinA(int _pin){
	Serial.begin(9600);
	Serial.print("Pin ");
	if(_pin <= 13){
		Serial.print(_pin);
	} else {
		switch(_pin){
			case 14:
				Serial.print("A0");
				break;
			case 15:
				Serial.print("A1");
				break;
			case 16:
				Serial.print("A2");
				break;
			case 17:
				Serial.print("A3");
				break;
			case 18:
				Serial.print("A4");
				break;
			case 19:
				Serial.print("A5");
				break;
			default:
				Serial.print("desconocido");
		}
	}
	Serial.print(": ");
	Serial.println(mapeoDecimal(analogRead(_pin),0,1024,0.0,5.0));
	//Serial.end();
}

//////////////////////////////////////////////////
//// Serial
//////////////////////////////////////////////////
void imprimirEnPantalla(String text, int end){
	Serial.begin(9600);
	if(end == NUEVA_LINEA) Serial.println(text);
	else{
		Serial.print(text);
		if(end != NADA) Serial.print(end);
	}
	//Serial.end();
}

//////////////////////////////////////////////////
//// Otros
//////////////////////////////////////////////////
void pausa(float _tiempo){
	if(_tiempo >= 1)
		delay(int(_tiempo));
	else {delayMicroseconds(int(_tiempo*1000));
		Serial.println("USO MICRO");
	}
}

float mapeoDecimal(float x, float in_min, float in_max, float out_min, float out_max) {
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}