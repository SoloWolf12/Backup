#include <stdio.h>
#include <conio.h>

float superficie(float largo)
{
    float calc;
    calc = largo * largo;
    return calc;
}

int main()
{
    float lado;
    printf("ingrese el largo del lado de un cuadrado: \n");
    scanf("%f", &lado);

    printf("el total es %f", superficie(lado));

    //forma alternativa, se usa una variable para almacenar el valor de return.
    //   float res;
    //   res = superficie(lado);
    //   printf("%f", res);

    getch();
    return 0;
}