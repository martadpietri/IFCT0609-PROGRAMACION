#include<stdio.h>
int main(void)
{
    char *cadena="Hola mundo";
    char *p;
    int i;
    p=cadena+1; 
    /*asignamos a 'p' esa dirección de la cadena (que siempre es la primera) +1
    que sería 'o'. Esto se hace para movernos por la cadena sin variar la dirección
    de la cadena porque quiero que siempre tenga en cuenta la primera*/
    for ( i=0 ; i<5 ; i++ )
    {
        printf(" %c",*p);
        p+=2;
        /*para que vaya de dos en dos*/
    }
    return 0;
}