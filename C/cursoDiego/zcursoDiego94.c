#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

int compValores(int v1, int v2, int v3)
{
    if (v1 > v2 && v1 > v3)
    {
      printf("el mayor es %d ",v1);
    }
    else if(v2 > v3)
    {
       printf("el mayor es %d ",v2);
    }
    else
    {
        printf("el mayor es %d ",v3);
    }
}

int main()
{
    int val1, val2, val3;
    bool checkfail;

    do
    {
        checkfail = false;
        printf("ingrese valor 1: \n");
        scanf("%d", &val1);
        printf("ingrese valor 2: \n");
        scanf("%d", &val2);
        printf("ingrese valor 3: \n");
        scanf("%d", &val3);

        if (val1 == val2 || val1 == val3 || val2 == val3)
        {
            checkfail = true;
            printf("ingrese valores diferentes\n");
        }
    } while (checkfail == true);

    compValores(val1, val2, val3);
}