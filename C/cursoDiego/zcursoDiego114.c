#include <stdio.h>
#include <conio.h>

void cargar(int vector[5])
{
    for (int x = 0; x < 5; x++)
    {
        printf("ingrese elemento: \n");
        scanf("%d", &vector[x]);
    }
}

void ordenarMenorMayor(int vector[5])
{
    for (int k = 0; k < 4; k++)
    {
        for (int f = 0; f < 4 - k; f++)
        {
            if (vector[f] < vector[f + 1])
            {
                int aux = vector[f];
                vector[f] = vector[f + 1];
                vector[f + 1] = aux;
            }
        }
    }
}

void ordenarMayorMenor(int vector[5])
{
    for (int k = 0; k < 4; k++)
    {
        for (int f = 0; f < 4 - k; f++)
        {
            if (vector[f] > vector[f + 1])
            {
                int aux = vector[f];
                vector[f] = vector[f + 1];
                vector[f + 1] = aux;
            }
        }
    }
}


void imprimir(int vector[5])
{
    for (int f = 0; f < 5; f++)
    {
        printf("%d\n", vector[f]);
    }
}

int main()
{

    int vector[5];
    cargar(vector);
    ordenarMenorMayor(vector);
    printf("ordenado de men a may: \n");
    imprimir(vector);
    ordenarMayorMenor(vector);
    printf("ordenado de may a men: \n");
    imprimir(vector);
}