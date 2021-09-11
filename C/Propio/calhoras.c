#include <stdio.h>
int main()
{
    /* hacer un programa que calcule sueldo en base a las horas trabajadas y el costo de las horas */

    int horas;
    int vHora;
    int resultado;
    printf("cuantas horas a trabajado?\n");
    scanf("%d", &horas);
    printf("cuantas vale la hora?\n");
    scanf("%d", &vHora);

    resultado = horas * vHora;

    printf("usted va a cobrar %d pesos", resultado);

    return 0;
}