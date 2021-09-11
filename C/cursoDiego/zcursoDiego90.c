#include <stdio.h>
#include <conio.h>

void imprimirMayor(int val1, int val2)
{
    if (val1 > val2)
    {
        printf("val 1 mayor\n");
    }
    else
    {
        printf("val 2 mas grande\n");
    }
}

int main()
{
    int val1, val2;

    printf("ingrese primer valor: \n");
    scanf("%d", &val1);
    printf("ingrese segundo valor: \n");
    scanf("%d", &val2);

    imprimirMayor(val1, val2);
    getch();
    return 0;
}