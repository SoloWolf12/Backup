#include <stdio.h>
#include <conio.h>

void presentacion()
{
    printf("esto es un test, bienvenidos\n");
    printf("____________________________\n");
}

void suma()
{
    int val1;
    int val2;
    int res;
    printf("ingrese val 1\n");
    scanf("%i", &val1);
    printf("ingrese val 2\n");
    scanf("%i", &val2);
    res = val1 + val2;
    printf("res = %i\n",res);
}

void fin()
{
    printf("gracias por usar este programa\n");
}

int main()
{
    presentacion();
    suma();
    fin();

    getch();
    return 0;
}