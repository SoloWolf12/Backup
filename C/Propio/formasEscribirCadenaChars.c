#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char palabra[30] = "hola";

    printf("forma 1, imprimiendo el string \n");

    printf("%s", palabra);

    printf("\nforma 2, imprimiendo por posiciones \n");

    //en esta forma intentamos escribir todo hasta que encontremos el caracter zero "\n"
    //toda cadena siempre tiene un elemento final que no se ve en el print que siempre ocupa \n 
    //por lo que int lista[5]=1,2,3,4.
    int pos = 0;

    while (palabra[pos] != '\0')
    {
        printf("%c", palabra[pos]);
        pos++;
    }

    int i;

    printf("\nforma 3.. agregando libreria string.h.. \n");

    for (i = 0; i < strlen(palabra); i++)
    {
        printf("%c", palabra[i]);
    }
}
