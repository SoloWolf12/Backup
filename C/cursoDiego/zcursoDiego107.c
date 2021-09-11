#include <stdio.h>
#include <conio.h>

void cargar(float devSueldo[4])
{
    int i = 0;
    for (i = 0; i < 4; i++)
    {
        printf("\n%d:_ ", (i + 1));
        scanf(" %f", &devSueldo[i]);
    }
}

float gastoTurno(float devGastos[4])
{
    float totGastos = 0;
    int i;

    for (i = 0; i < 4; i++)
    {
        totGastos = totGastos + devGastos[i];
    }
    return totGastos;
}

int main()
{
    float sueldosMa[4];
    float sueldosTar[4];

    printf("cargar sueldos t.maniana: \n");
    cargar(sueldosMa);
    printf("cargar sueldos t.tarde: \n");
    cargar(sueldosTar);

    printf("gastos turno maniana: %0.2f\n", gastoTurno(sueldosMa));
    printf(" gatos turno tarde: %0.2f\n", gastoTurno(sueldosTar));

    getch;
    return 0;
}