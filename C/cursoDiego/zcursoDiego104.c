#include <stdio.h>
#include <conio.h>

int cargarvector(int vect1[5])
{
    printf("cargue los datos del vector: \n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d:_ ", (i + 1));
        scanf("%i", &vect1[i]);
    }
}

int suma(int v1[5], int v2[5], int final[5])
{

    for (int i = 0; i < 5; i++)
    {
        final[i] = v1[i] + v2[i];
    }
}

int main()
{
    int vector1[5];
    int vector2[5];
    int final[5];

    cargarvector(vector1);
    cargarvector(vector2);
    suma(vector1, vector2, final);

    for (int i = 0; i < 5; i++)
    {
        printf("%d", final[i]);
    }

    getch();
    return 0;
}