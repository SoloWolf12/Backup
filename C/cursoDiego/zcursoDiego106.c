#include <stdio.h>
#include <conio.h>
void cargaAlturas(float alturas[])
{
    int i = 0;
    while (i < 5)
    {
        printf("ingrese altura de la persona %i: ", (i + 1));
        scanf("%f", &alturas[i]);
        i++;
    }
}
float promedio(float altura[])
{
    float suma = 0;
    float prom;
    int i;
    for (i = 0; i < 5; i++)
    {
        suma = suma + altura[i];
    }
    prom = suma / 5;
    return prom;
}
int main()
{
    float alturas[5];
    float nprom = 0;
    int cont = 0;
    cargaAlturas(alturas);
    nprom = promedio(alturas);

    for (int i = 0; i < 5; i++)
    {
        if (alturas[i] >= nprom)
        {
            cont++;
        }
    }

    printf("en total %d personas estan por encima o en el promedio de altura\n", cont);
    getch;
    return 0;
}