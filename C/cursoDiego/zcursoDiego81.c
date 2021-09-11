#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{

    char nombre[30];
    char apellido[30];
    char completo [60];

    printf("ingrese un nonbre\n");
    gets(nombre);
    printf("ahora un apellido \n");
    gets(apellido);

    strcat(nombre,apellido);

    printf("%s",nombre); 

}