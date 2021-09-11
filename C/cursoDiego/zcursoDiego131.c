#include <stdio.h>
#include <conio.h>

#define CANTEMPLEADOS 4
#define MESES 3

void cargar(char empleados[CANTEMPLEADOS][40], int sueldos[CANTEMPLEADOS][MESES])
{
    for (int i = 0; i < 4; i++)
    {
        printf("ingrese nombre empleado %d: \n", (i + 1));
        gets(empleados[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        printf("ingrese los sueldos de los ultimos 3 meses de %s: \n", empleados[i]);

        for (int j = 0; j < 3; j++)
        {
            printf("ingrese sueldo %d: \n", (j + 1));
            scanf("%d", &sueldos[i][j]);
        }
    }
}

int sumar(int sueldos[CANTEMPLEADOS][MESES],char empleados[CANTEMPLEADOS][40])
{
    int total[4];
 
    for (int i = 0; i < 4; i++)
    {
        total[i] = (sueldos[i][0]) + (sueldos[i][1]) + (sueldos[i][2]);
    }
    
 for (int i = 0; i < 4; i++)
    {
        printf("el empleado %s gano en total %d.. \n", empleados[i], total[i]);
    }

}

int main()
{
    char empleados[CANTEMPLEADOS][40];
    int sueldos[CANTEMPLEADOS][MESES];
    int sueldosSumados[4];

    cargar(empleados, sueldos);
    sumar(sueldos,empleados);

    
    getch();
    return 0;
}