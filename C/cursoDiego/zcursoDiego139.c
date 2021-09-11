#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TAMANO 4

struct libro
{
    int codigo;
    char titulo[40];
    char autor[40];
};

void cargar(struct libro vec[TAMANO])
{
    for (int f = 0; f < TAMANO; f++)
    {
        printf("ingrerse codigo de libro: \n");
        scanf("%d", &vec[f].codigo);
        fflush(stdin);
        printf("ingrese el titulo: \n");
        gets(vec[f].titulo);
        printf("ingrese autor: \n");
        gets(vec[f].autor);
    }
}
void imprimir(struct libro vec[TAMANO])
{
    for (int f = 0; f < TAMANO; f++)
    {
        printf("%d %s %s", vec[f].codigo, vec[f].titulo, vec[f].autor);
    }
}

void consulta(struct libro vec[TAMANO])
{

    char autor[40];
    printf("ingrese el nombre del autor a consultar: \n");
    gets(autor);
    int cant = 0;
    for (int f = 0; f < TAMANO; f++)
    {
        if (strcmp(autor, vec[f].autor) == 0)
        {
            printf("titulo: %s \n", vec[f].titulo);
            cant++;
        }
    }
    if (cant == 0)
    {
        printf("No hay libros de ese autor");
    }
}

int main()
{

    struct libro vec[TAMANO];
    cargar(vec);
    imprimir(vec);
    consulta(vec);

    getch();
    return 0;
}