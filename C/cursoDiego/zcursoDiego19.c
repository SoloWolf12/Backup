#include <stdio.h>
#include <conio.h>

int main()
{
    int numPreguntas, numRespuestas, prom, checkfail;

    do
    {
        printf("cuantas preguntass fueron hechas? ");
        scanf("%i", &numPreguntas);
        printf("cuantas fueron respondidas correctamente?: ");
        scanf("%i", &numRespuestas);

        checkfail = numPreguntas - numRespuestas;

        if (checkfail < 0)
        {
            printf("no puede tener mas respuestas que preguntas\n");
        }
    } while (checkfail < 0);

    prom = (numRespuestas * 100) / numPreguntas;

    if (prom >= 90)
    {
        printf("puntaje maximo");
    }
    else if (prom >= 75)
    {
        printf("puntaje medio");
    }
    else if (prom >= 50)
    {
        printf("puntaje regular");
    }
    else
    {
        printf("no llega");
    }

    printf(" obtuvo un%i%%", prom);
    getch();
    return 0;
}
