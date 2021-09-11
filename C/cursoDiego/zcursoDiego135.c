#include<stdio.h>
#include<conio.h>

struct pais
{
    char nombre[40];
    int cantidadhab;
};

void imprimir(struct pais p )
{
    printf("pais:%s poblaci0n %d\n",p.nombre,p.cantidadhab); 
}

int main()
{
struct pais pais1={"argentina",4000};
struct pais pais2={"chila",9900};
struct pais pais3={"numaria",12};

imprimir(pais1);
imprimir(pais2);
imprimir(pais3);

    getch();
    return 0;
}