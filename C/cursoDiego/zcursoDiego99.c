#include <stdio.h>
#include <conio.h>

float promediar(float v1, float v2, float v3)
{
    float prom;
    prom = (v1 + v2 + v3) / 3; 
    return prom;
}

int main()
{
    int val1, val2, val3;

    printf("ingrese valor 1: \n");
    scanf("%d", &val1);
    printf("ingrese valor 2: \n");
    scanf("%d", &val2);
    printf("ingrese valor 2: \n");
    scanf("%d", &val3);

    printf("el promedio es %f", promediar(val1, val2, val3));

    getch();
    return 0;
}