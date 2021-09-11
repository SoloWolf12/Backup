#include <stdio.h>
#include <conio.h>
#include<string.h>

void cargar(char nombres[5][41], int notas[5])
{

    for (int i = 0; i < 5; i++)
    {
        printf("ingrese nombre del alumno:");
        gets(nombres[i]);
        printf("ingrese la nota: ");
        scanf("%d", &notas[i]);
        fflush(stdin);
    }
}

void ordenar(char nombres[5][41], int notas[5])
{
    char auxNombre[41];
    int auxNota;

    for (int k = 0; k < 4; k++)
    {
        for (int f = 0; f < 4 - k; f++)
        {
            if (notas[f] < notas[f + 1])
            {
                auxNota = notas[f];
                notas[f] = notas[f + 1];
                notas[f + 1] = auxNota;

                strcpy(auxNombre, nombres[f]);
                strcpy(nombres[f], nombres[f + 1]);
                strcpy(nombres[f + 1], auxNombre);
            }
        }
    }
}

void imprimir(char nombres[5][41], int notas[5])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%s saco un %d \n", nombres[i], notas[i]);
    }
}

int main()
{
    char nombres[5][41];
    int notas[5];
    cargar(nombres, notas);
    ordenar(nombres, notas);
    imprimir(nombres, notas);

    getch();
    return 0;
}
