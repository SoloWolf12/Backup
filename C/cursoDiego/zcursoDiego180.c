#include <stdio.h>
#include <conio.h>

int main()
{

    int nota1, nota2, nota3;
    float  promedio;
    printf("ingrese primer nota:");
    scanf("%d", &nota1);
    printf("ingrese segnda nota:");
    scanf("%d", &nota2);
    printf("ingrese tercer nota:");
    scanf("%d", &nota3);

    promedio =(float) (nota1 + nota2 + nota3)/3;
    printf("%f", promedio);

    getch();
    return 0;
}