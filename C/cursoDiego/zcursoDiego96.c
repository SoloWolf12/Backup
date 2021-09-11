#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

int mayOmin(char v)
{

    if (v == 'a' || v == 'A' || v == 'e' || v == 'E' || v == 'i' || v == 'I' 
    || v == 'o' || v == 'O' || v == 'u' || v == 'U')
    {
        printf("es una vocal..");
    }
    else
    {
        printf("no es una vocal..");
    }
}

int main() 
{
    char caracter;
    printf("ingrese un caracter no numerico\n");
    scanf("%c", &caracter);

    mayOmin(caracter);

    getch();
    return 0;
}