#include <stdio.h>
#include <conio.h>

int main()
{
    int nEmpleados, cont, ordenEmpleados, sueldo, bienPagos, malPagos, total, holis;

    ordenEmpleados = 1;
    total = 0;      /* es necesario  */
    nEmpleados = 0; /* NO es necesario  */
    cont = 0;       /*  es necesario  */
    malPagos = 0;   /* es necesario  */
    bienPagos = 0;  /* es necesario  */

    do
    {
        printf("cuantos empleados tiene su empresa? ");
        scanf("%i", &nEmpleados);

        if (nEmpleados == 0)
        {
            printf("numero incorrecto, vuelva a cargar el num de emplados\n");
        }
    } while (nEmpleados == 0);

    while (cont < nEmpleados)
    {
        do
        {
            printf("Cuanto cobra el empleado nro.%i?  ", ordenEmpleados);
            scanf("%i", &sueldo);

            if (sueldo < 0 || sueldo > 500)
            {
                printf("el sueldo no puede estar por debajo de 1 ni por encima de 500..\n");
            }
        } while (sueldo < 0 || sueldo > 500);

        cont += 1;
        ordenEmpleados += 1;
        total += sueldo;

        if (sueldo > 301)
        {
            bienPagos += 1;
        }
        else
        {
            malPagos += 1;
        }
    }
    printf("la empresa posee %i empleados que cobran menos de 300 y %i que cobran mas \n", malPagos, bienPagos);
    printf("el total en gastos mensuales asciende a %i", total);
    getch();
    return 0;
}
