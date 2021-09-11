#include <stdio.h>
#include <conio.h>

void cargar(char alumno[4][31], int nota[4])
{
    for (int i = 0; i < 4; i++)
    {
        printf("ingrese nombre del alumno:\n");
        gets(alumno[i]);
        printf("ingrese su nota: \n");
        scanf("%d", &nota[i]);
        fflush(stdin);
    }
}

void imprimir(char alumno[4][31], int nota[4])
{
    for (int i = 0; i < 4; i++)
    {

if(nota[i]>7)
        {
            printf("%s, muy bien, un %d.\n", alumno[i], nota[i]);
            
        }
        else if(nota[i]>3)
        {
            printf("%s, bien, un %d.\n", alumno[i], nota[i]);
        }
        else
        {
            printf("%s, nada bien, un %d.\n", alumno[i], nota[i]);
        }

       
    }
}

int calificar(char alumno[4][31], int nota[4])
{
    int cont=0;

    for (int i = 0; i < 4; i++)
    {
        if(nota[i]>7)
        {
            cont++;
        }
        
    
    }

    return cont;
}

int main()
{
    char alumno[4][31];
    int nota[4];

    cargar(alumno, nota);
    imprimir(alumno, nota);
    printf("un total de %d almunos tuvieron mas de 7",calificar(alumno,nota));

    getch();
    return 0;
}