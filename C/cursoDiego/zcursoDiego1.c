#include <stdio.h>
int main()
{
    int horasTrabajadas;
    float costoHoras;
    float sueldo;
    printf("ingrese horas trabajadas:");
    scanf("%i", &horasTrabajadas);
    printf("ingrese pago por hora:");
    scanf("%f", &costoHoras);
    sueldo = horasTrabajadas * costoHoras;
    printf("el sueldo es \t");
    printf("%f", sueldo);
    getchar();
    return 0;
}