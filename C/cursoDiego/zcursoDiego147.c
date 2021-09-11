#include <stdio.h>
#include <conio.h>

void intercambiar(int *pel, int *pe2)
{
    int aux = *pel;
    *pel = *pe2;
    *pe2 = aux;
}

int main()
{
    int x1 = 10;
    int x2 = 20;

    printf("%d %d\n", x1, x2);
    intercambiar(&x1, &x2);
    printf("%d %d\n", x1, x2);

    getch();
    return 0;
}