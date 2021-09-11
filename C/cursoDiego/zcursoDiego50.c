#include <stdio.h>
#include <conio.h>

int main()
{

    int series, i, cont, x, y;

    cont = 1;
    printf("cuantas coordenadas desea ingresar? ");
    scanf("%i", &series);

    for (i = 0; i < series; ++i)
    {
        printf("ingrese primer coordenada X numero %i: ", cont);
        scanf("%i", &x);
        printf("ingrese segunda coordenada Y numero %i: ", cont);
        scanf("%i", &y);

        while (x == 0 || y == 0)
        {
            printf("no deje coordenadas en 0 por favor");
            printf("ingrese primer coordenada X numero %i: ", cont);
            scanf("%i", &x);
            printf("ingrese segunda coordenada Y numero %i: ", cont);
            scanf("%i", &y);
        }

        if (x < 0 && y < 0)
        {
            printf("cuandrante 1, sup izq\n");
        }
        else if (x > 0 && y < 0)
        {
            printf("cuandrante 2, sup der\n");
        }
        else if (x < 0 && y > 0)
        {
            printf("cuandrante 3, inf izq\n");
        }
        else
        {
            printf("cuandrante 4, inf der\n");
        }
        cont += 1;
    }

    getch();
    return 0;
}
