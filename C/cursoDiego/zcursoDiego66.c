#include <stdio.h>
#include <conio.h>

int main()
{
    int val, op = 0;
    char check;

    do
    {
        printf("ingrese un numero: ");
        scanf("%i", &val);

        op = op + val;

        printf("quiere ingresar un nuevo numero? s/n \n");
        scanf(" %c", &check);   //el scanf requiere un espacio vacio antes de un %c o da error

    } while (check != 'n');

    printf("la suma de todos los valores cargados es %i\n", op);

    getch();
    return 0;
}