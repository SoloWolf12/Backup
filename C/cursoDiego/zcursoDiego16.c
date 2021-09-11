#include <stdio.h>
#include <conio.h>
int main()
{

    int val1, val2, val3;

    printf("ingrese su primer valor: ");
    scanf("%i", &val1);
    printf("ingrese su segunda valor: ");
    scanf("%i", &val2);
    printf("ingrese su tercer valor: ");
    scanf("%i", &val3);

    if (val1 > val2)
    {
        if (val1 > val3)
        {
            printf("val 1 mas grande");
        }
    }
    else
    {
        if (val2 > val3)
        {
            printf("val 2 es mas grande");
        }
        else
        {
            printf("val 3 es mas grande");
        }
    }

    getch();
    return 0;
}