#include <stdio.h>
#include <conio.h>

int main()
{
    int val1;
    printf("ingrese un numero entero: ");
    scanf("%i", &val1);

    if (val1 == 0)
    {
        printf("su numero es 0");
    }
    else if (val1 > 0)
    {
        printf("su numero es positivo");
    }
    else
    {
        printf("su numer es negativo");
    }

    getch();
    return 0;
}
