#include<stdio.h>
int main(void)
{
    float precio,total;
    int cantidad;
    printf("Introduce el precio: ");
    scanf("%f",&precio);
    printf("Cantidad: ");
    scanf("%d",&cantidad);
    total=precio*cantidad;
    printf("El precio total que hay que abonar es %f",total);
    return 0;
}