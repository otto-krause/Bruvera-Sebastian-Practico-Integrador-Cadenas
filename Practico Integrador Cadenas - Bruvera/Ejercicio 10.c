#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char cad[50];
    int length, flag=0;
    printf("Inserte una palabra: ");
    scanf("%s", cad);
    length=strlen(cad);
    for(int i=0; i<length; i++)
    {
        if(cad[i]!=cad[length-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        printf("La cadena no es un palindromo");
    }
    else
    {
        printf("La cadena es un palindromo");
    }
    return 0;
}
