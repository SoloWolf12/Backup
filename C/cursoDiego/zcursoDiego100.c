#include <stdio.h>
#include <conio.h>

float perimetro(float l)
{
    float res;

    res = l * 4;

    return res;
}

int main()
{
    float lado;
    printf("ingrese el largo de un lado de un cuadrado: \n");
    scanf("%f", &lado);

    printf("el perimetro es de %0.2f..", perimetro(lado));

    getch();
    return 0;
}