#include<stdio.h>
int main(void)
{
    float a,b;
    printf("Introduzca los numeros:");
    scanf("%f %f",&a,&b);
    /*Para escribir el comando para pedir dos valores a la vez
    hay que poner una COMA para separar la asiganción de ellos, 
    pero para la parte de escribir la variable hay que ponerla de seguido
    dentro de las comillas.*/
    if (a>b)
    {
        printf("%.2f es mayor que %.2f",a,b);
        /*Por defecto nos saca seis decimales pero para acotarlo y que salga,
        en este ejemplo 2, es escribiendo entre el % y la tipo de valor un "".2""*/
    }
    else
    {
        printf("%.2f es mayor que %.2f",b,a);
    }
    return 0;
}