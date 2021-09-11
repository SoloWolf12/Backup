#include <stdio.h>
#include <conio.h>

#define CANTIDAD 5

void cargar(int vec[CANTIDAD])
{
    for (int f = 0; f < CANTIDAD; f++)
    {
        printf("ingrese elemento");
        scanf("%i", &vec[f]);
    }
}

void imprimir(int vec[CANTIDAD])
{
    for (int f = 0; f < CANTIDAD; f++)
    {
        printf("%d", vec[f]);
    }
    printf("\n");
}

void ordenar(int vec[CANTIDAD], int cant)
{
    if (cant > 1)
    {
        for (int f = 0; f < cant; f++)
        {
            if (vec[f] > vec[f + 1])
            {
                int aux = vec[f];
                vec[f] = vec[f + 1];
                vec[f + 1] = aux;
            }
        }
        ordenar(vec, cant - 1);
    }
}

int main()
{
    int vec[CANTIDAD];
    cargar(vec);
    imprimir(vec);
    ordenar(vec, CANTIDAD);
    imprimir(vec);

    getch();
    return 0;
}