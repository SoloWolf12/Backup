#include <stdio.h>
#include <conio.h>

void imprimir(int x)
{
    if (x > 0)
    {
        printf("%d", x);
        imprimir(x - 1); 
        
    }
}

int main()
{
    imprimir(5);
    getch();
    return 0;
}