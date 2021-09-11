#include <stdio.h>
#include <conio.h>

int main()
{

    int val,
        op = 0;

    printf("ingrese numeros para que al final sean sumados (9999 finaliza)\n");

    do
    {
        scanf("%i", &val);

        if (val != 9999)
        {
            op = op + val;
        }

    } while (val != 9999);

    if (op < 0)
    {
        printf("el total es inferior a 0 (%i)", op);
    }
    else if (op == 0.0)
    {
        printf("el total es igual a 0");
    }
    else
    {
        printf("el total es superior a 0 (%i)", op);
    }
    getch();
    return 0;
}