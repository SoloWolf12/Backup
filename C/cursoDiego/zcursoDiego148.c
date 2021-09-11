#include <stdio.h>
#include <conio.h>

#define TAMANO 5

void cargar(int vec[TAMANO])
{
    for (int f = 0; f < TAMANO; f++)
    {
        printf("ingrese elemento:");
        scanf("%d", &vec[f]);
    }
}

void mayorMenor(int vec[TAMANO], int *pmayor, int *pmenor)
{
    *pmayor = vec[0];
    *pmenor = vec[0];

    for (int f = 1; f < TAMANO; f++)
    {
        if (vec[f] > *pmayor)
        {
            *pmayor = vec[f];
        }
        else
        {
            if (vec[f] < *pmenor)
            {
                *pmenor = vec[f];
            }
        }
    }
}

int main()
{
    int vec[TAMANO];
    cargar(vec);
    int ma, me;
    mayorMenor(vec, &ma, &me);
    printf("mayor elemento del vector: %d \n", ma);
    printf("menor elemento del vector: %d", me);

    getch();
    return 0;
}