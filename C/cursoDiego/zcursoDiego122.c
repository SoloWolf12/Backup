#include<stdio.h>
#include<conio.h>
#include<string.h>

void cargar(char returnPalabras[5][31])
{
for(int i=0;i<5;i++)
    {
        printf("ingrese palabra numero %d: \n",(i+1));
        gets(returnPalabras[i]);
    }
}

void imprimir(char palabras[5][31])
{
    for(int i=0;i<5;i++)
        {
        printf("%s\n",palabras[i]);
        }
}

void comparar(char palabras[5][31])
{
char nuevaPalabra[31];
int coincidencias=0;

printf("ingrese otra palabra: \n");
gets(nuevaPalabra);


for (int i=0;i<5;i++)
    {
        if(strcmp(nuevaPalabra,palabras[i])==0)
        {
        coincidencias++;
        }
    }
printf("existen un total de %d coincidencias\n",coincidencias);
}

int main()
{
    char palabras[5][31];
    cargar(palabras);
    imprimir(palabras);
comparar(palabras);
    getch();
return 0;
}
