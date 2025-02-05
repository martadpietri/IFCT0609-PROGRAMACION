#include<stdio.h>
int main(void)
{
    int i,*p,year[]={31,28,31,30,31,30,31,31,30,31,30,31};
    for ( i=0; i<12; i++)
    {
        *p=year[i];
        printf("El mes %d tiene %d dias.\n",i+1,year[i]);
    }
    return 0;
}