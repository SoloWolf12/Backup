#include <stdio.h>
#include <conio.h>

int main()
{
    int val, positivo, negativo, mul15, par, cont, op1, op2, op3, i;

    positivo = 0;
    negativo = 0;
    mul15 = 0;
    par = 0;
    cont = 1;
    op3=0;

    for (i = 0; i < 10; ++i)
    {
        printf("ingrese el valor %i :\n", cont);
        scanf("%i", &val);

        op1 = val % 15;
        op2 = val % 2;

        if (val >= 0)
        {
            positivo += 1;
        }
        else
        {
            negativo += 1;
        }
        if (op1 == 0)
        {
            mul15 += 1;
        }
        if (op2 == 0)
        {
            par += 1;
            op3=op3+val;
        }

        cont += 1;
    }

    printf("el total de numeros positivos fue de :%i\n", positivo);
    printf("el total de numeros negativos fue de :%i\n", negativo);
    printf("el total de numeros multiplos de 15 fue de :%i\n", mul15);
    printf("el total de numeros pares fue de :%i\n", par);
    printf("la suma de los numeros pares fue de :%i\n",op3);

    getch();
    return 0;
}