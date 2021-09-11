#include <stdio.h>
#include <conio.h>

int main()
{
    char word[20];
    int cont = 0;
    int pos = 0;

    printf("escriba una palabra\n");
    gets(word);

    while (word[pos] != '\0')
    {
        cont++;
        pos++;
    }

    printf("la palabra que escribio fue %s y tiene %i letras", word, cont);

    getch();
    return 0;
}