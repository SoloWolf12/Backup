#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

int main()
{
    int val1, val2, val3, checkfail, mayor, menor, op;

    do
    {
        printf("ingresar val1: ");
        scanf("%i", &val1);
        printf("ingresar val2: ");
        scanf("%i", &val2);
        printf("ingresar val3: ");
        scanf("%i", &val3);

        checkfail = false;

        if (val1 == val2 || val1 == val3 || val2 == val3)
        {
            checkfail = true;
            printf("para este ejercicio los valores no pueden ser iguales\n");
        }

    } while (checkfail == true);

    if (val1 > val2)
    {
        if (val1 > val3)
        {
            printf("val 1 mas grande\n");
            mayor = val1;
        }
    }
    else if (val2 > val3)
    {
        printf("val 2 mas grande\n");
        mayor = val2;
    }
    else
    {
        printf("val 3 mas grande\n");
        mayor = val3;
    }

    if (val1 < val2)
    {
        if (val1 < val3)
        {
            printf("val 1 mas pequenio\n");
            menor = val1;
        }
    }
    else if (val2 < val3)
    {
        printf("val 2 mas pequenio\n");
        menor = val2;
    }
    else
    {
        printf("val 3 mas pequenio\n");
        menor = val3;
    }

    op = mayor - menor;
    printf("el mayor numero es el %i, el cual es %i numeros mas grande que el menor, el cual es un %i", mayor, op, menor);
    getch();
    return 0;
}