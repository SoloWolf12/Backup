#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

int main()
{

    int sueldo, antiguedad, checkfail;

    printf("ingrese sueldo: ");
    scanf("%i", &sueldo);
    printf("ingrese anios de antiguedad: ");
    scanf("%i", &antiguedad);

    checkfail = false;

    if (sueldo < 500 && antiguedad <= 10)
    {
        printf("aumento del 20%%");
    }
    else if (sueldo < 500)
    {
        printf("aumento del 5%%");
    }
    else
    {
        printf("sin aumento");
    }

    getch();
    return 0;
}