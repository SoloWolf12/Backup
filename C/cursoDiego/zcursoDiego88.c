#include <stdio.h>
#include <conio.h>

int cuadrado()
{
    int val;
    int cuad;
    printf("ingrese un valor: ");
    scanf("%i", &val);
    cuad = val * val;
    printf("el cuadrado de %d es %d..\n", val, cuad);
}

int producto()
{
    int val1;
    int val2;
    int prod;
    printf("ingrese un valor: \n");
    scanf("%i", &val1);
    printf("ingrese el segundo valor: \n");
    scanf("%i", &val2);
    prod = val1 * val2;
    printf("el producto es %d", prod);
}

int main()
{
    cuadrado();
    producto();
    getch;
    return 0;
}