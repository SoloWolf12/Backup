#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char val1[30];
    char val2[30];

    printf("ingresar la primer palabra: \n");
    gets(val1);
    printf("ingresar segunda palabra: \n");
    gets(val2);

    if (strlen(val1) > strlen(val2))
    {
        printf("val1 mas grande");
    }
    else 
    {
        printf("val2 mas grande");
    }

    getch;
    return 0;
}