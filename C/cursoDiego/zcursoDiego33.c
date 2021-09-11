#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

int main()
{
    int numExamenes, nota, cont, checkfail, contNotas, aprobados, op;

    cont = 0;
    aprobados = 0;
    contNotas = 1;
   
    do
    {
        printf("cuantos alumnos fueron examinados? ");
        scanf("%i", &numExamenes);

        checkfail = false;
        if (numExamenes == 0)
        {
            printf("ponga un numero superior a 0");
            checkfail = true;
        }
    } while (checkfail == true);

    while (cont < numExamenes)
    {
        do {
        printf("escriba la nota numero %i: ", contNotas);
        scanf("%i", &nota);
        checkfail=false;
        if (nota<0 || nota>10)
        {
            printf("las notas solo pueden estar entre el 0 y el 10..\n");
            checkfail=true;
        }
        
        
        } while (checkfail==true);
        
        contNotas += 1;

        if (nota >= 7)
        {
            aprobados += 1;
        }

        cont += 1;
    }

    op = numExamenes - aprobados;
    
    printf("el numeros de aprobados fue de %i y los reprobados fueron %i", aprobados, op);
    
    getch();
    return 0;
}