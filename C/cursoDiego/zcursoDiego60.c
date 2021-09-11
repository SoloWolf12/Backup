#include <stdio.h>
#include <conio.h>

int main()
{
    int listaSueldos[8];
    int op1 = 0;
    int op2 = 0;
    int i;

    for (i = 0; i < 4; i++)
    {
        printf("ingrese los sueldos del turno maniana\n");
        scanf("%i", &listaSueldos[i]);
        op1 = op1 + listaSueldos[i];
    }
    for (i = 4; i < 8; i++)
    {
        printf("ingrese los sueldos del turno tarde\n");
        scanf("%i", &listaSueldos[i]);
        op2 = op2 + listaSueldos[i];
    }

    printf("turno maniana %i\n", op1);
    printf("turno tarde  %i\n", op2);

    if (op1 > op2)
    {
        printf("el turno maniana cobra mas");
    }
    else if (op1 < op2)
    {
        printf("el turno tarde cobra mas");
    }
    else
    {
        printf("cobran lo mismo");
    }

    getch();
    return 0;
}