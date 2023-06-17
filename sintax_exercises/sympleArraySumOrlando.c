# include <stdio.h>

int main(){

int array[2];

for(int i=0; i<2; i++){
printf("Ingrese un valor: ");
scanf("%d",&array[i]);
}

int suma=0;
for(int i=0; i<2; i++){
    suma+=array[i];
}
printf ("suma es %d", suma);
return 0;
}