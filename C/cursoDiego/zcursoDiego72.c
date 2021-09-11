#include <stdio.h>
#include <conio.h>

int main()
{
    char nombre1[21];
    char nombre2[21];
    int edad1;
    int edad2;

    printf("escriba el nombre de la primer persona: ");
    gets(nombre1);
    printf("ahora su edad: ");
    scanf("%i", &edad1);

    fflush(stdin);

    printf("escriba el nombre de la segunda persona: ");
    gets(nombre2);
    printf("ahora su edad: ");
    scanf("%i", &edad2);

    if (edad1 > edad2)
    {
        printf("El mas grande es %s con %i anios", nombre1, edad1);
    }
    else
    {
        printf("El mas grande es %s con %i anios", nombre2, edad2);
    }

    getch();
    return 0;
}