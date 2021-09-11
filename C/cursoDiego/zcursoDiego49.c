#include <stdio.h>
#include <conio.h>

// ingresar lados de un numero N de triangulos
// decir por cada uno, si es equilatero isoseles o escaleno
// decir cuantos hay de cada tipo
// decir de cuantos hay menos

int main()
{
    int i, val1, val2, val3, cont1, cont2, cont3, series, res;
    char a[] = "El triangulo menos repetido fue el equilatero";
    char b[] = "El triangulo menos repetido fue el isosceles";
    char c[] = "El triangulo menos repetido fue el escaleno";
    char z[] = "El numero de triangulos es el mismo en los 3";
    char y[] = "dos triangulos comparten el minimo de veces repetidos";

    cont1 = 0;
    cont2 = 0;
    cont3 = 0;

    printf("cuantos triangulos quiere ingresar? ");
    scanf("%i", &series);

    for (i = 0; i < series; ++i)
    {
        do
        {
            printf("ingrese largo de primer lado: \n");
            scanf("%i", &val1);
            printf("ingrese largo del segundo lado: \n");
            scanf("%i", &val2);
            printf("ingrese largo del tercer lado: \n");
            scanf("%i", &val3);

            if (val1 <= 0 || val2 <= 0 || val3 <= 0)
            {
                printf("ingrese un valor no negativo\n");
            }
        } while (val1 <= 0 || val2 <= 0 || val3 <= 0);

        if (val1 == val2 && val2 == val3)
        {
            printf("este triangulo es equilatero\n");
            cont1 += 1;
        }
        else if (val1 == val2 || val1 == val3 || val2 == val3)
        {
            printf("este triangulo es isosceles\n");
            cont2 += 1;
        }
        else
        {
            printf("este triangulo es escaleno\n");
            cont3 += 1;
        }
    }

    if (cont1 == cont2 && cont2 == cont3)
    {
        res = z;
    }
    else if (cont1 < cont2)
    {
        if (cont1 < cont3)
        {
            res = a;
        }
    }
    else if (cont2 < cont1)
    {
        if (cont2 < cont3)
        {
            res = b;
        }
    }
    else if (cont3 < cont1)
    {
        if (cont3 < cont1)
        {
            res = c;
        }
    }
    else
    {
        res = y;
    }

    printf("Total \n", cont1);
    printf("%i equilateros:  \n", cont1);
    printf("%i isosceles:  \n", cont2);
    printf("%i escalenos:  \n", cont3);
    printf("%s", res);
}