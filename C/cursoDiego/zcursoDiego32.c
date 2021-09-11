#include <stdio.h>
#include <conio.h>

int main()
{
    int tPiezas, cont, aptos, numPieza;
    float largo;

    cont = 0;
    aptos = 0;
    printf("cuantas piezas posee? ");
    scanf("%i", &tPiezas);

    while (cont < tPiezas)
    {
        printf("ingrese el largo de pieza num %i: ",numPieza);
        scanf("%f", &largo);

        numPieza+=1;
        cont += 1;

        if (largo >= 1.2 && largo <= 1.3)
        {
            aptos += 1;
        }
    }

    printf("usted posee %i piezas aptas", aptos);
    getch();
    return 0;
}