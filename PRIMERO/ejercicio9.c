#include<stdio.h>
int main(void)
{
    float a,a1,b,b1,c,c1,x,y;
    printf("Introduce a:");
    scanf("%f",&a);
    printf("Introduce a':");
    scanf("%f",&a1);
    printf("Introduce b:");
    scanf("%f",&b);
    printf("Introduce b':");
    scanf("%f",&b1);
    printf("Introduce c:");
    scanf("%f",&c);
    printf("Introduce c'");
    scanf("%f",&c1);
    y=(a1*c-a*c1)/(a1*b-a*b1);
    x=(c-b*y)/a;
    printf("La solucion a este sistema de ecuaciones es x=%f e y=%f",x,y);
    return 0;
}