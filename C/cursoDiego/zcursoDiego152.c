#include <stdio.h>
#include <conio.h>

#define LARGO 40

void cargarNormal(char ppalabra[LARGO])
{
    printf("ingresa una palabra: \n");
    gets(ppalabra);
    printf("como es obvio, pusiste %s\n", ppalabra);
}
void cargar(char *pal)
{
    printf("ingrese una palabra: \n");
    gets(pal);
    printf("la palabra es %s\n", pal);
}

int main()
{
    char palabra[LARGO];

    cargarNormal(palabra);
    cargar(palabra);

    getch();
    return 0;
}