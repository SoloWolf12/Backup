#include <stdio.h>
#include <conio.h>

void incrementar(int *pe)
{
    *pe = *pe + 1;
}

void incrementarNormal(int x)
{
    printf("inc normal%d\n", x);
    x = x + 1;
    printf("inc normal%d\n", x);
}

int main()
{
    int x = 19;
    printf("%d\n", x);
    incrementar(&x);
    printf("%d\n", x);

    incrementarNormal(x);

    printf("%d\n", x);

    getch();
    return 0;
}
