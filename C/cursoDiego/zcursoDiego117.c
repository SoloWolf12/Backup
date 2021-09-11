#include <stdio.h>
#include <conio.h>

void cargar(int numCargados[4][4])
{
    int f, c;

    for (f = 0; f < 3; f++)
    {
        for (c = 0; c < 4; c++)
        {
            printf("ingrese numero, fila %d y columna %d: \n", (f+1), (c+1));
            scanf("%d", &numCargados[f][c]);
        }
    }
}

int main()
{
    int numeros[4][4];
    cargar(numeros);

    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 4; c++)
        {
            printf("%d_", numeros[f][c]);
        }
        printf("\n");
    }

    printf("ahora la fila 1 y 3..\n");

    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 4; c++)
        printf("%d_", numeros[f][c]);
        f++;
    }
    getch();
    return 0;
}