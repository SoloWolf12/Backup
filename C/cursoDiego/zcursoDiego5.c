#include <stdio.h>
#include <conio.h>

int main()
{
    float lado, resultado;

    printf("ingrese el largo del lado del cuadrado: ");

    scanf("%f", &lado);

    resultado = lado * 4;

    printf("el perimetro es:  %f", resultado);

    getch();
}
