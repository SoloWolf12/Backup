#include <stdio.h>
#include <conio.h>

int main()
{
    char letra1 = 'A';
    char letra2 = 65;
    char letra3;
    int conv;

    printf("test uso de chars\n");
    printf("%c\n", letra1);
    printf("%c\n", letra2);
    printf("escriba un caracter\n");
    scanf(" %c", &letra3);
    conv = letra3;
    printf("su caracter fue %c y su numero ASCI es %i\n", letra3, conv);
    printf("%\n", letra1);

    getch();
    return 0;
}