#include <stdio.h>
#include <conio.h>

void cargar(int vec[5])
{
    for (int x = 0; x < 5; x++)
    {
        printf("ingrese elemento: ");
        scanf("%i", &vec[x]);
    }
}

void imprimir(int vec[5])
{
    printf("contenido completo.\n");
    for (int x = 0; x < 5; x++)
    {
        printf("%i", vec[x]);
    }
}

int main()
{
    int vector[5];

    cargar(vector);
    //printf("test %i%i%i%i%i", vector[0], vector[1], vector[2], vector[3], vector[4]);
    imprimir(vector);

    getch();
    return 0;
}