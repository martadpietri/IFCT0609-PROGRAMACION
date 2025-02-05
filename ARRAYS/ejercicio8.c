#include<stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
    int n,**p,i,j;
/*Se asigna puntero de puntero porque es un vector que luego lo vamos
        a conventir en tabla que eso es un vector de punteros.
    Lo que hacemos es definir un puntero vacio para después hacer un 
      dimensionamiento dinámico y darle la memoria que se necesite
                para rellenarlo con los valores.*/
    printf("Introduzca n: ");
    scanf("%d",&n);
    p=(int**)malloc((n+1)*sizeof(int));
/*Se usa el malloc para asignar el espacio necesario para una matriz con 
'n' filas. Para signar el espacio. Colocamos el int* al principio porque 
así convertimos el espacio que nos da el 'malloc' en un puntero a entero*/
    for(i=0;i<(n+1);i++)
    {
        p[i]=(int*)malloc(4*sizeof(int));
    }
/*Ahora aquí lo que hacemos es asignar el espacio necesario para el número
de columnas que necesitamos, que en este caso son 4.*/
    for ( i=0; i<(n+1); i++)
    {
        for (j=0; j<4; j++) 
        {
            p[i][j]=pow(i,j+1);
        }
    }
    printf("n------n^2-----n^3-----n^4");
    printf("\n"); 
    for ( i=1; i<(n+1); i++)
    {
        for (j=0; j<4; j++)
        {
            printf("%d       ",p[i][j]);
        }              
        printf("\n"); 
    }
    return 0;
}