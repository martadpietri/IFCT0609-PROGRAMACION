#include<stdio.h>
int main(void)
{
    /*Elaborar un programa que lea un numero N no primo y me dé como 
resultado el menor divisor para N que me dé como resultado una división exacta
                              no vale 1*/
    int n,i;
    printf("Introduce numero NO primo:");
    scanf("%d",n);
    i=1;
    do
    {
        i++;
        if (n%i==0)
        {
            printf(" %d",i);
        }
    } while (n%i!=0);
    return 0;
}