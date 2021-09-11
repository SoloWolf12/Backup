#include <stdio.h>
#include <conio.h>

int main()
{
    int val1, val2, resPositivo, resContrario1, resContrario2;

    val1 = 1;
    val2 = 1;

    while (val1 == val2)
    {
        printf("los numeros tienen que ser distintos\n");
        printf("ingrese primer valor: ");
        scanf("%i", &val1);
        printf("ingrese segundo valor: ");
        scanf("%i", &val2);
    }

    if (val1 > val2)
    {
        resPositivo = val1 - val2;
        printf("el primer valor es %i y es mas grande por %i", val1, resPositivo);
    }

    else
    {
        resContrario1 = val1 * val2;
        resContrario2 = val2 / val1;
        printf("el segundo valor es mas grande, el producto es %i y la division es %i", resContrario1, resContrario2);
    }

    getch();
    return 0;
}