#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char nom1[30];
    char nom2[30];

    printf("ingresar primer nombre: \n");
    gets(nom1);
    printf("ingresar segundo nombre: \n");
    gets(nom2);

    if (strcmp(nom1,nom2) == 0)

    getch();
    return 0;
}