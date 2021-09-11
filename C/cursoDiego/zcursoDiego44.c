#include <stdio.h>
#include <conio.h>

int main()
{
    int series, i, cont, val, mil;

    cont = 1;
    mil = 0;

    printf("cuantos numeros va a cargar? ");
    scanf("%i", &series);

    for (i = 0; i < series; ++i)
    {
        printf("ingrese el valor numero %i: ", cont);
        scanf("%i", &val);

        if (val >= 1000)
        {
            mil += 1;
        }
    }

    printf("%i numeros son mayores o iguales a 1000", mil);

    getch();
    return 0;
}