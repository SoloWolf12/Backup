#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

int main()
{
    int dia, mes, aa, checkfail;

    do
    {
        printf("ingrese dia: ");
        scanf("%i", &dia);
        printf("ingrese mes: ");
        scanf("%i", &mes);
        printf("ingrese anio: ");
        scanf("%i", &aa);

        checkfail = 0;

        if (dia > 32 || dia < 1)
        {
            checkfail = 1;
            printf("corregir dia\n");
        }

        if (dia > 28 && mes == 2)
        {
            checkfail = 1;
            printf("febrero tiene 28 dias\n");
        }
        if ((dia > 30) && (mes == 4 || mes == 6 || mes == 9 || mes == 11))
        {
            checkfail = 1;
            printf("ese mes tiene un maximo de 30 dias\n");
        }

    } while (checkfail == 1);

    if (mes == 12 && dia == 24)
    {
        printf("es navidad");
    }
    getch();
    return 0;
} 
