#include <stdio.h>
#include <conio.h>

void cargar(int vector[8])
{
    for (int i = 0; i < 8; i++)
    {
        printf("ingrese carga numero %d: \n", (i + 1));
        scanf("%d", &vector[i]);
    }
}

int sumar(int vector[8])
{
    int total = 0;

    for (int i = 0; i < 8; i++)
    {
        total = total + vector[i];
    }
    return total;
}

int sumaMayores36(int vector[8])
{
    int acuMay36 = 0;
    for (int i = 0; i < 8; i++)
    {
        if (vector[i] > 36)
        {
            acuMay36 = acuMay36 + vector[i];
        }
    }

    return acuMay36;
}

int cantidadMayores50(int vector[8])
{
    int may50 = 0;
    for (int i = 0; i < 8; i++)
    {
        if (vector[i] > 50)
        {
            may50++;
        }
    }
    return may50;
}

int main()
{
    int vector[8];
    cargar(vector);
    printf("valor acumulado de todos los elementos:%d\n", sumar(vector));
    printf("valor acumulado de todos los elementos mayores a 36: %d\n", sumaMayores36(vector));
    printf("cantidad de componentes con valores mayores a 50: %d\n", cantidadMayores50(vector));

    getch();
    return 0;
}