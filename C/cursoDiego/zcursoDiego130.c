#include <stdio.h>
#include <conio.h>

#define TAMANO 5
#define FINPROGRAMA "\ngracias por utilizar nuestro programa"

void cargar(int sueldos[TAMANO])
{
    for (int f = 0; f < TAMANO; f++)
    {
        printf("ingrese sueldo: ");
        scanf("%d", &sueldos[f]);
    }
}

void imprimir(int sueldos[TAMANO])
{
    printf("listado\n");
    for (int f = 0; f < TAMANO; f++)
    {
        printf("%d", sueldos[f]);
    }
}

int main()
{
    int sueldos[TAMANO];
    cargar(sueldos);
    imprimir(sueldos);
    printf(FINPROGRAMA);

    getch();
    return 0;
}