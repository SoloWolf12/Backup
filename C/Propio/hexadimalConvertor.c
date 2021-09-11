
// 1 2 3 4 5 6 7 8 9 A  B  C  D  E  F  10
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16

// unidad exadecimal "0 a F"  o de 0 a 15 en valores decimales.
// decena en exadecimal "10 a FF" o de 16 a 255 en valores decimales.
// cententa en exadecimal "100 a FF" o de 256 a 4095 en valores decimales.

#include <stdio.h>
#include <conio.h>

int main()
{
    int num, i, op;
    char deci;

    i = 1;

    printf("ingrese un num para hacerlo decimal: ");
    scanf("%i", &num);

    op = num % 10;

    while (num > 9)
    {
        i += 1;
        num = num / 10;
    }

    if (op == 0)
    {
        deci = '0';
    }
    else if (op == 1)
    {
        deci = '1';
    }
    else if (op == 2)
    {
        deci = '2';
    }
    else if (op == 3)
    {
        deci = '3';
    }
    else if (op == 4)
    {
        deci = '4';
    }
    else if (op == 5)
    {
        deci = '5';
    }
    else if (op == 6)
    {
        deci = '6';
    }
    else if (op == 7)
    {
        deci = '7';
    }
    else if (op == 8)
    {
        deci = '8';
    }
    else
    {
        deci = 'a';
    }

    printf("su numero tiene %i digitos\n", i);

    printf("su num decimal es %i y convertido a decimal es %c", num, deci);
    getch();
    return 0;
}
