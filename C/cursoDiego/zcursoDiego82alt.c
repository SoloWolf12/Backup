#include <stdio.h>
#include <conio.h>
#include <string.h>
#include<stdbool.h>

int main()
{
    char username[30];
    char pass[30];
    int usserkey=true;
    int passkey=true;

do 
{
    usserkey=true;
    passkey=true;
    printf("ingrese usuario: \n");
    gets(username);
    printf("ingrese pass: \n");
    gets(pass);

    if(strcmp(username,"dan") == 0)
    {
        printf("usuario correcto\n");
    }
    else
    {
        usserkey=false;
        printf("Usuario incorrecto\n");
    }

    if(strcmp(pass,"123") == 0)
    {
        printf("pass correcto\n");
    }
    else
    {
        passkey=false;
        printf("pass incorrecto\n");
    }

    printf("%i   %i \n",usserkey,passkey);
} while ((usserkey==false) || (passkey==false));

printf("success");
}