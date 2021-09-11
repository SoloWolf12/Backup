#include <stdio.h>
#include <conio.h>

int checkval(int x, int y)
{
    int mayor;
    
    if (x > y)
    {
        mayor = x;
    }
    else
    {
        mayor = y;
    }

    return mayor;
}

int main()
{
    int val1, val2;

    printf("ingrese un valor: \n");
    scanf("%d", &val1);

    printf("ingrese otro valor: \n");
    scanf("%d", &val2);

    printf("el valor mas grande es %d", checkval(val1, val2));
}