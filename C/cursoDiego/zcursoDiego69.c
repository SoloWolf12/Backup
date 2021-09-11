#include <stdio.h>
#include <conio.h>

int main()
{
    int edad1, edad2;
    char sexo1;
    char sexo2;

    printf("ingrese la edad persona 1: ");
    scanf("%i", &edad1);
    printf("ingrese el sexo de la persona 1 (m/f)");
    scanf(" %c", &sexo1);
    printf("ingrese la edad persona 2: ");
    scanf("%i", &edad2);
    printf("ingrese el sexo de la persona 2 (m/f)");
    scanf(" %c", &sexo2);

    if (edad1 > edad2)
    {
        printf("persona 1 tiene %i\n", edad1);

        if (sexo1 == 'm')
        {
            printf("es hombre");
        }
        else
        {
            printf("es mujer");
        }
    }
    else if (edad1 < edad2)
    {
        printf("persona 2 tiene %i\n", edad2);

        if (sexo1 = 'm')
        {
            printf("es hombre");
        }
        else
        {
            printf("es mujer");
        }
    }

    getch();
    return 0;
}