#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char username[30];
    char pass[30];
    char userkey[30] = "dan";
    char passkey[30] = "123";
    char compuesto[60];

    int success = true;
    int contErrores = 0;
    int pos = 0;
    int i;

    do
    {
        success = true;
        printf("ingrese nombre\n");
        gets(username);
        printf("ingrese clave\n");
        gets(pass);

        pos = 0;

        while (username[pos] != '\0')
        {
            //contar cuantas letras tiene el usuario
            pos++;
        }
        for (i = 0; i < pos; i++)
        {
            //ver posicion por posición, si las letras coinciden
            if (username[i] != userkey[i])
            {
                printf("\nnombre usuario incorrecto, volve a ponerlo\n");
                success = false && success;
                printf("error en %c\n", username[i]);
                contErrores++;
            }
            if (contErrores == 0)
            {
                printf("sin errores user, continuar\n");
                success = true && success;
            }
        }

        pos = 0;

        while (pass[pos] != '\0')
        {
            //contar cuantas letras tiene el usuario
            pos++;
        }
        for (i = 0; i < pos; i++)
        {
            //ver posicion por posición, si las letras coinciden
            if (pass[i] != passkey[i])
            {
                printf("PASS incorrecto, volve a ponerlo\n");
                success = false && success;
                printf("error en %c \n", passkey[i]);
                contErrores++;
            }
            if (contErrores == 0)
            {
                printf("sin errores pass, continuar\n");
                success = true && success;
            }
        }
        contErrores = 0;

    } while (success == false);

    printf("\ncontinua codigo, %i", contErrores);

    strcpy(compuesto, username);
    strcat(compuesto, pass);
    printf("pass correcto, %s", compuesto);

    getch();
    return 0;
}
