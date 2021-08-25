#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char a[5]="aeiou";
    char cad[100];
    int cant=0;
    printf("Ingrese una cadena de caracteres: ");
    gets(cad);
    int length=strlen(cad)-1;
    for(int i=0; i<5; i++)
    {
        cant=0;
        for(int f=0; f<=length; f++)
        {
            if(cad[f] == a[i])
            {
                cant++;
            }
        }
        printf("cantidad de %c: %d\n", a[i], cant);
    }
}
