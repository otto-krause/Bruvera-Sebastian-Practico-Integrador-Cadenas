#include<stdio.h>
#include<stdlib.h>
#include<string.h>

const char *verificar(char a[])
{
    if(a[0]>=97 && a[0]<=127)
    {
        a[0]=a[0]-32;
    }
    return a;
}
int main()
{
    char apellido[30];
    int n, b, total;
    for(int i = 1; i <= 3; i++)
    {
        printf("ingrese el apellido del alumno %d: ", i);
        b = 0;
        scanf("%s", apellido);
        printf("ingrese las notas del alumno %s:\n", verificar(apellido));
        for(int f = 1; f <= 5; f++)
        {
            scanf("%d", &n);
            b += n;
        }
        total += b/5;
        printf("el promedio de %s es: %d\n", verificar(apellido), b/5);
    }
    printf("el promedio del curso es %d\n", total/3);
    return 0;
}
