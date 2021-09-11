#include <stdio.h>
#include <conio.h>

int main()
{
    int i, cont, val, total, prom;

    cont = 1;

    for (i = 0; i < 10; ++i)
    {
        printf("ingrese num %i: ", cont);
        scanf("%i", &val);
        total = total + val;
        cont += 1;
    }

    prom = total / i;
    printf("el total es %i y el promedio es %i", total, prom);

    getch();
    return 0;
}