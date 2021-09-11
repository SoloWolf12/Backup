#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int i;
    int dat1[5]={1,2,3,4,5};

    printf("%s\n",dat1);

for (i=0; i<5 ; i++)
{
    printf("%i\n",dat1[i]);
}
   

    char dat2[5]="hola";

    for (i=0; i<5 ; i++)
{
    printf("%c",dat2[i]);
}

    getch();
    return 0;
}