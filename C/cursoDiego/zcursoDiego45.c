#include <stdio.h>
#include <conio.h>

int main()
{
    int series, i, cont, valBase, valAltura, superficie, sup12;

    cont = 1;
    sup12 = 0;
    printf("cuantos triangulos desea calcular? ");
    scanf("%i", &series);

    for (i = 0; i < series; ++i)
    {

        do
        {
            printf("cual es el largo de la base del triangulo %i? ", cont);
            scanf("%i", &valBase);

            if (valBase <= 0)
            {
                printf("el numero tiene que ser superior a 0.\n");
            }
        } while (valBase <= 0);

        do
        {
            printf("cual es el largo del triangulo %i? ", cont);
            scanf("%i", &valAltura);

            if (valAltura <= 0)
            {
                printf("el numero tiene que ser superior a 0.\n");
            }
        } while (valAltura <= 0);

        superficie = (valBase + valAltura) / 2;

        printf("el triangulo %i tiene una base de %i, un alto de %i y una superficie de %i\n", cont, valBase, valAltura, superficie);

        cont += 1;
        if (superficie >= 12)
        {
            sup12 += 1;
        }
    }

    printf("un total de %i triangulos tienen una superficie mayor a 12", sup12);
    getch();
    return 0;
}