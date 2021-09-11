#include <stdio.h>
#include <conio.h>

int main()
{
    int i, cont = 1, mayor, menor;
    float height[5], op = 0, prom;

    for (i = 0; i < 5; ++i)
    {
        printf("ingrese altura de la persona %i :", cont);
        scanf("%f", &height[i]);
        op = op + height[i];
        cont += 1;
    }

    prom = op / i;

    printf("el promedio de altura es de: %f\n", prom);

    cont = 1;

    for (i = 0; i < 5; ++i)
    {
        if (height[i] < prom)
        {
            printf("la altura %i es mayor a la media\n", cont);
        }
        else
        {
            if (height[i] == prom)
            {
                printf("la altura %i es igual al promedio\n", cont);
            }
            else
            {
                printf("la altura %i es inferior al promedio\n", cont);
            }
        }
        cont += 1;
    }
    getch();
    return 0;
}