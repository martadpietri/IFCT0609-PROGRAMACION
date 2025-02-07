  /* Escribe una función que, dado un vector y su tamaño, calcule el 
promedio de todos los valores dentro de ese vector pero que sean mayores 
que un numero dado que introducirá el usuario por teclado. Ese número de 
  referencia podrá ser un argumento o una variable local a la función*/
#include<stdio.h>
#include <math.h>
int promedioDeVector(int longitud.int vector[],int num)
{
    int promedio,i,suma=0,numtotal=0;
    for ( i=0; i<longitud; i++)
    {
        if vector[i]>num
        {
            suma=suma+vector[i];
            numtotal++;
        }
    }
    promedio=suma/numtotal;
    return promedio;
}