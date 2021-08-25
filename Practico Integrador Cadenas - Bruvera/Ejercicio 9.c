#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char cad[50];
    int length;
    printf("Inserte una palabra: ");
    scanf("%s", cad);
    length=strlen(cad);
    printf("La palabra invertida es: ");
    for(int i=length-1; i>=0; i--)
    {
        printf("%c", cad[i]);
    }
    return 0;
}
