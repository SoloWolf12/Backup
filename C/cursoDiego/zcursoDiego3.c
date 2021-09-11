#include <stdio.h>
#include <conio.h>

int main()
{
    int num1, num2, suma, producto;
    printf("ingrese primer valor:\t");
    scanf("%i", &num1);

    printf("ingrese segundo valor:\t");
    scanf("%i", &num2);

    suma = num1 + num2;
    producto = num1 * num2;
    printf("la suma de los dos valores:\t");
    printf("%i", suma);
    printf("\n");
    printf("el producto de los dos valores es:\t");
    printf("%i", producto);
    getch();

    return 0;
}
