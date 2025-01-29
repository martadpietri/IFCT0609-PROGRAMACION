#include<stdio.h>
int main(void)
{
    int dia;
    printf("Introduce un numero del 1-7:");
    scanf("%d",&dia);
    if (dia==1)
    {
        printf("Lunes");
    }
    if (dia==2)
    {
        printf("Martes");
    }
    if (dia==3)
    {
        printf("Miercoles");
    }
    if (dia==4)
    {
        printf("Jueves");
    }
    if (dia==5)
    {
        printf("Viernes");
    }
    if (dia==6)
    {
        printf("Sabado");
    }
    if (dia==7)
    {
        printf("Domingo");
    }
    return 0;
}