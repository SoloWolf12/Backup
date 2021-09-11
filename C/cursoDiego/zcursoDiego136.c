#include<stdio.h>
#include<conio.h>

struct producto
{
    int codigo;
    char descripcion[41];
    float precio;
};

struct producto cargar()
{
    struct producto pro;
    printf("ingrese cod producto: \n");
    scanf("%d",&pro.codigo);
    fflush(stdin);
    printf("ingre nom producto: \n");
    gets(pro.descripcion);
    printf("ingrese precio: \n");
    scanf("%f",&pro.precio);

    return pro;
};

void imprimir(struct producto pro)
{
    printf("datos del producto\n");
    printf("%d %s %f\n",pro.codigo,pro.descripcion,pro.precio);
}

int main()
{
    struct producto pro1, pro2;
    pro1=cargar();
    pro2=cargar();
    imprimir(pro1);
    imprimir(pro2);

    getch();
    return 0;
}