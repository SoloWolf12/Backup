#include <stdio.h>
#include <conio.h>

int recepcion(char gender)
{
    if (gender == 'h')
    {
        printf("\nhombre\n");
    }
    else if (gender == 'm')
    {
        printf("\nmujer\n");
    }
}

int main(int largo)
{
    char gender;

    recepcion('h');
    printf("______________\n");
    recepcion('m');
    printf("______________\n");

    printf("seleccione h o m..\n");
    scanf("%c", &gender);
    recepcion(gender);

    getch();
    return 0;
}