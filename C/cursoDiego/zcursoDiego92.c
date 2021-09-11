#include <stdio.h>
#include <conio.h>

int superficie(int largo)
{
    int calc;

    calc = largo * largo;

    return calc;
}

int perimetro(int largo)
{
    int calc2;

    calc2 = largo * 4;

    return calc2;
}

int main()
{
    int lar;
    //printf("ingrese el largo del lado de un cuadrado: \n");
    //scanf("%d", &lar);

    for (lar = 10; lar <= 20; lar++)
    {
        superficie(lar);
        perimetro(lar);
        printf("la superficie de un cuadro con %d de lado es %d y su perimetro es %d..\n", lar, superficie(lar), perimetro(lar));
    }

    getch();
    return 0;
}

//sup=