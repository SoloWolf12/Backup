#include <stdio.h>
#include <conio.h>

#define TAMANO 4

struct producto
{
    int codigo;
    char descripcion[41];
    float precio;
};

void cargar(struct producto vec[TAMANO])
{

    for (int f = 0; f < TAMANO; f++)
    {
        printf("ingrese el codigo: \n");
        scanf("%i", &vec[f].codigo);
        fflush(stdin);
        printf("ingrese la descripcion: \n");
        gets(vec[f].descripcion);
        printf("ingrese precio\n");
        scanf("%f",&vec[f].precio);
    }
}

void imprimir(struct producto vec[TAMANO])
{
    for (int f = 0; f < TAMANO; f++)
    {
        printf(" resultado %d %s %0.2f\n",vec[f].codigo,vec[f].descripcion,vec[f].precio);
    }
}

void precioMayor(struct producto vec[TAMANO])
{
    int pos=0;
    for (int f = 1; f < TAMANO; f++)
    {
        if (vec[f].precio>vec[pos].precio)
        {
            pos=f;
        }
    }
    printf("el producto mas caro es: %s\n",vec[pos].descripcion);
}

int main()
{
    struct producto vector[TAMANO];
    cargar(vector);
    imprimir(vector);
    precioMayor(vector);

    getch();
    return 0;
}