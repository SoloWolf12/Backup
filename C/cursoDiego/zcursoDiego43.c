#include <stdio.h>
#include <conio.h>

int main()
{

    int series, i, cont, val, opmul3, opmul5, mul3, mul5;

    cont = 1;
    mul3 = 0;
    mul5 = 0;
    
    printf("cuantos numeros desea ingresar? ");
    scanf("%i", &series);

    for (i = 0; i < series; i++)
    {
        printf("ingrese numero %i: ", cont);
        scanf("%i", &val);

        opmul3 = val % 3;
        opmul5 = val % 5;

        if (opmul3 == 0 && opmul5 == 0)
        {
            mul3 += 1;
            mul5 += 1;
        }
        else if (opmul3 == 0)
        {
            mul3 += 1;
        }
        else if (opmul5 == 0)
        {
            mul5 += 1;
        }

        cont += 1;
    }

    printf("un total de %i son multiplos de 3 y un total de %i son multiplos de 5", mul3, mul5);

    getch();
    return 0;
}