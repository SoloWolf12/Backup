#include <stdio.h>
#include <conio.h>

float cargarNotas(float resultado[5])
{
    int i = 0;
    for (i = 0; i < 5; i++)
    {
        printf("escriba nota: %d\n", (i + 1));
        scanf("%f", &resultado[i]);
    }
}

float promedio(float resPromedio[5])
{
    int i;
    float total = 0;
    for (i = 0; i < 5; i++)
    {
        total = total + resPromedio[i];
    }
    total = (total / i);

    return total;
}

int main()
{
    float cursoA[5];
    float cursoB[5];

    cargarNotas(cursoA);
    cargarNotas(cursoB);

    if (promedio(cursoA) > promedio(cursoB))
    {
        printf("curso A tiene promedio mayor con %f y el B tiene %f", promedio(cursoA), promedio(cursoB));
    }
    else
    {
        printf("curso B tiene promedio mayor con %f y el A tiene %f", promedio(cursoB), promedio(cursoA));
    }

    getch();
    return 0;
}
