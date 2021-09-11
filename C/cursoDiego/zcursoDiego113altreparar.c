#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

int cargarSueldo(int x[3])
{
    bool repeat;
    do
    {
        repeat = false;

        for (int i = 0; i < 3; i++)
        {
            printf("cargue sueldo %d: \n", (i + 1));
            scanf("%d", &x[i]);
        }

        if (x[0] == x[1] || x[0] == x[2] || x[1] == x[2])
        {
            printf("num repetidos, vuelva a cargarlos..");
            repeat = true;
        }
    } while (repeat == true);
}

int ordenarSueldos(int x[3])
{
    int ordenado[3];
    int saltear = 30000;
    int saltear2 = 30000;

    if (x[0] < x[1] && x[0] < x[2])
    {
        ordenado[0] = x[0];
        saltear = x[0];
    }
    else if (x[1] < x[0] && x[1] < x[2])
    {
        ordenado[0] = x[1];
        saltear = x[0];
    }
    else
    {
        ordenado[0] = x[2];
        saltear = x[0];
    }

    printf(" la pos1 original es %d y el ordenado %d\n", x[0], ordenado[0]);
    printf(" dato a saltear.%d\n", saltear);

    if (x[0] < x[1] && x[0] < x[2] && x[0] != saltear)
    {
        ordenado[1] = x[0];
        saltear2 = x[1];
        printf("cond1");
    }
    else if (x[1] < x[0] && x[1] < x[2] && x[1] != saltear)
    {
        ordenado[1] = x[1];
        saltear2 = x[1];
        printf("cond2");
    }
    else
    {
        ordenado[1] = x[2];
        saltear2 = x[1];
        printf("cond3");
    }

    printf(" la pos2 original es %d y el ordenado %d\n", x[1], ordenado[1]);

    if (x[0] < x[1] && x[0] < x[2] && x[0] != saltear && x[0] != saltear2)
    {
        ordenado[2] = x[0];
    }
    else if (x[1] < x[0] && x[1] < x[2] && x[0] != saltear && x[0] != saltear2)
    {
        ordenado[2] = x[1];
    }
    else
    {
        ordenado[2] = x[2];
    }
    printf(" la pos3 original es %d y el ordenado %d\n", x[2], ordenado[2]);
    return ordenado;
}

int main()
{
    int sueldos[3];
    int sueldoOrdenado[3];
    cargarSueldo(sueldos);
    sueldoOrdenado[3] = ordenarSueldos(sueldos);
    printf("los sueldos ordenados son: \n ");
    printf("%d %d %d", sueldoOrdenado[0], sueldoOrdenado[1], sueldoOrdenado[2]);

    getch();
    return 0;
}
