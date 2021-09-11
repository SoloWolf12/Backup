#include <stdio.h>
#include <conio.h>

int main()
{
    int val;
    int op = 0;
    char input;

    do
    {
        printf("ingrese un numero: ");
        scanf("%i", &val);
        op = op + val;

        printf("quiere cargar mas valores?\n");
        scanf(" %c", &input);
    } while (input == 's' || input == 'S');

    printf("el total es de: %i", op);
}