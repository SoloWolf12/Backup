#include <stdio.h>
#include <conio.h>

int main()
{
    char sentence[200];
    int pos = 1;
    int cont = 0;

    printf("escriba algo..\n");
    gets(sentence);

    while (sentence[pos] != '\0')
    {
        if (sentence[pos] == '32')   /* se podia poner el espacio directamente ' ' */
        {
            cont++;
        }
        pos++;
    }

    printf("su frase consta de %i palabras", cont);

    getch();
    return 0;
}