#include<stdio.h>
int main(void)
{
    int cantcola,cantlimon,cantnaranja;
    float preciocola,precionaranja,preciolimon,totalcola,totalnaranja,totallimon;
    printf("Precio cola:");
    scanf("%f",&preciocola);
    printf("Cantidad de ventas de cola:");
    scanf("%d",&cantcola);
    printf("Precio limon:");
    scanf("%f",&preciolimon);
    printf("Cantidad de ventas de limon:");
    scanf("%d",&cantlimon);
    printf("Precio naranja:");
    scanf("%f",&precionaranja);
    printf("Cantidad de ventas de naranja:");
    scanf("%d",&cantnaranja);
    totalcola=preciocola*cantcola;
    totallimon=preciolimon*cantlimon;
    totalnaranja=precionaranja*cantnaranja;
    printf("PRODUCTOS       VENTAS       PRECIO       TOTAL \n ------------------------------------------------");
    printf("\n Cola            %d          %f           %f",cantcola,preciocola,totalcola);
    printf("\n Limon           %d          %f           %f",cantlimon,preciolimon,totallimon);
    printf("\n Naranja         %d          %f           %f",cantnaranja,precionaranja,totalnaranja);
    return 0;
}