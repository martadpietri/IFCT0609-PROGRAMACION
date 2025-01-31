#include<stdio.h>
int main(void)
{
    float nota;
    int x,y,i;
    x=0;
    y=0;
    for (i==1; i<10; i++)
    {
        printf("Introduzca nota:");
        scanf("%f",&nota);
        if (nota>=7)
        {
            x++;
        }
        else
        {
            y++;
        }
    }
    printf("Sacaron %d mas o igual que un 7 y %d menos que un 7",x,y);
    return 0;
}