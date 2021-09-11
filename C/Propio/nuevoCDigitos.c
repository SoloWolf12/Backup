#include <stdio.h>
#include <conio.h>

int main()
{
    int num, op, i;

    i = 1;
    
    printf("ingrese un numero: ");
    scanf("%i", &num);

    while (num > 9)
    {
        //printf("test de ciclo, op vale %i",op);

        i += 1;
        num = num / 10;
    }

    printf("su numero tiene %i digitos", i);
}