#include<stdio.h>
#include<math.h>
/*Aplicamos tambien esta librería para poder usar el comando SQRT*/
int main(void)
{
    float a,b,c,area,p;
    printf("Introduce los tres lados de un triangulo:");
    scanf("%f %f %f",&a,&b,&c);
    /*equilátero (todos iguales), isósceles (dos iguales)
    escaleno (tres distintos)*/
    /*A^2=p(p-a)(p-b)(p-c), donde p=(a+b+c)/2*/
    p=(a+b+c)/2;
    area=sqrt(p*(p-a)*(p-b)*(p-c));
    /*sqrt es la raíz cuadrada, también podemos usar el comando para elevar al 
    exponente "pow(número, exponenete)"*/
    if (a==b && b==c)
    {
        printf("Es un triangulo equilatero. Y su area es %.2f",a);
    }
    else
    {
        if (a!=b && b!=c && a!=c)
        {
            printf("Es un trangulo escaleno. Y su area es %.2f",area);
        }
        else
        {
            printf("Es un triangulo isosceles. Y su area es %.2f",area);
        }
    }
    return 0;
    
}