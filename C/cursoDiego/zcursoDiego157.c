#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    char *palabra;
    int cant;

    printf("ingrese cuantas letras tendra su palabra: ");
    scanf("%d", &cant);
    fflush(stdin);
    palabra = malloc((cant + 1) * sizeof(char));
    printf("ingrese ahora la palabra: ");
    gets(palabra);
    printf("puso %s", palabra);
    free(palabra);

    getch();
    return 0;
}