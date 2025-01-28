#include<stdio.h>
int main(void)
{
    int codigo,cant;
    float precio,preciototal,preciofinal,preciodescuento,precioiva,dto;
    /*No se puede llamar a una variable de una manera que incluya el nombre de otra variable en medio.
    Ej. Si yo llame a una variable "dto", no puedo llamar a otra precioDTO*/
    printf("Introduce el codigo (no mas de 6 cifras):");
    scanf("%d",&codigo);
    printf("Introduce la cantidad:");
    scanf("%d",&cant);
    printf("Introduce el descuento (en porcentaje):");
    scanf("%f",&dto);
    printf("Introduce el precio:");
    scanf("%f",&precio);
    preciototal=cant*precio;
    preciodescuento=preciototal*(dto/100);
    preciofinal=preciototal-preciodescuento;
    precioiva=preciototal*0.16;
    printf("          ---RAZA---         ");
    printf("\n%d                         %f euros",codigo,precio);
    printf("\n%d                         %f euros",cant,preciototal);
    printf("\n-%f                 %f euros",dto,preciodescuento);
    printf("\n16                         %f euros",precioiva);
    printf("\nPRECIO TOTAL               %f euros",preciofinal);
    return 0;
}