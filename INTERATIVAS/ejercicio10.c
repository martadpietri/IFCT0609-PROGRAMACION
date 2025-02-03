#include<stdio.h>
int main(void)
{
    int num,bin,hex,i;
    char opcion;
    printf("Introduce numero:");
    scanf("%d",&num);
    printf("Binario (B) o Hexadecimal (H)");
    scanf("%c",&opcion);
    opcion=getchar(); 
    switch (opcion)
    {
    case 'B':
        while (condition)
        {
            /* code */
        }
        
        break;
    
    case 'H':
        printf("hexa");
        break;
    }
        /*Para obtener el binario de un número decimal, iremos 
        dividiendo el numero entre 2. Si el resto de la división es impar, 
    colocaremos un “1”, si es par, colocaremos un “0”. La división finaliza 
cuando el resultado es 1. Se tendrán que imprimir los resultados en orden inverso.*/
        
    return 0;
}