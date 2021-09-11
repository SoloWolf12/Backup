#include <stdio.h>
#include <conio.h>

int main()
{
    int i, op;
    int cont = 1;
    int vect1[4];
    int vect2[4];
    int vectSum[4];

    for (i = 0; i < 4; i++)
    {
        printf("ingrese valor %i :\n", cont);
        scanf("%i", &vect1[i]);
        cont += 1;
    }

    cont = 1;

    for (i = 0; i < 4; i++)
    {
        printf("ingrese valor %i :\n", cont);
        scanf("%i", &vect2[i]);
        cont++;
    }

    for (i = 0; i < 4; i++)
    {
        op = vect1[i] + vect2[i];
        vectSum[i] = op;

        printf("totales.. %i\n", vectSum[i]);
    }

    getch();
    return 0;
}