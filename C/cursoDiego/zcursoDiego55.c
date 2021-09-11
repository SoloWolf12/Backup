#include <stdio.h>
#include <conio.h>
int main()
{
    int cont, menMedia, media, mayMedia;
    float val;
    val = 1;
    cont = 1;
    menMedia = 0;
    media = 0;
    mayMedia = 0;
    printf("ingrese largo de pieza %i (0 finaliza)\n", cont);

    do
    {

        scanf("%f", &val);
        if (val < 9.8)
        {
            menMedia += 1;
        }
        else if (val <= 10.2)
        {
            media += 1;
        }
        else
        {
            mayMedia += 1;
        }
        cont += 1;
    } while (val != 0);
    printf("%i piezas no llegan a 9.8, %i estan bien y %i estan por encima", menMedia, media, mayMedia);
    getch();
    return 0;
}
