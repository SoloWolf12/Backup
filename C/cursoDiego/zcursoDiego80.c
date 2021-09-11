#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char nom1[30];
    char nom2[30];
    char nom3[30];

    printf("ingrese un nombre.. \n");
    gets(nom1);
    printf("ingrese otro nombre.. \n");
    gets(nom2);

    if (strlen(nom1) > strlen(nom2))
    {
        strcpy(nom3, nom1);
        printf("el mas largo es %s", nom3);
    }
    else if (strlen(nom1) < strlen(nom2))
    {
        strcpy(nom3, nom2);
        printf("el mas largo es %s", nom3);
    }
    else
    {
        printf("son iguales");
    }

    return 0;
}