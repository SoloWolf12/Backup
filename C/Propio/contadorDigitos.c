#include <stdio.h>
#include <conio.h>
int main()
{
    float num, res, contador;
    printf("ingrese un numero entero positivo: ");
    scanf("%f", &num);

    contador = 0;
    res = num / 10;
    contador += 1;

    while (res >= 1)
    {
        res = res / 10;
        contador += 1;
    }

    printf("su numero tiene %f digitos", contador);
    getch();
    return 0;
}