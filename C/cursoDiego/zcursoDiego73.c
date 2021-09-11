#include <stdio.h>
#include <conio.h>

int main()
{
    char min[10];
    int cont = 0;
    int pos = 0;

    printf("Escriba una palabra en minuscula \n");
    gets(min);

    while (min[pos] != '\0')
    {
        if (min[pos] == 'a' || min[pos] == 'e' || min[pos] == 'i' || min[pos] == 'o' || min[pos] == 'u')
        {
            cont++;
        }

        pos++;
    }

    printf("Su palabra tiene %i vocales..", cont);

    getch();
    return 0;
}