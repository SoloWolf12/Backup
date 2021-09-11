#include <stdio.h>
#include <conio.h>
int main()
{

    int val1, val2, val3;

    printf("ingrese su primer valor: ");
    scanf("%i", &val1);
    printf("ingrese su segunda valor: ");
    scanf("%i", &val2);
    printf("ingrese su tercer valor: ");
    scanf("%i", &val3);

    while (val1==val2 || val1==val3 || val2==val3){
        
        printf("ningun valor puede ser igual a otro\n");
        printf("ingrese su primer valor: ");
        scanf("%i", &val1);
        printf("ingrese su segunda valor: ");
        scanf("%i", &val2);
        printf("ingrese su tercer valor: ");
        scanf("%i", &val3);

    }

    if (val1 > val2 && val1 > val3)
    {
        printf("val 1 mas grande");
    }
    else
    {
        if (val2 > val3)
        {
            printf("val 2 mas grande");
        }
        else
        {
            printf("val 3 mas grande");
        }
    }

    getch();
    return 0;
}