#include <stdio.h>
#include <conio.h>

int main()
{
    char sentence[200];
    int pos = 0;

    printf("escriba una frase\n");
    gets(sentence);

    while (sentence[pos] != '\0')
    {
        if (sentence[pos] == 'a' || sentence[pos] == 'e' || sentence[pos] == 'i' || sentence[pos] == 'o' || sentence[pos] == 'u')
        {
            sentence[pos] = '-';
        }

        pos++;
    }

    printf("su frase ahora dice..\n");
    printf("%s", sentence);

    getch();
    return 0;
}