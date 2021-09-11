#include <stdio.h>
#include <conio.h>

int main()
{

    char c1 = 'A';
    char c2 = 'B';
    char *pc; //referencia a puntero tipochar

    pc = &c1; //se guarda la DIRECCION de C1, no el valor
    printf("%c\n", c1);   // A
    *pc = 'a';
    printf("%c\n", c1); // a 
    c1 == 'Z';
    printf("%c\n", *pc); //
    pc = &c2;
    printf("%c\n", *pc);  // B

    getch();
    return 0;
}