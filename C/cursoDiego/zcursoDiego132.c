#include<stdio.h>
#include<conio.h>

struct producto
{
int codigo;
char descripcion[41];
float precio;
};

int main()
{

struct  producto pro1, pro2;
printf("ingrese codigo de producto: ");
scanf("%d",&pro1.codigo);
fflush(stdin);
printf("ingre descripcion producto: ");
gets(pro1.descripcion);
printf("ingrese precio:");
scanf("%f",&pro1.precio);

printf("ingrese codigo de producto: ");
scanf("%d",&pro2.codigo);
fflush(stdin);
printf("ingre descripcion producto:");
gets(pro2.descripcion);
printf("ingrese precio:");
scanf("%f",&pro2.precio);
  
  if(pro1.precio>pro2.precio)
  {
       printf("el producto %s es mas caro",pro1.descripcion);
  }
else
{
    if (pro2.precio>pro1.precio)
    {
        printf("el producto %s es mas caro",pro2.descripcion);
    }
    else
    {
        printf("tienen igual precio"); 
    }
}
    getch();
    return 0;
}