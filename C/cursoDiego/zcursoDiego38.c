#include <stdio.h>
#include <conio.h>

int main()
{
    int counter, val, total1, total2, op;

    counter = 1;
    total1 = 0;
    total2 = 0;

    printf("primer lista:\n");
    do
    {
        printf("ingrese el dato numero %i: ", counter);
        scanf("%i", &val);

        if (val < 0)
        {
            printf("el valor no puede ser negativo\n");
            printf("ingrese el dato numero %i: ", counter);
        }

        total1 = total1 + val;
        counter += 1;

    } while (counter <= 15);

    counter = 1;

    printf("segunda lista:\n");
    do
    {
        printf("ingrese el dato numero %i: ", counter);
        scanf("%i", &val);

        if (val < 0)
        {
            printf("el valor no puede ser negativo\n");
            printf("ingrese el dato numero %i: ", counter);
        }

        total2 = total2 + val;
        counter += 1;

    } while (counter <= 15);

    if (total1 > total2)
    {
        op = total1 - total2;
        printf("la primer lista es mas grande por %i numeros", op);
    }
    else if (total1 < total2)
    {
        op = total2 - total1;
        printf("la segunda lista es mas grande por %i numeros", op);
    }
    else
    {
        printf("las listas son iguales");
    }
    getch();
    return 0;
}