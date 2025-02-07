#include<stdio.h>
#include <math.h>

int elementoMayor(int longitud, int array[])
{
    int mayor=0,i;
    for (i=0; i<longitud; i++)
    {
        if (mayor<array[i]) 
        {
            mayor=array[i];
        }
    } 
    return mayor;
}
int main(void)
{
    int tamano=10, resultado,i;
    int vector[10];
    for ( i = 0; i <10 ; i++)
    {
        printf("Valor %d: ",i+1);
        scanf("%d",&vector[i]);
    }

    resultado=elementoMayor(tamano,vector);
/*Aqui lo que hago es llamar la funcion que hice anteriormente.
Hay que escribir los valores del programa en el mismo orden que
        se puso la funcion que quieras asignar*/
    printf("El mayor es: %d",resultado);
    return 0;  

}