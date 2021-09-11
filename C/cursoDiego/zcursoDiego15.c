#include <stdio.h>
#include <conio.h>
int main()
{

    int val1, val2, val3, prom;

    printf("ingrese su primer nota: ");
    scanf("%i", &val1);
    printf("ingrese su segunda nota: ");
    scanf("%i", &val2);
    printf("ingrese su tercer nota: ");
    scanf("%i", &val3);

    prom = (val1 + val2 + val3) / 3;

    if (prom >= 7)
    {
        printf("promocionado");
    }
    else
    {
        if (prom >= 4)
        {
            printf("regular");
        }
        else
        {
            printf("reprobado");
        }
    }

    getch();
    return 0;
}