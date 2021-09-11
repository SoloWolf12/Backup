#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

int concatenar(int num)
{
    int x;
    for (x = 0; x <= num; x++)
    {
        printf("%d\n", x);
    }
}

int main()
{
    bool checkfail;
    int val;
    printf("escriba un numero entero..\n");
    do
    {
        checkfail = false;
        scanf("%d", &val);

        if (val < 0)
        {
            printf("ingrese un valor entero positivo\n");
            checkfail = true;
        }
    } while (checkfail == true);

    concatenar(val);

    printf("fin del programa");

    getch();
    return 0;
}