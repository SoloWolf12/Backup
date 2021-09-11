#include <stdio.h>
#include <conio.h>

void cargar(int numCargados[4][4])
{
    int f, c;

    for (f = 0; f < 4; f++)
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

    for (int f = 0; f < 4; f++)
    {
        for (int c = 0; c < 4; c++)
        {
            printf("%d_", numeros[f][c]);
        }
        printf("\n");
    }

    printf("ahora la diagonal..\n");

    for (int i = 0; i < 4; i++)
    {
        printf("%d_", numeros[i][i]);
    }
    getch();
    return 0;
}