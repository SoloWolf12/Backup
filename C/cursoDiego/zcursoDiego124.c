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

void buscarMenor(char palabras[5][31])
{

    char men[31];

    strcpy(men, palabras[0]);
    for (int f = 1; f < 5; f++)
    {
        if (strcmp(palabras[f], men) < 0)
        {
            strcpy(men, palabras[f]);
        }
    }
    printf("menor es %s", men);
}

int main()
{
    char palabras[5][31];
    cargar(palabras);
    imprimir(palabras);
    buscarMenor(palabras);
    getch();
    return 0;
}
