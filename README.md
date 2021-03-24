# Spanish Arduino Library
> *Basic Arduino Coding translated to Spanish and simplified for educational purposes.*<br/>
> Programación en Arduino traducida al español y simplificada con propositos educacionales.

## Version 1.0.0 (Reference)
### Estructura
Las funciones [*setup*](https://www.arduino.cc/reference/en/language/structure/sketch/setup/) (**Configurar**) y [*loop*](https://www.arduino.cc/reference/en/language/structure/sketch/loop/) (**Repetir**) se traducen como:
```cpp
Vacio Configurar(){
  //Codigo de configuracion
}

Vacio Repetir(){
  //Codigo principal, para correr repetidamente 
}
```

### Tipos de Datos
* **Vacio**								como [**void**](https://www.arduino.cc/reference/en/language/variables/data-types/void/)  
* **Entero**							como [**int**](https://www.arduino.cc/reference/en/language/variables/data-types/int/)  
* **Decimal**							como [**float**](https://www.arduino.cc/reference/en/language/variables/data-types/float/)  
* **Caracter**							como [**char**](https://www.arduino.cc/reference/en/language/variables/data-types/char/)  
* **Logico**							como [**bool**](https://www.arduino.cc/reference/en/language/variables/data-types/bool/)  
* **Largo**								como [**long**](https://www.arduino.cc/reference/en/language/variables/data-types/long/)  
* **Corto**								como [**short**](https://www.arduino.cc/reference/en/language/variables/data-types/short/)  
* **sinSigno**							como [**unsigned**](https://www.arduino.cc/reference/en/language/variables/data-types/unsignedint/)  
* **Texto**/**Cadena**					como [**String**](https://www.arduino.cc/reference/en/language/variables/data-types/stringobject/)  
* **Clase**								como [**class**](https://www.arduino.cc/en/Tutorial/HomePage)  

### Calificadores de variables
* **Constante**							como [**const**](https://www.arduino.cc/reference/en/language/variables/variable-scope-qualifiers/const/)  
* **Estatico**							como [**static**](https://www.arduino.cc/reference/en/language/variables/variable-scope-qualifiers/static/)  
* **Volatil**							como [**volatile**](https://www.arduino.cc/reference/en/language/variables/variable-scope-qualifiers/volatile/)  

### Constantes
* **ENCENDIDO**/**PRENDIDO**/**ALTO** 	como [**HIGH**](https://www.arduino.cc/reference/en/language/variables/constants/constants/)  
* **APAGADO**/**BAJO** 					como [**LOW**](https://www.arduino.cc/reference/en/language/variables/constants/constants/)  
* **SALIDA**							como [**OUTPUT**](https://www.arduino.cc/reference/en/language/variables/constants/constants/)  
* **ENTRADA**							como [**INPUT**](https://www.arduino.cc/reference/en/language/variables/constants/constants/)  
* **ENTRADA_PULLUP**					como [**INPUT_PULLUP**](https://www.arduino.cc/reference/en/language/variables/constants/constants/)  
* **VERDAD**/**VERDADERO**				como [**true**](https://www.arduino.cc/reference/en/language/variables/constants/constants/)  
* **FALSO**								como [**false**](https://www.arduino.cc/reference/en/language/variables/constants/constants/)  

### Utilidades
* **tamanioDe**							como [**sizeOf**](https://www.arduino.cc/reference/en/language/variables/utilities/sizeof/)  

### Estructuras de Control
* **Si**/**si**							como [**if**](https://www.arduino.cc/reference/en/language/structure/control-structure/if/)  
* **Sino**/**sino**						como [**else**](https://www.arduino.cc/reference/en/language/structure/control-structure/else/)  
* **Mientras**/**mientras**				como [**while**](https://www.arduino.cc/reference/en/language/structure/control-structure/while/)  
* **Hacer**								como [**do**](https://www.arduino.cc/reference/en/language/structure/control-structure/dowhile/)  
* **para**								como [**for**](https://www.arduino.cc/reference/en/language/structure/control-structure/for/)  
	* **Para**(*INIT*,*COND*,*STEP*)  
* **Elegir**							como [**switch**](https://www.arduino.cc/reference/en/language/structure/control-structure/switchcase/)  
	* **Caso**/**caso**						como [**case**](https://www.arduino.cc/reference/en/language/structure/control-structure/switchcase/)  
	* **porDefecto**						como [**default**](https://www.arduino.cc/reference/en/language/structure/control-structure/switchcase/)  
* **continuar**							como [**continue**](https://www.arduino.cc/reference/en/language/structure/control-structure/continue/)  
* **salirBucle**/**romper**				como [**break**](https://www.arduino.cc/reference/en/language/structure/control-structure/break/)  
* **devolver**							como [**return**](https://www.arduino.cc/reference/en/language/structure/control-structure/return/)  
* **irHacia**							como [**goto**](https://www.arduino.cc/reference/en/language/structure/control-structure/goto/)  

```cpp
Para(Entero i es 0, i hasta 10, incrementar i){
  //Codigo del bucle
}
```

### Operadores de Asignación
* **es**								como [**=**](https://www.arduino.cc/reference/en/language/structure/arithmetic-operators/assignment/)  
* **en** (Para definiciones de pines)	como [**=**](https://www.arduino.cc/reference/en/language/structure/arithmetic-operators/assignment/)  

### Operadores Aritmeticos
* **incrementar**						como [**++**](https://www.arduino.cc/reference/en/language/structure/compound-operators/increment/)  
* **decrementar**						como [**--**](https://www.arduino.cc/reference/en/language/structure/compound-operators/decrement/)  
* **sumar**								como [**+=**](https://www.arduino.cc/reference/en/language/structure/compound-operators/compoundaddition/)  
* **restar**							como [**-=**](https://www.arduino.cc/reference/en/language/structure/compound-operators/compoundsubtraction/)  
* **multiplicar**						como [**\*=**](https://www.arduino.cc/reference/en/language/structure/compound-operators/compoundmultiplication/)  
* **dividir**							como [**/=**](https://www.arduino.cc/reference/en/language/structure/compound-operators/compounddivision/)  

### Operadores de comparacion
* **igual**/**igualQue**/**esIgualQue**					como [**==**](https://www.arduino.cc/reference/en/language/structure/comparison-operators/equalto/)  
* **distinto**/**distintoQue**/**esDistintoQue**		como [**!=**](https://www.arduino.cc/reference/en/language/structure/comparison-operators/notequalto/)  
* **distintoDe**/**esDistintoDe**						como [**!=**](https://www.arduino.cc/reference/en/language/structure/comparison-operators/notequalto/)  
* **menor**/**menorQue**/**esMenorQue**					como [**<**](https://www.arduino.cc/reference/en/language/structure/comparison-operators/lessthan/)  
* **mayor**/**mayorQue**/**esMayorQue**					como [**>**](https://www.arduino.cc/reference/en/language/structure/comparison-operators/greaterthan/)  
* **menorIgual**/**menorIgualQue**/**esMenorIgualQue**	como [**<=**](https://www.arduino.cc/reference/en/language/structure/comparison-operators/lessthanorequalto/)  
* **mayorIgual**/**mayorIgualQue**/**esMayorIgualQue**	como [**>=**](https://www.arduino.cc/reference/en/language/structure/comparison-operators/greaterthanorequalto/)  
* **esVerdad**											como [**== true**](https://www.arduino.cc/en/Tutorial/HomePage)  
* **esFalso**											como [**== false**](https://www.arduino.cc/en/Tutorial/HomePage)  
* **noEsVerdad**										como [**!= true**](https://www.arduino.cc/en/Tutorial/HomePage)  
* **noEsFalso**											como [**!= false**](https://www.arduino.cc/en/Tutorial/HomePage)  
* **hasta**												como [**!=**](https://www.arduino.cc/reference/en/language/structure/comparison-operators/notequalto/)  

### Facilidades
* **finPrograma**						como [**return 0;**](https://www.arduino.cc/en/Tutorial/HomePage)  
* **definir**							como [**const**](https://www.arduino.cc/reference/en/language/variables/variable-scope-qualifiers/const/) [**int**](https://www.arduino.cc/reference/en/language/variables/data-types/int/)

### Nuevas Funciones


### Funciones
