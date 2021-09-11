#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

int main()
{
    int numPersonas, iPersonas, cont;
    float height, total, prom;

    cont = 0;
    iPersonas = 1;

    printf("cuantas personas seran medidas? ");
    scanf("%i", &numPersonas);

    while (cont < numPersonas)
    {
        printf("cual es la altura de la persona numero %i ? ", iPersonas);
        scanf("%f", &height);

        iPersonas += 1;
        cont += 1;

        total = total + height;
    }

    prom = total / numPersonas;

    printf("la altura promedio es %.1f", prom);
    getch();
    return 0;
}