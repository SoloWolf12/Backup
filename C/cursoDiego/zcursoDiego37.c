#include <stdio.h>
#include <conio.h>

int main()
{

    int serie,cont;

       serie = 8;
       cont=1;

    while (serie < 500)
    {
        printf("%i: %i.\n", cont, serie);
        serie += 8;
        cont+=1;
    }

    getch();
    return 0;
}