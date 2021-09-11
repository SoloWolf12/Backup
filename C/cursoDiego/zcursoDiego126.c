#include <stdio.h>
#include <conio.h>

void cargar(char producto[4][31], int precio[4])
{

    printf("ingrese la lista de productos:\n");

    for (int i = 0; i < 4; i++)
    {
        gets(producto[i]);
    }
    printf("ahora sus precios: ");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &precio[i]);
    }
}

void imprimir(char producto[4][31], int precio[4])
{
    for (int i = 0; i < 4; i++)
    {
        printf("%s %d\n", producto[i], precio[i]);
    }
}

void precioMayor(char producto[4][31], int precio[4])
{

    printf("\n precios por encima de los del primer producto: \n");

    for (int i = 0; i < 3; i++)
    {
        if (precio[i + 1] > precio[0])
        {
            printf("%s %d.\n", producto[i + 1], precio[i + 1]);
        }
    }
}

int main()
{
    char producto[4][31];
    int precio[4];

    cargar(producto, precio);
    imprimir(producto, precio);
    precioMayor(producto, precio);

    getch();
    return 0;
}