#include <stdio.h>
#include <conio.h>

int main()
{
    int val1, val2, res;
    char check;

    printf("ingrese primer valor: ");
    scanf("%i", &val1);
    printf("ingrese segundo valor: ");
    scanf("%i", &val2);

    do
    {
        printf("que desea hacer con ellos? (+-/*)\n");
        scanf(" %c", &check);

        if ((check != '+') && (check != '-') && (check != '/') && (check != '*'))
        {
            printf("escriba alguna de las 4 opciones +,-,/,*\n");
        }
    } while (check != '+' && check != '-' && check != '/' && check != '*');

    if (check == '+')
    {
        res = val1 + val2;
        printf("el resultado es %i", res);
    }
    else if (check == '-')
    {
        res = val1 - val2;
        printf("el resultado es %i", res);
    }
    else if (check == '/')
    {
        res = val1 / val2;
        printf("el resultado es %i", res);
    }
    else if (check == '*')
    {
        res = val1 * val2;
        printf("el resultado es %i", res);
        ;
    }
    else
    {
        printf("escriba alguna de las 4 opciones +,-,/,* ");
    }

    getch();
    return 0;
}