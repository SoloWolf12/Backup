#include <stdio.h>
#include <conio.h>

void cargar(char nombre[5][41], int edades[5])
{
    for (int f = 0; f < 5; f++)
    {
        printf("ingrese nombre:");
        gets(nombre[f]);
        printf("ingrese edad:");
        scanf("%d", &edades[f]);
        fflush(stdin);
    }
}

void mayorEdad(char nombres[5][41], int edades[5])
{
    printf("personas con mayoria de edad: \n");
    for (int i = 0; i < 5; i++)
    {
        if (edades[i] > 18)
        {
            printf("%s.\n", nombres[i]);
        }
    }
}

int main()
{
    char nombres[5][41];
    int edades[5];

    cargar(nombres, edades);
    mayorEdad(nombres, edades);
}