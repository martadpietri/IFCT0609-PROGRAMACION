#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int dado1,dado2,x;
    x=0;
    do
    {
        dado1=(int)(rand()*10);
        dado2=(int)(rand()*10);
        if (dado1>=7) dado1=6;
        if (dado2>=7) dado2=6;
        x++;
        printf("Esta es la tirada %d\n",x);
    } while (dado1!=6 || dado2!=6 || x<=12);

    if (x<=12)
    {
        if (dado1==6)
        {
            do
            {
            printf("Esta es la tirada %d\n",x);
            if (dado2>=7) dado2=6;
            x++;
            } while (dado2!=6 || x<=12);
        }
        else
        {
            do
            {
            printf("Esta es la tirada %d\n",x);
            if (dado1>=7) dado1=6;
            x++; 
            } while (dado1!=6 || x<=12);
        }
    }
    if (x==13)
    {
        printf("Se han agotado los intentos.");
    }
    else
    {
        printf("\nLos dos dados han llegado a 6");
    }

    return 0;
}