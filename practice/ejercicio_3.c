/*
hacer una funcuin que diga si en una cadena hay solo digitos
*/

#include <stdio.h>
#include <string.h>


int main() {
  char cadena[100];
  int i, cont = 0;

  printf("Digite una cadena : ");
  gets(cadena);

  for (i = 0 ; i < strlen(cadena); i++) {
    if (cadena[i] >= '0' && cadena[i] <= '9' ) {
      cont++;
      /*
      se suma 1 a cont si el caracter que se ve en cadena[i] esta entre 0 o 9
      */
    }
  }

  if(cont == strlen(cadena)) {
    printf("Esta cadena esta compuesta de digitos completamente con:\"%d\"num de digitos", cont );
  }
    
    else if(cont > 0){
      printf("solo tiene contados digitos con:\"%d\"", cont ); 
      printf(" num de digitos");
    }
    
    else if(cont < strlen(cadena)) {
      printf("esta cadena no esta completamente completa de digitos \"%d\"", cont); 
      printf(" num de digitos");
    }
  
  return 0;
}