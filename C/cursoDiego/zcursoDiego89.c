#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

int valores()
{
    int val1;
    int val2;
    int val3;
    int min;
    bool checkfail;

    do
    {
        checkfail = false;
        printf("ingrese valor 1: \n");
        scanf("%d", &val1);
        printf("ingrese valor 2: \n");
        scanf("%d", &val2);
        printf("ingrese valor 3: \n");
        scanf("%d", &val3);

        if (val1 == val2 || val1 == val3 || val2 == val3)
        {
            checkfail = true;
            printf("iguales\n");
        }

    } while (checkfail == true);

    if ((val1 < val2) && (val1 < val3))
    {
        min = val1;
    }
    else if (val2 < val3)
    {
        min = val2;
    }
    else
    {
        min = val3;
    }

    printf("el min es %d\n",min);
}

int separador()
{
    printf("__________________________________________\n");
}

int main()
{
    valores();
    separador();
    valores();
    separador();
    valores();
    getch;
    return 0;
}