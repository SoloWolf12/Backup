#include <stdio.h>
#include <conio.h>

struct producto
{
    int codigo;
    char descripcion[41];
    float precio;
};

void cargar(struct producto *pprod)
{
    printf("ingrese codigo");
    scanf("%d", &(*pprod).codigo);
    fflush(stdin);
    printf("ingrese descripcion:");
    gets((*pprod).descripcion);
    printf("ingrese precio:");
    scanf("%s", &(*pprod).precio);
}

void imprimir(struct producto prod)
{
    printf("codigo: %d\n", prod.codigo);
    printf("descripcion: %d\n", prod.descripcion);
    printf("precio: %d\n", prod.precio);
}

int main()
{
    struct producto prod;
    cargar(&prod);
    imprimir(prod);

    getch();
    return 0;
}


