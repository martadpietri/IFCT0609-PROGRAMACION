#include<stdio.h>
int main(void)
{
    int a,b,c,d,suma;
    float promedio;
    printf("Introduzca numero:");
    scanf("%d",&a);
    printf("\nIntroduzca numero:");
    scanf("%d",&b);
    printf("\nIntroduzca numero:");
    scanf("%d",&c);
    printf("\nIntroduzca numero:");
    scanf("%d",&d);
    suma=a+b+c+d;
    promedio=(float)suma/4;
    printf("La suma de los cuatro numeros es %d y la media %.2f",suma,promedio);
    return 0;
}