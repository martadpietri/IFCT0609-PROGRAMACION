#include<stdio.h>
#include <string.h>
#define MAX 100
int main(void)
{
    /*Realice un programa en C que permita leer una cadena de caracteres y que
devuelva el número de caracteres que tiene dicha cadena e imprimir dicha cadena al revés.*/
    char cadena[MAX],reves[MAX];
    int i,largo;
    largo=0;
    printf("Introduzca cadena: ");
    scanf("%s",cadena);
	/*while (cadena[largo]!='\0') largo++;*/
    largo=strlen(cadena);
    printf("La longitud de la cadena: %d\n",largo);
    printf("La cadena al reves es: ");
    for ( i=0; i<=largo; i++)
    {
        reves[i]=cadena[largo-i];
        printf("%c ",reves[i]);
    }   
    return 0;
}