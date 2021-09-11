#include <stdio.h>
#include <conio.h>

void cargar(int numCargados[3][4])
{
    int f, c;

    for (f = 0; f < 3; f++)
    {
        for (c = 0; c < 4; c++)
        {
            printf("ingrese numero, fila %d y columna %d: \n", (f + 1), (c + 1));
            scanf("%d", &numCargados[f][c]);
        }
    }
}

void imprimir(int numeros[3][4])
{
    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 4; c++)
        {
            printf("%d_", numeros[f][c]);
        }
        printf("\n");
    }
}

int buscarMayor(int numeros[3][4])
{
    int mayor = 0;

    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 4; c++)
        {
            if (numeros[f][c] > mayor)
            {
                mayor = numeros[f][c];
            }
        }
    }

    return mayor;
}
int main()
{
    int numeros[3][4];
    cargar(numeros);
    imprimir(numeros);

    printf("el numero mayor en esta matriz es..%d", buscarMayor(numeros));

    getch();
    return 0;
}