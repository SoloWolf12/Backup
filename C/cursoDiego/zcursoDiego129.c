#include<stdio.h>
#include<conio.h>
#include<string.h>

void cargar(char paises [5][41],int poblacion[5])
{
    for (int i=0;i<5;i++)
    {
        printf("ingrese el nombre del pais %d: \n",(i+1));
        gets(paises[i]);
        printf("y su poblacion: \n");
        scanf("%d",&poblacion[i]);
        fflush(stdin);
    }
}

void ordenar(char paises[5][41],int poblacion[5])
{
    char auxPaises[41];
    int auxPoblacion;

}


void imprimir(char paises[5][41],int poblacion[5])
{
    for (int i=0; i<5;i++)
        {
        printf("%s tiene %d poblacion",paises[i],poblacion[i]);
        }
}



int main()
{
    char paises[5][41];
    int poblacion[5];

    cargar(paises,poblacion);
    ordenar(paises,poblacion);
    imprimir(paises,poblacion);

    getch();
    return 0;
}
