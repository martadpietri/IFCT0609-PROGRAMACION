#include<stdio.h>
int main(void)
{
    int a,b,c;
    printf("Introduce primer numero:");
    scanf("%d",&a);
    printf("Introduce segundo numero:");
    scanf("%d",&b);
    printf("Introduce tercer numero:");
    scanf("%d",&c);
    if (c>b && b>a)
    {
        printf("Se han introducido en orden creciente");
    }
    else
    {
        printf("No se han introducido en orden creciente");
    }
    return 0;
}