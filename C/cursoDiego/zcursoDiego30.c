#include<stdio.h>
#include<conio.h>

int main()
{
    int num, cont;
    printf("ingrese un numero: ");
    scanf("%i",&num);

    cont=0;

    while(cont<=num)
    {
        printf("%i\n",cont);
        cont+=1;
    } 
    getch();
    return 0;
}