/* hacer una funcion que dia s un numero es primo*/

#include <stdio.h>

int main() {

  int valor, count=0;

  printf("Ingrese un valor del divisor: ");
  scanf("%d",&valor);
  for (int i=valor;i>0;i--) {
    if(valor%i==0)
    count++;
  }
  if (count == 2) {
    printf("el numero %d es primo", valor);
  }
  else {
    printf("el numero %d no es primo", valor);
  }

  return 0;
}
