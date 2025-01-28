#include <stdio.h>
int main(void)
{
    int a,b,resultado;
    printf("Introduce el valor de a: ");
    scanf("%d",&a);
    /*"%d" es para que me lea un número entero decimal y el &a para que ese
    número que está leyendo me lo asigne a la variable a*/
    printf("Introduce el valor de b:");
    scanf("%d",&b);
    resultado=a+b;
    printf("La suma de ambos números es: %d ", resultado);
    /*hay que fijarse que después de cualquier sentancia hay que poner
    PUNTO Y COMA*/
    return 0;
}