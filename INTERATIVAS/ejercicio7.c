#include<stdio.h>
int main(void)
{
    int x,n,i;
    printf("Indique el numero:");
    scanf("%d",&n);
    x=0;
    for ( i=1; i<=10; i++)
    {
        x=n*i;
        printf("\n%d x %d= %d",n,i,x);
    }
    return 0;
}