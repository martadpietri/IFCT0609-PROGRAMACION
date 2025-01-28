#include <stdio.h>
int main(void)
{
    int a,b,c,d,suma,producto;
    printf("Introduce el primer numero: ");
    scanf("%d",&a);
    printf("Introduce el segundo numero: ");
    scanf("%d",&b);
    printf("Introduce el tercer numero: ");
    scanf("%d",&c);
    printf("Introduce el cuarto numero: ");
    scanf("%d",&d);
    suma=a+b;
    producto=c*d;
    printf("La suma de %d y %d es de %d",a,b,suma);
    printf("\nEl producto de %d y %d es %d",c,d,producto);
    return 0;
}