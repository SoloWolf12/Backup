#include <stdio.h>
#include <conio.h>

void ingPalabra(char palabra[30])
{
    printf("ingrese una palabra: \n");
    gets(palabra);
}

int conVocales(char palabra[30])
{
    int total = 1;
    int i = 0;
    int cont = 0;

    while (palabra[i] != '\0')

    {
        if ((palabra[i]) == 'a' || (palabra[i]) == 'A' || (palabra[i]) == 'e' || (palabra[i]) == 'E' || (palabra[i]) == 'i' || (palabra[i]) == 'I' || (palabra[i]) == 'o' || (palabra[i]) == 'O' || (palabra[i]) == 'u' || (palabra[i]) == 'U')
        {
            cont++;
        }
        i++;
    }
    return cont;
}

int main()
{
    char palabra[30];
    ingPalabra(palabra);
    conVocales(palabra);
    printf("su palabra tiene %d vocales", conVocales(palabra));

    getch();
    return 0;
}