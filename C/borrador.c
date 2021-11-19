#include <stdio.h>

int main()
{
    int base = 5;
    int potencia = 3;
    int res = 1;

    for (int i = 0; i < potencia; i++)
    {
        res = res * base;
        printf("%d\n", res);
    }
}

