#include <stdio.h>
#include <conio.h>

int main()
{
    int i;
    char letras;

    //forma 1

    printf("metodo 1\n\n");

    for (i = 65; i < 123; i++)
    {
        if (i > 90 && i < 97)
        {
            if (i = 96)
            {
                printf("\n");
            }
            continue;
        }

        letras = i;
        printf("%c ", letras);
    }

    //forma 2

    printf("\n\nmetodo 2\n\n");

    for (i = 65; i < 123; i++)
    {
        if (i > 90 && i < 97)
        {
            if (i = 96)
            {
                printf("\n");
            }
            continue;
        }

        printf("%c ", i);
    }

    //forma alternativa, se puede directamente usar los chars como letras e incrementarlos

    printf("\n\nmetodo 3\n\n");

    for (letras = 'A'; letras <= 'z'; letras++)
    {
        if (letras > 90 && letras < 97)
        {
            if (i = 96)
            {
                printf("\n");
            }
            continue;
        }

        printf("%c ", letras);
    }

    getch();
    return 0;
}