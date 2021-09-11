#include <stdio.h>
#include <conio.h>

void cargar(int numCargados[2][5])
{
    int f, c;

    for (c = 0; c < 5; c++)
    {
        for (f = 0; f < 2; f++)
        {
            printf("ingrese numero, fila %d y columna %d: \n", (f+1), (c+1));
            scanf("%d", &numCargados[f][c]);
        }
    }
}

int main()
{
    int numeros[2][5];
    cargar(numeros);

    for (int f = 0; f < 2; f++)
    {
        for (int c = 0; c < 5; c++)
        {
            printf("%d_", numeros[f][c]);
        }
        printf("\n");
    }
    
    getch();
    return 0;
}