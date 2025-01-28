#include<stdio.h>
int main(void)
{
    float precio;
    int moneda50,moneda20,moneda10,moneda5;
    printf("Precio a devolver (tiene que ser multiplo de 5):");
    scanf("%f",&precio);
    precio=precio*100;
    moneda50=precio/50;
    moneda20=(precio-50*moneda50)/20;
    moneda10=(precio-50*moneda50-20*moneda20)/10;
    moneda5=(precio-50*moneda50-20*moneda20-10*moneda10)/5;
    printf("Se devolveria: \n %d monedas de 50cent. \n %d monedas de 20cent. \n %d monedas de 10 cent. \n %d monedas de 5 cent.", moneda50, moneda20, moneda10,moneda5);
    return 0;
}