#include<stdio.h>
int main(void)
{
    float sueldo;
    printf("Indique su sueldo:");
    scanf("%f",&sueldo);
    if (sueldo>3000)
    {
        printf("Debe abonar impuestos.");
    }
    return 0;
}