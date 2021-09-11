//ingresar 2 nombres y ordenarlos alfabeticamente, mejorar y preguntar cuantos nombres se quieren verificar
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char nom1[30];
    char nom2[30];
    int orden;
    int comp;

    int repeat;

    do
    {
        repeat = false;
        printf("ingresar primer nombre: \n");
        gets(nom1);
        printf("ingresar segundo nombre: \n");
        gets(nom2);

        comp = strcmp(nom1, nom2);

        if (comp > 0)
        {
            printf("nom1mas grande\n");
            orden = 1;
        }
        else if (comp < 0)
        {
            printf("nom2mas grande\n");
            orden = 2;
        }
        else
        {
            printf("iguales, repetir\n");
            repeat = true;
        }
    } while (repeat == true);

    if (orden = 1)
    {
        printf("por orden alfabetico \n%s\n%s", nom1, nom2);
    }
    else
    {
        printf("por orden alfabetico \n%s\n%s", nom2, nom1);
    }
    getch();
    return 0;
}
