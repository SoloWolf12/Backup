#include <stdio.h>
#include <conio.h>

int main()
{
    int i;
    int sueldos[5];

    printf("escriba los sueldos: \n");
    for (i = 0; i < 5; i++)
    {

        scanf("%i", &sueldos[i]);
    }

    printf("lista de sueldos..");
    for (i = 0; i < 5; i++)
    {
        printf("%i", &sueldos[i]);
    }

    getch();
    return 0;
}