#include<stdio.h>
#include <string.h>
int main(void)
{
    int num,bin,hex,i,resto,base;
    char opcion;
    printf("Introduce numero: ");
    scanf("%d",&num);
    printf("Binario (B) o Hexadecimal (H): ");
    scanf("%c",&opcion);
    opcion=getchar(); 
    bin=0;
    base=0;
    switch (opcion)
    {
    case 'B':
        while (num>0)
        {
            resto=num%2;
            num=bin+resto*((int)pow(10,(double)base));
            base++;
            num=num/2;
        }
        printf("El numero en binario es: %d", bin);
        break;
    
    case 'H':
        printf("hexa");
        break;
    }
    return 0;
}