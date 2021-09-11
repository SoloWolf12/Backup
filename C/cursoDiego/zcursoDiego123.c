#include <stdio.h>
#include <conio.h>
#include <string.h>

void cargar(char returnPalabras[5][31])
{
    for (int i = 0; i < 5; i++)
    {
        printf("ingrese palabra numero %d: \n", (i + 1));
        gets(returnPalabras[i]);
    }
}

void imprimir(char palabras[5][31])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", palabras[i]);
    }
}

void ordenar(char palabras[5][31])
{

    char aux[31];

    for (int k = 0; k < 4; k++)
    {

        for (int f = 0; f < 4 - k; f++)
        {
            if (strcmp(palabras[f], palabras[f + 1]) > 0)
            {
                strcpy(aux, palabras[f]);
                strcpy(palabras[f], palabras[f + 1]);
                strcpy(palabras[f + 1], aux);
            }
        }
    }
}

int main()
{
    char palabras[5][31];
    cargar(palabras);
    imprimir(palabras);
    ordenar(palabras);

    printf("ordenadas: \n");
    imprimir(palabras);
    getch();
    return 0;
}
