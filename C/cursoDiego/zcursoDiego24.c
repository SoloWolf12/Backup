#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

int main()
{
    int num1, num2, num3, op1;

    printf("ingrese primer valor: ");
    scanf("%i", &num1);
    printf("ingrese segundo valor: ");
    scanf("%i", &num2);
    printf("ingrese tercer valor: ");
    scanf("%i", &num3);

    op1 = num1 + num2 + num3;

    if(op1<10)
    {
        printf("valores totales menores a 10");
    }
    else{
        printf("valores mayores a 10");
    }

    getch();
    return 0;
}
