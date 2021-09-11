#include <stdio.h>
#include <conio.h>
int main()
{
    int val, i, res;

    printf("ingrese un numero: ");
    scanf("%i", &val);

    for (i = 1; i <= 13; i++)
    {
        res = i * val;
        printf("\n%i", res);
    }
}