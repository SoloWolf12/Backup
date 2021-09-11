#include <stdio.h>
#include <conio.h>

int main()
{
    int cuenta;
    float val, op;
    op = 0;

    do
    {
        printf("ingrese num de cuenta:  (cuenta negativa finaliza)\n");
        scanf("%i", &cuenta);

        if (cuenta >= 0)
        {
            printf("ingrese saldo\n");
            scanf("%f", &val);

            if (val > 0)
            {
                printf("saldo acreedor\n");
                op = op + val;
            }
            else
            {
                if (val == 0)
                {
                    printf("saldo nulo\n");
                }
                else
                {
                    printf("saldo negativo\n");
                }
            }
        }
        printf("\n");

    } while (cuenta >= 0);

    printf("la suma del total de las cuentas acredoras es %f", op);

    getch();
    return 0;
}