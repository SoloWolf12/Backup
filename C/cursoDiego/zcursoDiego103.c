#include <stdio.h>
#include <conio.h>

int cargaSuedos(int valores[5])
{
    int x;

    for (x = 0; x < 5; x++)
    {
        printf("deposite el sueldo de empleado numero %d: ", (x + 1));
        scanf("%d", &valores[x]);
    }
}

int impresionSueldos(int choclo[5])
{
    //printf("test borrar");
    for (int x = 0; x < 5; x++)
    {
        printf("sueldo empleado %d: %d.\n",(x+1), choclo[x]);
    }
    printf("\n");
}

int gastoTotal(int mate[5])
{
    int total=0;
    for (int x=0; x<5; x++)
    {
        total=total+mate[x];
    }
    
    return total;
}

int main()
{
    int sueldos[5];

    cargaSuedos(sueldos);
    impresionSueldos(sueldos);
    printf("el total en gastos es %d",gastoTotal(sueldos));

    getch();
    return 0;
}