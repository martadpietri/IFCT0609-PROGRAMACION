#include<stdio.h>
int main(void)
{
    int a[4]={1,2,3,4},b[4];
    int i;
    for ( i=0; i<4; i++)
    {
        b[i]=a[i];
    }
    for ( i=0;i<4;i++)
    {
        printf("a[%d]=%d ",i,a[i]);
    }
    printf("\n");
    for ( i=0;i<4;i++)
    {
        printf("b[%d]=%d ",i,b[i]);
    }
    return 0;
}