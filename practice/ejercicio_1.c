/* hacer una funcion que dia s un numero es primo*/

int main() {

int valor1;
int valor2;


valor1 = printf("Ingrese un valor del divisor: ");
scanf("%d",&valor1);
valor2 = printf("Ingrese un valor del dividendo: ");
scanf("%d",&valor2);

int residuo;
residuo = valor1 % valor2;


if (residuo == 0)
{
    printf("el numero %d es primo");
}
    else{
     printf("el numero %d no es primo");
}
        

return 0;
}