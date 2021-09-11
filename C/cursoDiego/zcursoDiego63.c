#include <stdio.h>
#include <conio.h>

int main()
{
    int i;
    int cont = 1;
    int total1 = 0;
    int total2 = 0;
    int prom1 = 0;
    int prom2 = 0;
    int cursoA[5];
    int cursoB[5];
    int prom;

    for (i = 0; i < 4; i++)
    {
        printf("curso A, ingrese nota %i : \n", cont);
        scanf("%i", &cursoA[i]);
        cont++;
        total1 = total1 + cursoA[i];
    }
    prom1 = total1 / 4;

    cont = 1;

    for (i = 0; i < 4; i++)
    {
        printf("curso B, ingrese nota %i : \n", cont);
        scanf("%i", &cursoB[i]);
        cont++;
        total2 = total2 + cursoB[i];
    }
    prom2 = total2 / 4;

    printf("el promedio del curso A fue de %i y el del B de %i\n", prom1, prom2);
    if (prom1 > prom2)
    {
        printf("Curso A mas promedio");
    }
    else if (prom1 < prom2)
    {
        printf("Curso B mas promedio");
    }
    else
    {
        printf("mismo prom");
    }

    getch();
    return 0;
}