#include <stdio.h>
#include <conio.h>

int main()
{
    int cont, val, op, par, impar, series;

    cont = 1;
    par = 0;
    impar = 0;

    printf("cuantos numeros quiere ingresar?: ");
    scanf("%i", &series);

    while (cont <= series)
    {
        printf("cargue el dato numero %i: ", cont);
        scanf("%i", &val);

        op = val % 2;

        if (op == 0)
        {
            par += 1;
        }
        else
        {
            impar += 1;
        }

        cont += 1;
    }

    printf("hay %i numeros positivos y %i numeros negativos", par, impar);

    getch();
    return 0;
}