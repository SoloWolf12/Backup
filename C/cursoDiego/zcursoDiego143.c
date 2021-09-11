#include <stdio.h>
#include <conio.h>

int main()
{
    int x, y;     //variables definida, no iniciada
    int *puntero; //variable definida, no se puede iniciar

    printf("en este momento, el puntero vale %d y su valor en memoria es %p\n",*puntero,puntero);

    puntero = &x;   //dirección de memoria
    *puntero = 100; //se guarda lo apuntado a esa dirección de memoria

    printf("en este momento, el puntero vale %d y su valor en memoria es %p\n", *puntero, puntero);

    puntero = &y;
    *puntero = 200;

    printf("en este momento, el puntero vale %d y su valor en memoria es %p\n", *puntero, puntero);

    printf("x vale %d \n", x);
    printf("y vale %d \n", y);

    getch();
    return 0;
}
