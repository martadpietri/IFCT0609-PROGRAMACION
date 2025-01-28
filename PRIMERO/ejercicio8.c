#include<stdio.h>
int main(void)
{
    int tiempo,hora,min,seg;
    printf("Introduce la marca del corredor:");
    scanf("%d",&tiempo);
    hora=tiempo/3600;
    min=tiempo/60-hora*60;
    seg=tiempo-60*min;
    printf("El tiempo del corredor fue %d h %d min %d s",hora,min,seg);
    return 0;
}