#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int *pe;
    int tam;

    printf("cuantos elementos tendra el vector:");
    scanf("%d", &tam);
   
    pe = malloc(tam * sizeof(int));

    for (int f = 0; f < tam; f++)
    {
        printf("ingrese elemento");
        scanf("%i", &pe[f]);
    }
    printf("contenido del vector\n");
    for (int f = 0; f < tam; f++)
    {
        printf("%i", pe[f]);
        ;
    }

    free(pe);

    getch();
    return 0;
}