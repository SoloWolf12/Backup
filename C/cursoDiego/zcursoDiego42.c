#include <stdio.h>
#include <conio.h>

int main()
{
    int i, cont, numExamenes, nota, aprobado, reprobado;

    cont = 1;
    aprobado = 0;
    reprobado = 0;

    printf("cuantos examenes fueron realizados? ");
    scanf("%i", &numExamenes);

    for (i = 0; i < numExamenes; ++i)
    {
        printf("escriba nota del examen %i: ", cont);
        scanf("%i", &nota);

        if (nota >= 7)
        {
            aprobado += 1;
        }
        else
        {
            reprobado += 1;
        }

        cont += 1;
    }
    printf("el total de aprobados fue de %i y el de reprobados %i", aprobado, reprobado);

    getch();
    return 0;
}