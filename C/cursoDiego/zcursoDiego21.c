#include <stdio.h>
#include <conio.h>

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
            printf("ningun dia del mes tiene mas de 31 o menos de 1\n");
        }
        if (dia > 28 && mes == 2)
        {
            checkfail = 1;
            printf("marzo no puede tener mas de 28 dias\n");
        }
        if (mes < 1 || mes > 12)
        {
            checkfail = 1;
            printf("solo hay 12 meses\n");
        }

    } while (checkfail == 1);

    if ((aa == 2021 || aa == 21) && mes <= 3)  /*tambien se puede (mes == 1 || 2 || 3))*/
    {
        printf("primer trimestre");
    }

    getch();
    return 0;
}