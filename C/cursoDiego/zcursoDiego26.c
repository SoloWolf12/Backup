#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

int main()
{

    int x, y, checkfail;

    do
    {
        printf("ingrese coordenada x: ");
        scanf("%i", &x);
        printf("ingrese coordenada y: ");
        scanf("%i", &y);

        checkfail = false;

        if (x == 0 || y == 0)
        {
            checkfail = true;
            printf("ningun numero puede ser 0\n");
        }

    } while (checkfail == true);

    if (x < 0 && y > 0)
    {
        printf("cuadrante 1, sup izq");
    }
    else if (x > 0 && y > 0)
    {
        printf("cuadrante 2, sup derecho");
    }
    else if (x > 0 && y < 0)
    {
        printf("cuadrante 3, inf derecho");
    }
    else
    {
        printf("cuadrante 4, inf izq");
    }

    getch();
    return 0;
}