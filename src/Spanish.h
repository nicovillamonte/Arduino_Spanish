/***
    Spanish.h
***/

#ifndef _SPANISH
#define _SPANISH

#include <Arduino.h>

//---------------Defines--------------------------
#define		definir			const int
///Palabras reservadas
//Estructura
#define     Configurar      setup
#define     Repetir         loop
//Arduino Logica
#define     APAGADO         LOW
#define     BAJO            LOW
#define     ENCENDIDO       HIGH
#define     PRENDIDO        HIGH
#define     ALTO            HIGH
#define     SALIDA          OUTPUT
#define     ENTRADA         INPUT
#define     ENTRADA_PULLUP  INPUT_PULLUP

//Palabras clave
#define     devolver        return
#define     finPrograma     return 0;
#define     salirBucle      break
#define     romper          break
#define     continuar       continue
#define     irHacia         goto

///Tipos de Datos
#define     Vacio			void
#define     Entero          int
#define     Caracter        char
#define     Decimal         float
#define     Logico          boolean
#define     Largo           long
#define     Corto           short
#define     sinSigno        unsigned
#define     Texto           String
#define     Cadena          String
    #define     caracterEn          charAt
    #define     compararCon         compareTo
    #define     concatenar          concat
    #define     terminaCon          endWith
    #define     igualA              equals
    #define     igualASinMayusculas equalsIgnoreCase
    #define     igualASinMinusculas equalsIgnoreCase
    #define     obtenerBytes        getBytes
    #define     indiceDe            indexOf
    #define     ultimoIndiceDe      lastIndexOf
    #define     longitud            length
    #define     remover             remove
    #define     reemplazar          replace
    #define     reservar            reserve
    #define     setearCaracterEn    setCharAt
    #define     empiezaCon          startWith
    #define     subCadena           subString
    #define     aTexto              toCharArray
    #define     aEntero             toInt
    #define     aMinuscula          toLowerCase
    #define     aMayuscula          toUpperCase
    #define     recortar              trim
#define     Constante       const
#define     Estatico        static
#define     Volatil         volatile


//Valores
#define     VERDAD          true
#define     VERDADERO       true
#define     MENTIRA         false
#define     FALSO           false
#define     No              !
#define     no              !
#define     loContrarioA    !
#define     Y               &&
#define     O               ||

///Operadores
//Operadores de asignacion
#define     es              =
//Operadores aritmeticos
#define     incrementar     ++
#define     decrementar     --
//Operadores Condicionales
#define     igual           ==
#define     distinto        !=
#define     menor           <
#define     mayor           >
#define     mayorIgual      >=
#define     menorIgual      <=

#define     igualQue        ==
#define     distintoQue     !=
#define     distintoDe      !=
#define     menorQue        <
#define     mayorQue        >
#define     mayorIgualQue   >=
#define     menorIgualQue   <=

#define     esIgualQue      ==
#define     esDistintoQue   !=
#define     esDistintoDe    !=
#define     esMenorQue      <
#define     esMayorQue      >
#define     esMayorIgualQue >=
#define     esMenorIgualQue <=
#define     esVerdad        == true
#define     esFalso         == false
#define     noEsVerdad      == false
#define     noEsFalso       == true

#define 	hasta			!=

///Sentencias
#define     Si              if
#define     si              if
#define     Sino            else
#define     sino            else
#define     Mientras        while
#define     mientras        while
#define     para            for
#define     Elegir          switch
#define     caso            case
#define     Caso            case
#define     Hacer           do
#define     porDefecto      default



///Funciones
//------Funciones Arduino------
//  I/O Digital
#define     configurarPin           pinMode
#define     lecturaDigital          digitalRead
#define     escrituraDigital        digitalWrite
//  I/O Analogico
#define     lecturaAnalogica        analogRead
#define     escrituraAnalogica      analogWrite
//  Time
#define     pausa                   delay
#define     pausaMicrosegundos      delayMicroseconds
#define     milisegundosPasados     millis
#define     microsegundosPasados    micros
//Matematiicas
#define     valorAbsoluto           abs
#define     restringir              constrain
#define     mapear                  map
#define     maximo                  max
#define     minimo                  min
#define     potencia                pow
#define     raizCuadrada            sqrt
//Trigonometria
#define     coseno                  cos
#define     seno                    sin
#define     tangente                tan
//Caracteres
#define     esLetra                 isAlpha
#define     esAlfaNumerico          isAlphaNumeric
#define     esAscii                 isAscii
#define     esControl               isControl
#define     esDigito                isDigit
#define     esGrafico               isGraph
#define     esDigitoHexadecimal     isHexadecimalDigit
#define     esMinuscula             isLowerCase
#define     estaEnMinuscula         isLowerCase
#define     esMayuscula             isUpperCase
#define     estaEnMayuscula         isUpperCase
#define     esImprimible            isPrintable
#define     esPuntuacion            isPunct
#define     esEspacio               isSpace
#define     esEspacioEnBlanco       isWhiteSpace
//Numeros randomicos
#define     alAzar                  random
#define     semillaAlAzar           randomSeed
//Bits y Bytes
#define     borrarBit               bitClear
#define     setearBit               bitSet
#define     leerBit                 bitRead
#define     escribirBit             bitWrite
#define     byteAlto                highByte
#define     byteBajo                lowByte
//Interruptores externos
#define     configurarInterrupcion  attachInterrupt
    #define     pinDigitalAInterrumpir  digitalPinToInterrupt
    #define     CUANDO_CAMBIA           CHANGE
    #define     CAMBIO                  CHANGE
    #define     CUANDO_CRECE            RISING
    #define     CRECIENTE               RISING
    #define     CUANDO_DECRECE          FALLING
    #define     DECRECIENTE             FALLING
#define     desconfigurarInterrupcion   detachInterrupt
//Serial
#define     Serie                   Serial
    #define     disponible              available
    #define     comenzar                begin
    #define     terminar                end
    #define     leer                    read
    #define     escribir                write
    #define     imprimir                print
    #define     imprimirLinea           println
    #define     eventoDeSerie           serialEvent
#define     medio                   stream
    #define     buscar                  find
    #define     buscarHasta             findUntil
    #define     leerBytes               readBytes
    #define     leerBytesHasta          readBytesUntil
    #define     leerTexto               readString
    #define     leerTextoHasta          readStringUntil
    #define     obtenerEntero           parseInt
    #define     obtenerDecimal          parseFloat
    #define     setearTiempoLimite      setTimeOut
//USB
#define     Teclado                 Keyboard
    #define     presionar               press
    #define     mantener                release
    #define     mantenerTodas           releaseAll
#define     Raton                   Mouse
    #define     mover                   move
    #define     estaPresionado          isPressed

///FACILIDADES
#define     Para(INICIO,MIENTRAS,PASOS)     for(INICIO;MIENTRAS;PASOS)
#define     bucleInfinito                   while(1)
	

//---------------Funciones--------------------------
/*
void encenderPin(int _pin){
	digitalWrite(_pin,HIGH);
}
void apagarPin(int _pin){
	digitalWrite(_pin,LOW);
}

void leerPin(int _pin){
	Serial.begin(9600);
	Serial.println(digitalRead(_pin));
	Serial.end();
}
*/

#endif
