#include <stdio.h>
#include <conio.h>

void cargar(int numCargados[2][5])
{
    int f, c;

    for (f = 0; f < 2; f++)
    {
        for (c = 0; c < 5; c++)
        {
            printf("ingrese numero, fila %d y columna %d: \n", (f + 1), (c + 1));
            scanf("%d", &numCargados[f][c]);
        }
    }
}

void imprimir(int numeros[2][5])
{
    for (int f = 0; f < 2; f++)
    {
        for (int c = 0; c < 5; c++)
        {
            printf("%d_", numeros[f][c]);
        }
        printf("\n");
    }
}

void ordenar(int numeros[2][5])
{

    int temporal[2][5];

    for (int c = 0; c < 5; c++)
    {
        temporal[0][c] = numeros[0][c];
        numeros[0][c] = numeros[1][c];
        numeros[1][c] = temporal[0][c];
    }
}

int main()
{
    int numeros[2][5];
    cargar(numeros);
    imprimir(numeros);
    ordenar(numeros);

    printf("orden cambiado\n");
    
    imprimir(numeros);

    getch();
    return 0;
}