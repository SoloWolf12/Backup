#include <stdio.h>
#include <conio.h>

int main()
{
    int val, val2, prom, cont;

    cont = 0;
    val = 0;
    while (cont < 10)
    {
        printf("escriba un numero: ");
        scanf("%i", &val2);
        val += val2;
        cont += 1;
    }

    prom = val / cont;

    printf("el total es %i y el promedio es %i", val, prom);

    getch();
    return 0;
}