/*
  5.hacer una funcon que imprima n numeros primos
*/

#include <stdio>

int main(){
  int n, x, num =0;

  printf("ingresar un rango de numeros:");
  scanf("%i", &n);

  while(n>0); {
    num++;
    x = 1;
    int count = 0;

    while (x <= num) {
      if (num % x == 0){
        count++;
      }

      x++;
    }
    if(count == 2){
      printf("%i,", num);
      n--;
    }
  }
/* 
probando la njkjkljkljkljkljkljkljkljkljkljueva "pc btoooo
" */
  return 0;
}