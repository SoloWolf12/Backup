#include <stdio.h>
#include <conio.h>

struct datosPaises
{
    char nombre[40];
    int cantHabitantes;
};

int main()
{
    struct datosPaises p1, p2, p3;

    printf("ingrese nombre de pais 1: ");
    gets(p1.nombre);
    printf("ahora la cantidad de habitantes:");
    scanf("%d", &p1.cantHabitantes);
    fflush(stdin);

    printf("ingrese nombre de pais 2: ");
    gets(p2.nombre);
    printf("ahora la cantidad de habitantes:");
    scanf("%d", &p2.cantHabitantes);
    fflush(stdin);

    printf("ingrese nombre de pais 3: ");
    gets(p3.nombre);
    printf("ahora la cantidad de habitantes:");
    scanf("%d", &p3.cantHabitantes);
    fflush(stdin);

    if (p1.cantHabitantes > p2.cantHabitantes && p1.cantHabitantes > p3.cantHabitantes)
    {
        printf("el pais %s tiene mas habitantes con un total de %d", p1.nombre, p1.cantHabitantes);
    }
    else if (p2.cantHabitantes > p1.cantHabitantes && p2.cantHabitantes > p3.cantHabitantes)
    {
        printf("el pais %s tiene mas habitantes con un total de %d", p2.nombre, p2.cantHabitantes);
    }
    else
    {
        printf("el pais %s tiene mas habitantes con un total de %d", p3.nombre, p2.cantHabitantes);
    }
}