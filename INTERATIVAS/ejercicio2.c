#include<stdio.h>
int main(void)
{
    /*              Serie fibonaci
              0,1,1,2,3,5,8,13,…(n-1)+(n-2)
    el número es la suma de los dos números anteriores
                   en la sucesión*/
    int n,i,n1,n2,x;
    printf("Introduce n:");
    scanf("%d",&n);
    printf("0, 1");
    n2=0;
    n1=1;
   /*Tiene que guardar n1 y n2 cada vez para 
   usarlos para calcular el siguiente número*/
    for (i=2; i<n; i++)
    {
        n1=n2;
        n1=x;
        if (i<n)
        {
            x=n1+n2;
            printf(", %d",x);
        }
    }
    return 0;    
}