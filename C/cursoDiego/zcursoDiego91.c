#include <stdio.h>
#include <conio.h>

int calcPago(int hs, int valhs)
{
    int calc;

    calc = hs * valhs;

    printf("Usted gana %d por su trabajo \n\n", calc);
}

int main()
{

    int hs;
    int valhs;

    printf("cuantas horas trabaja? \n");
    scanf("%d", &hs);
    printf("cuanto pagan la hora? \n");
    scanf("%d", &valhs);

    calcPago(hs, valhs);

    printf("fin del programa");

    getch();
    return 0;
}