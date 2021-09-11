#include <stdio.h>
#include <conio.h>

int main()
{
    int i;

    int noVector[5];

    for (int i = 0; i < 5; i++)
    {
        printf("ingrese valor %i :", i + 1);
        scanf("%i", &noVector[i]);
    }

    for (i = 0; i < 4; i++)
    {
        if (noVector[i] > noVector[i + 1])
        {
            printf("cadena rota, no van de menor a mayor");
            break;
        }
        if (i = 4)
        {
            printf("van de menor a mayor");
        }
    }

    getch();
    return 0;
}