#include<stdio.h>
int main(void)
{
    int i;
    i=0;
    printf("0");
    do
    {
        i++;
        printf(", %d",i);
    } while (i<100);
    return 0;
}