#include <stdio.h>
#include <conio.h>

int main()
{
    int i, cont, total, may36, may50;
    cont = 1;
    may36 = 0;
    may50 = 0;
    total = 0;
    int noVector[8];

    for (i = 0; i < 8; i++)
    {
        printf("ingrese el numero %i : ", cont);
        scanf("%i", &noVector[i]);

        if (noVector[i] > 36)
        {
            may36 = may36 + noVector[i];
        }

        if (noVector[i] > 49)
        {
            may50 += 1;
        }
        total = total + noVector[i];

        cont += 1;
    }

    printf("el total acumulado es: %i\n", total);
    printf("el valor acumulado de solo los numeros mayores a 36 es: %i\n", may36);
    printf("el total de valores que supera 50 es de: %i", may50);
}