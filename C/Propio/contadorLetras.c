#include <stdio.h>
#include <conio.h>

int main()
{

    char word[10];
    int cont = 0;
    int x = 0;

    printf("pone algo\n");
    gets(word);

    while (word[x] != '\0')
    {
        cont++;
        x++;
    }

    printf("su palabra tiene %i letras", cont);

    getch();
    return 0;
}