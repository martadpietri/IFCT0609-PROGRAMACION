#include<stdio.h>
int main(void)
{
    int i,sumapares,sumaimpares,x,y,promediopares,promedioimpares;
    x=0;
    y=0;
    sumaimpares=0;
    sumapares=0;
    promediopares=0;
    promedioimpares=0;
    for (i=1; i<=200; i++)
    {
        if (i%2==0)
        {
            x++;
            sumapares+=i;
        }
        if (i%2!=0)
        {
            y++;
            sumaimpares+=i;
        }
    }
    promediopares=sumapares/x;
    promedioimpares=sumaimpares/y;
    printf("\nEl sumatorio de todos los numeros pares es %d y el promedio %d",sumapares,promediopares);
    printf("\nEl sumatorio de todos los numeros impares es %d y el promedio %d",sumaimpares,promedioimpares);
    return 0;
}
