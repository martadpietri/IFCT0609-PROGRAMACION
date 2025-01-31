#include<stdio.h>
int main(void)
{
    char letra;
    printf("Introduce letra:");
    scanf("%c",&letra);
    if (letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u')
    /*Hay que escribir la letra con una apostrofe en vez de comillas*/
    /*El OR es ||*/
    {
        printf("%c es una vocal",letra);
    }
    else
    {
        printf("No es una vocal");
    }
    return 0;
}