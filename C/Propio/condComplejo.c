#include <stdio.h>
#include <conio.h>

int main()
{
    int num1, num2;

    printf("ingrese el primer numero: ");
    scanf("%i", &num1);

    printf("ingrese el segundo numero: ");
    scanf("%i", &num2);

    if (num1 < num2)
    {
        printf("el segundo numero es mas grande");
    }
    else if (num1 > num2)
    {
        printf("el primer numero es mas grande");
    }
    else
    {
        printf("los numeros son iguales");
    }

    getch();
    return 0;
}