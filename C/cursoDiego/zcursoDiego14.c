#include <stdio.h>
#include <conio.h>

int main()
{
    int num, check;
    printf("ingrese un numero positivo de hasta 4 digitos: ");
    scanf("%i", &num);

    if (num > 8999)
    {
        printf("su numero tiene 4 digitos");
    }
    else if (num > 899)
    {
        printf("su numero tiene 3 digitos");
    }
    else if (num > 89)
    {
        printf("su numero tiene 2 digitos");
    }
    else
    {
        printf("su numero tiene 1 digito");
    }
    getch();
    return 0;
}