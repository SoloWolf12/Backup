#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

struct producto
{
    int codigo;
    char descripcion[41];
    float precio;
};

int main()
{
    struct producto *prod;
    prod = malloc(sizeof(struct producto));

    prod->codigo = 1;
    strcpy(prod->descripcion, "papas");
    prod->precio = 10.5;
    printf("codigo de articulo: %d\n", prod->codigo);
    printf("desc: %s\n", prod->descripcion);
    printf("precio: %f\n", prod->precio);

    free(prod);

    getch();
    return 0;
}
