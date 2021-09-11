#include <stdio.h>
#include <conio.h>
#include <string.h>

struct producto
{
    int codigo;
    char descripcion[41];
    float precio;
};

void imprimir(struct producto p)
{

    printf("codigo del producto:%d \n", p.codigo);
    printf("descripcion:%s\n", p.descripcion);
    printf("precio: %0.2f \n", p.precio);
}

int main()
{

    struct producto pro;
    pro.codigo=1;
    strcpy(pro.descripcion,"naranja");
    pro.precio=15.50;
    imprimir(pro);

    getch();
    return 0;
}