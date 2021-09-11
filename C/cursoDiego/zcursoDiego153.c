#include <stdio.h>
#include <conio.h>

#define TAMANO 5

void cargar (int *pe)
{
    for (int f=0;f<TAMANO;f++)
    {
        printf("ingrese elemento: ");
        scanf("%d",&*pe);
        pe++;
    }
}

void imprimir (int *pe)
{
    for (int f=0;f<TAMANO;f++)
    {
        printf("%d\n",*pe);
        pe++;
    }
}

int main()
{
    int vec[TAMANO];
    cargar(vec);
    imprimir(vec);

    getch();
    return 0;
}