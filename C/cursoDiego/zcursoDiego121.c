#include <stdio.h>
#include <conio.h>

void cargar(char fraseCargada[3][31])
{
    int f;

    for (f = 0; f < 3; f++)
    {
        printf("ingrese frase de linea %d: \n", (f + 1));
        gets(fraseCargada[f]);
    }
}

void imprimir(char fraseCargada[3][31])
{
    for (int f = 0; f < 3; f++)
    {
        printf("%s", fraseCargada[f]);
    }
}

int main()
{
    char frase[3][31];
    cargar(frase);
    imprimir(frase);

    getch();
    return 0;
}