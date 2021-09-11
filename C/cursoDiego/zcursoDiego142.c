#include <stdio.h>
#include <conio.h>

int main()
{
    int valor1 = 10;
    int valor2 = 20;
    int *pe;

    pe = &valor1;
    printf("lo apuntado por pe es:%i\n", *pe);
    printf("la direccion que almacena es:%p\n", pe);
    pe = &valor2;
    printf("lo apuntado por pe es:%i\n", *pe);
    printf("la direccion que almacena es:%p\n", pe);

    getch();
    return 0;
}