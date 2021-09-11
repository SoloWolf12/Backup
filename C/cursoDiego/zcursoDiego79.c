#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char data1[10];
    char data2[10];

    printf("ingrese una palabra\n");
    gets(data1);
    printf("ingrese una segunda palabra\n");
    gets(data2);

    //printf("%s %s",data1,data2);

    if (strcmp(data1,data2) == 0)
    {
        printf("iguales");
    }

}