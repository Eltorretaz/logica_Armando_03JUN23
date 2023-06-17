#include <stdio.h>
#include <string.h>
 
int main( int argc, char * argv[] ) {
 
       int contador = 0;
       int i        = 0;
       int j        = 0;
 
       char cadena[100]= "No estoy gordo, solo estoy inundado, No estoy gordo, solo estoy rechonchito";
       int largo    = strlen(cadena);
       char palabra[strlen(cadena)];
 
       int bolle = 0;
 
       for( i = 0; i < largo ; i++) {
 
           if ( cadena[i] == ' ' && cadena[i+1] != ' ') {
                contador ++;
                printf("Palabra: %c \n", palabra);
                memset( palabra, '\0', sizeof(palabra));
                j=0;
           } else {
                palabra[j]=cadena[i];
                j++;
           }
       }
       printf("Palabra: %c \n", palabra);
       printf("la cantidad de palabras es %c \n", contador);
}