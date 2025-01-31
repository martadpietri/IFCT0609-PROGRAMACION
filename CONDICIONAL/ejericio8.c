#include<stdio.h>
int main(void)
{
    int a,b,c;
    printf("Introduce numero:");
    scanf("%d",&a);
    printf("Introduce numero:");
    scanf("%d",&b);
    printf("Introduce numero:");
    scanf("%d",&c);
    if (a>b && a>c && a!=b && a!=c && b>c)
    {
        printf("%d",a);
        printf("\n%d",b);
        printf("\n%d",c);
    }
    if (a>b && a>c && a!=b && a!=c && c>b)
    {
        printf("%d",a);
        printf("\n%d",c);
        printf("\n%d",b);
    }
    if (b>a && b>c && b!=a && b!=c && a>c)
    {
        printf("%d",b);
        printf("\n%d",a);
        printf("\n%d",c);
    }
    if (b>a && b>c && b!=a && b!=c && c>a)
    {
        printf("%d",b);
        printf("\n%d",c);
        printf("\n%d",a);
    }
    if (c>a && c>b && c!=a && c!=b && a>b)
    {
        printf("%d",c);
        printf("\n%d",a);
        printf("\n%d",b);
    }
    if (c>a && c>b && c!=a && c!=b && b>a)
    {
        printf("%d",c);
        printf("\n%d",b);
        printf("\n%d",a);
    }
    if (a>b && a==c)
    {
        printf("%d",a);
        printf(" %d",c);
        printf("\n%d",b);
    }
    if (b>a && a==c)
    {
        printf("%d",b);
        printf("\n%d",c);
        printf(" %d",a);
    }
    if (a>c && a==b)
    {
        printf("%d",a);
        printf(" %d",b);
        printf("\n%d",c);
    }
    if (c>a && a==b)
    {
        printf("%d",c);
        printf("\n%d",a);
        printf(" %d",b);
    }
    if (b>a && b==c)
    {
        printf("%d",b);
        printf(" %d",c);
        printf("\n%d",a);
    }
    if (a>b && b==c)
    {
        printf("%d",a);
        printf("\n%d",c);
        printf(" %d",b);
    }
    return 0;
}
    