#include<stdio.h>
int main(void)
{
    int array[18][10],sumatotal,sumavendedor;
    int i,j,totalvendedores[18];
/*Con esto lo que hago es crear un nuevo vector donde asignar los totales
                de los vendedores y simplificarlo.*/
    for (i=0 ; i<18 ; i++)
    {
        for (j=0; j<10 ; j++)
        {
            array[i][j]=1;
        }
    }
    for ( i=0; i<18; i++)
    {
        for (j=0; j<10; j++)
        {
            printf("%d       ",array[i][j]);
        }              
        printf("\n");
    } 
    printf("---------------------------------------------------\n");
    for ( i=0; i<18; i++)
    {
        sumavendedor=0;
/*Hay que resetearlo cada vez porque si no la variable al tener ya un
            valor se va a ir sumando al anterio*/
        for ( j=0; j<10 ; j++)
        {
            sumavendedor=sumavendedor+array[i][j];
        }
    totalvendedores[i]=sumavendedor;
    printf("Los ingresos totales del vendedor %d: %d\n",i+1,sumavendedor);
    }
    printf("---------------------------------------------------\n");
    sumatotal=0;
    for ( i=0 ; i<18 ; i++)
    {
        sumatotal=sumatotal+totalvendedores[i];
    }
    printf("El total de las ganancias de la empresa son %d.",sumatotal);
    return 0;
}