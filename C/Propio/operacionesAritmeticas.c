#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, c, d, e;
    float f;

    a = 5 + 5;  //suma
    b = 5 - 5;  //resta
    c = 5 * 5;  //multiplicacion
    d = 26 / 4; //division
    e = 32 % 3; //resto

    //potencia
    int base = 5;
    int potencia = 3;
    int res = 1;

    for (int i = 0; i < potencia; i++)
    {
        res = res * base;
    }

    printf("%d\n", res);

    printf("ejemplo suma: %d\n", a);
    printf("ejemplo resta: %d\n", b);
    printf("ejemplo multiplicacion: %d\n", c);
    printf("ejemplo division: %d\n", d);
    printf("ejemplo resto: %d\n", e);
    printf("ejemplo potencia: %d\n", res);

    getch();
    return 0;
}