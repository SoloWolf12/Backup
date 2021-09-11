#include <stdio.h>
#include <conio.h>

int cargarElementos(int num[10])
{
    for (int i = 0; i < 10; i++)
    {
        printf("cargar num %d: ", (i + 1));
        scanf("%d", &num[i]);
    }
}

void estaOrdenado(int g[10])
{
    int ordenado = 1;

    for (int i = 0; i < 10; i++)
    {
        if (g[i + 1] < g[i])
        {
            ordenado = 0;
            break;
        }
    }
    if (ordenado == 1)
    {
        printf("esta ordenado");
    }
    else
    {
        printf("no esta ordenado");
    }
}

int main()
{
    int numeros[10];

    cargarElementos(numeros);
    estaOrdenado(numeros);

    getch();
    return 0;
}