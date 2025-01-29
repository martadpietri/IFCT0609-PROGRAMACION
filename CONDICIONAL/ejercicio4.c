#include<stdio.h>
float main(void)
{
    int a;
    printf("Introduzca numero (positivo de menos de tres digitos):");
    scanf("%d",&a);
    if (a>0 && a<100)
    /*Para usar dos condiciones en if en C deberia de usarse como "AND"
    los signos "&&"*/
    {
        if (a<10)
        {
            printf("El numero solo tiene un digito.");
        }
        else 
        {
            printf("El numero tiene dos digitos.");
        }
    }
    else
    {
        printf("El numero no es valido, tiene que ser positivo y tener menos de tres digitos.");
    }
}