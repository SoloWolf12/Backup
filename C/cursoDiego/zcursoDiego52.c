#include <stdio.h>
#include <conio.h>

int main()
{

    int i, cont, val, op, res1, res2, res3;

    cont = 1;
    op = 0;

    printf("cuantos estudiantes posee el turno maniana? \n");
    scanf("%i", &cont);
   
    for (i = 1; i <= cont; ++i)
    {
        printf("que edad tiene el estudiante numero %i? \n", i);
        scanf("%i", &val);
        op = op + val;
    }
    
    res1 = op / cont;
    op = 0;

    printf("cuantos estudiantes posee el turno tarde? \n");
    scanf("%i", &cont);

    for (i = 1; i <= cont; ++i)
    {
        printf("que edad tiene el estudiante numero %i? \n", i);
        scanf("%i", &val);
        op = op + val;       
    }
    
    res2 = op / cont;
    op = 0;

    printf("cuantos estudiantes posee el turno noche? \n");
    scanf("%i", &cont);

    for (i = 1; i <= cont; ++i)
    {
        printf("que edad tiene el estudiante numero %i? \n", i);
        scanf("%i", &val);
        op = op + val;
    }
    res3 = op / cont;

    printf("la maniana tiene un promedio de edad de %i, la tarde de %i y la noche de %i\n\n",res1,res2,res3);

    if(res1<res2)
    {
        if (res1<res3)
        {
            printf("el turno maniana tiene menos promedio de edad");
        }
    }
    else if(res2<res3)
    {
        printf("el turno tarde tiene menos promedio de edad");
    }
    else
    {
        printf("el turno noche tiene menos promedio de edad");
    }

    getch();
    return 0;
}