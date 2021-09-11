#include <stdio.h>
#include <conio.h>

int factorial(int fact)
{
    if (fact > 0)
    {
        int valor = fact * factorial(fact-1);
        return valor;
    }
    else
    {
        return 1;
    }
}

int main()
{
    printf("el factorial es: %d",factorial(4)); 
    getch();
    return 0;
}