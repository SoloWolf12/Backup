//almacenar 3 nombres, en un cuarto poner los 3 anteriores y en orden alfabetico

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char word1[30];
    char word2[30];
    char word3[30];
    char concatenado[90];
    int succes;

    do
    {

        succes = true;

        printf("ingresar la primer palabra: \n");
        gets(word1);
        printf("ingresar la segunda palabra: \n");
        gets(word2);
        printf("ingresar la tercer palabra: \n");
        gets(word3);

        if (strcmp(word1, word2) < 0 && strcmp(word1, word3) < 0)
        {
            printf("cond1\n");
            strcpy(concatenado, word1);

            if (strcmp(word2, word3) == 0)
            {
                printf("cond1-4, no repita contenido por favor\n");
                succes = false;
            }
            if (strcmp(word2, word3) < 0)
            {
                printf("cond1-1\n");
                strcat(concatenado, word2);
                strcat(concatenado, word3);
                printf("Le voy a ordenar lo que puso..\n%s", concatenado);
            }
            else
            {
                printf("cond1-2\n");
                strcat(concatenado, word3);
                strcat(concatenado, word2);
                printf("Le voy a ordenar lo que puso..\n%s", concatenado);
            }
        }
        else if (strcmp(word2, word1) < 0 && strcmp(word2, word3) < 0)
        {
            printf("cond2\n");
            strcpy(concatenado, word2);

            if (strcmp(word1, word3) == 0)
            {
                printf("cond2-4, no repita contenido por favor\n");
                succes = false;
            }

            if (strcmp(word1, word3) < 0)
            {
                printf("cond2-1\n");
                strcat(concatenado, word1);
                strcat(concatenado, word3);
                printf("Le voy a ordenar lo que puso..\n%s", concatenado);
            }
            else
            {
                printf("cond2-2\n");
                strcat(concatenado, word3);
                strcat(concatenado, word1);
                printf("Le voy a ordenar lo que puso..\n%s", concatenado);
            }
        }
        else if (strcmp(word3, word1) < 0 && strcmp(word3, word2) < 0)
        {
            printf("cond3\n");
            strcpy(concatenado, word3);

            if (strcmp(word1, word1) == 0)
            {
                printf("cond3-4, no repita contenido por favor\n");
                succes = false;
            }

            if (strcmp(word1, word2) < 0)
            {
                printf("cond3-1\n");
                strcat(concatenado, word1);
                strcat(concatenado, word2);
                printf("Le voy a ordenar lo que puso..\n%s", concatenado);
            }
            else
            {
                printf("cond3-2\n");
                strcat(concatenado, word2);
                strcat(concatenado, word1);
                printf("Le voy a ordenar lo que puso..\n%s", concatenado);
            }
        }
        else
        {
            printf("cond4, no repita contenido por favor\n");
            succes = false;
        }
    } while (succes == false);

    getch();
    return 0;
}