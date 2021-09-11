#include<stdio.h>
#include<conio.h>

int main()
{

    int serie, cont;

    serie=11;
    cont=1;

    while (cont<26)
    {
        printf("%i: %i.\n",cont,serie);
        serie+=11;
        cont+=1;
    }
    

    getch();
    return 0;
}