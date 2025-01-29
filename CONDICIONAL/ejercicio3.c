#include<stdio.h>
int main(void)
{
    int a,b;
    printf("Escriba primer numero:");
    scanf("%d",&a);
    printf("Escriba segundo numero:");
    scanf("%d",&b);
    if (a>b)
    {
        /*Suma y diferencia*/
        printf("La suma de ambos numeros es %d y la resta %d",a+b,a-b);
    }
    else
    {
        /*Producto y división*/
        printf("El producto de ambos numeros es %d y la division es %f",a*b,(float)a/b);
    }
    return 0;
}