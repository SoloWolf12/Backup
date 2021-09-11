#include<stdio.h>
#include<conio.h>

struct pais
{
    char nombre[40];
    int cantidadHab;
};

void cargar (struct pais *ppais)
{
    printf("ingrese el nombre del pais: ");
    gets(ppais->nombre);
    printf("ingrese la cantidad de habitantes de dicho pais: ");
    scanf("%d",&ppais->cantidadHab);
    fflush(stdin);
}

void imprimir(struct pais p)
{
    printf("Nombre del pais:%s y la cantidad de habitantes es: %d \n",p.nombre,p.cantidadHab);
}

int main()
{
    struct pais pais1, pais2, pais3;
    cargar(&pais1);
    cargar(&pais2);
    cargar(&pais3);
    imprimir(pais1);
    imprimir(pais2);
    imprimir(pais3);
    getch();
    return 0;
}