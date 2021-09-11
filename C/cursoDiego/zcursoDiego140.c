#include <stdio.h>
#include <conio.h>

#define TAMANO 3

struct fecha
{
    int dd;
    int mm;
    int aa;
};

struct producto
{
    int codigo;
    char descripcion[41];
    float precio;
    struct fecha fechaVencimiento;
};

void cargar(struct producto vec[TAMANO])
{
    for (int f = 0; f < TAMANO; f++)
    {
        printf("ingrese codigo producto: \n");
        scanf("%d", &vec[f].codigo);
        fflush(stdin);
        printf("ingrese descripcion: \n");
        gets(vec[f].descripcion);
        printf("ingrese precio: \n");
        scanf("%f", &vec[f].precio);
        printf("ingrese vencimiento: \n");
        printf("dia: \n");
        scanf("%d", &vec[f].fechaVencimiento.dd);
        printf("mes: \n");
        scanf("%d", &vec[f].fechaVencimiento.mm);
        printf("ano: \n");
        scanf("%d", &vec[f].fechaVencimiento.aa);
    }
}

void imprimir(struct producto vec[TAMANO])
{
    for(int f=0;f<TAMANO;f++)
    {
        printf("%i %s %0.2f %d %d %d",vec[f].codigo,vec[f].descripcion,vec[f].precio,vec[f].fechaVencimiento.aa,vec[f].fechaVencimiento.dd,vec[f].fechaVencimiento.mm);
    }
}
int main()
{
    struct producto vec[TAMANO];
    cargar(vec);
    imprimir(vec);
    
    getch();
    return 0;
}