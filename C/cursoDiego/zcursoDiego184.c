#include <stdio.h>
#include <conio.h>

int main()
{
    int valor;
    printf("ingrese un valor entre 1 y 5");
    scanf("%d", &valor);
    switch (valor)
    {
    case 1:
        printf("uno");
        break;
    case 2:
        printf("dos");
        break;
    case 3:
        printf("tres");
        break;
    case 4:
        printf("cuatro");
        break;
    case 5:
        printf("cinco");
        break;
    default:
        printf("fuera de rango");
        break;
    }
    getch();
    return 0;
}