#include <stdio.h>

int main() {
  /*
    variables en C

    las variables son contenedores para alamcenar valores de datos, como numeros y caracteres.

    En C, hay diferentes tipos de variables (definidas por diferentes palabras clave), por ejempo:

      *int - almacena enteros (numeros enteros), sin decimales, como 123 o -123

      *float - almacena numeros de coma  flotantes o decimales, como 19.99 o -19.99
      *char - almacena caracteres individuales como 'a' o 'b'. Los valores de char estan entre comillas simles
  */

  /*
    Declaracion (Crear) variables

    para crear una variable en C especifique el tipo y signele un valor

    *sintaxis

     tipo nombreVariable = valor

     Donde tipo es uno de los tipos de variables de C (como int) y nombreVariable es el nombre de la variable (como x miNombre)
. El signo = se utiliza para asignar el valor de una variable.
 */

// Crear una variable que almacene un numero entero

/*
Tambien puede adignar una variable sin asigar el valor y colocarselo mas tarde 
*/

// declaracion de la variable
/* int myNum; */

// Asignamos el valor de la variable 
/* myNum = 15; */

/*
si intentamos imprimir una variable en C no va a ocurrir nada si no le damos el formato especifico 
*/

//int miNumero = 15;
//printf(myNum); // y nada va a ocurrir
  
  /*
  para imprimir o hacer uso de variables en C debemos familiarizarnos con los especificadores de formatos
  */

 // Especificadores de formatos 

 /*
 los especificadores de formatos se usan junto con la funcion printf() para decirle al compilador que tipos de datos esta almacenando la variable

 Un especificador de formato comienza con un signo de porcentaje % seguido de un caracter 

 Por ejemplo, para generar el valor de una variable int, debe usar el especificador de formato %d o %i y estar entre comillas dobles, dentro de la funcion printf() 
 */

/* int myNumero = 15;
printf("%d", myNumero); // salida es 15 */

// Para imprimir otros tipos, use %c char y %f para float 

// decimales o de flotante

  /* float miNumeroDecimal = 9.33; */

  //para un caracter

  /* char miletra = 'N'; */

  // imprecion de variables 
  
 /*  printf("%f\n", miNumeroDecimal);
  printf("%c\n", miletra); */

  /*
  para cambiar texto y una variable, separelos con una coma deentro de la funcion printf
  */

 /* int miNumero = 50;

 print("mi numero favorito es el: %d", miNumero); */

 /*
 para imprimir diferentes tipos de variables en un solo printf() se puede hacer lo siguiente
 */

 /*  int miNumero = 30;
  char miLetra = 'L';

  printf("%d, miNumero, %c , miLetra\n")
  printf("mi numero es %d y mi leta es %c", miNumero, miLetra); */

  
  

  return 0;
}