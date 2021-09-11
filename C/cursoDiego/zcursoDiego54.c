#include <stdio.h>
#include <conio.h>

int main()
{
    int val, cont, op, prom;

    cont = 0;
    op = 0;

    printf("ingrese los numeros que desee para saber el promedio (0 finaliza carga de valores) \n");
    printf("ingrese sus numeros.. : \n");
    do
    {

        scanf("%i", &val);

        if (val == 0)
        {
            break;
        };
        op = op + val;
        cont += 1;

    } while (val != 0);

    prom = op / cont;

    printf("el promedio es %i", prom);

    getch();
    return 0;
}