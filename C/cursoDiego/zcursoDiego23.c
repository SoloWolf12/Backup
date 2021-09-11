#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

int main()
{
    int num1, num2, num3, op1, op2, checkfail;

    do
    {
        printf("ingrese primer valor: ");
        scanf("%i", &num1);
        printf("ingrese segundo valor: ");
        scanf("%i", &num2);
        printf("ingrese tercer valor: ");
        scanf("%i", &num3);

        checkfail = false;

        if (num1 != num2)
        {
            checkfail = true;
            printf("los numeros tienen que ser iguales\n");
        }
    } while (checkfail == true);

        if (num1 == num2 && num2 == num3)
    {
        op1 = num1 + num2;
        op2 = op1 * num3;
        printf("el total de %i + %i es %i y esto *%i es: %i", num1, num2, op1, num3, op2);
    }
    getch();
    return 0;
}
