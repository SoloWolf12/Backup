#include <stdio.h>
#include <conio.h>

int superficie(int v1, int v2)
{
    int res;
    res = (v1 * 2) + (v2 * 2);
    return res;
}

int main()
{
    int val1, val2;

    printf("ingrese el largo de un lado del rectangulo: \n");
    scanf("%d",&val1);
    printf("ingrese el largo de otro lado del rectangulo que no sea el opuesto al anterior: \n");
    scanf("%d",&val2);

    printf("la superficie de su rectangulo es de %d", superficie(val1, val2));
    getch;
    return 0;
}