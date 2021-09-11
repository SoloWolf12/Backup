#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

int main()
{
    int num1, num2, num3;

    printf("ingrese primer valor: ");
    scanf("%i", &num1);
    printf("ingrese segundo valor: ");
    scanf("%i", &num2);
    printf("ingrese tercer valor: ");
    scanf("%i", &num3);

    if (num1 < 10 || num2 < 10 || num3 < 10)
    {
        printf("algunos de los numeros es inferior a 10");
    }
    else
    {
        printf("ningun num es inferior a 10");
    }

    getch();
    return 0;
}