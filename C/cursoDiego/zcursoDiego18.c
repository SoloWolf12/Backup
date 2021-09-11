#include <stdio.h>
#include <conio.h>

int main()
{
    int val;
    printf("ingrese un numero entero positivo de no mas de 3 digitos: ");
    scanf("%i", &val);

    if (val < 0 || val > 999)
    {
        printf("error");
    }
    else if (val >= 100)
    {
        printf("3 digitos");
    }
    else if (val >= 10)
    {
        printf("2 digitos");
    }
    else
    {
        printf("1 digito");
    }

    getch();
    return 0;
}
