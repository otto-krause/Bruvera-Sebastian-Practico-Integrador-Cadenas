#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char cad[50];
    int length, i;
    printf("Inserte una palabra: ");
    scanf("%s", cad);
    length=strlen(cad);
    printf("La cadena resultante es: ");
    for(i=0; i<=length; i++);
    {
        if(cad[i]>='a' && cad[i]<='z')
        {
            cad[i]=cad[i]-32;
        }
        else if(cad[i]>='A' && cad[i]<='Z')
        {
            cad[i]=cad[i]+32;
        }
        printf("%c", cad[i]);
    }
    return 0;
}
