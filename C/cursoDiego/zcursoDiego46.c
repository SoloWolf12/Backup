#include <stdio.h>
#include <conio.h>

int main()
{

    int i, cont, val, total;

    cont = 1;
    total = 0;
    for (i = 0; i < 10; i++)
    {
        printf("ingrese num %i: ", cont);
        scanf("%i", &val);

        if (i < 5)
        {
            cont += 1;
            continue;
        }      

        total += val;
        cont += 1;
    }


    printf("total del 6 al 10 igual a %i",total);

    getch();
    return 0;
}