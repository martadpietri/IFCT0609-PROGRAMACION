#include<stdio.h>
struct empleado
{
    char nombre;
    char sexo;
    int sueldo;
};
/*Imprima los datos del empleado con mayor y menor salario*/
int main(void)
{
    struct empleado *emp;
    int n,i;
    printf("Introduzca numero total de empleado: \n");
    scanf("%d",&n);
    p=(int**)malloc((n)*sizeof(int));
    for(i=0;i<(n+1);i++)
    {
        p[i]=(int*)malloc(3*sizeof(int));
    }
    for ( i=0; i<n; i++)
    {
        printf("Nombre de empleado %d",i);
        scanf("%c",emp[i][0]);
        printf("Sexo de empleado %d",i);
        scanf("%c",emp[i][1]);
        printf("Sueldo de empleado %d",i);
        scanf("%d",emp[i][2]);
    }
    /*for (i=0;i<n,i++)
    {
        if emp[i]>emp[i+1]
        {

        }
    } PREGUNTAR A SARA PARA METER AHI EL METODO BURBUJA CON LA VARIABLE DEL SUELDO PARA REORDENARLO Y ASI SACAR EL MAYOR Y EL MENOR MAS FACIL*/
}