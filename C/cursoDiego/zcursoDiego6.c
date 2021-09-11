#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, c, d;
    int suma, producto;

    printf("escriba el primer numero: ");
    scanf("%d", &a);
    printf("escriba el segundo numero: ");
    scanf("%d", &b);
    printf("escriba el tercer numero: ");
    scanf("%d", &c);
    printf("escriba el cuarto numero: ");
    scanf("%d", &d);

    suma = a + b;
    producto = c * d;

    printf("la suma de sus dos primeros valores es %d \n la suma de los ultimos dos valores es %d", suma, producto);

    getch();
}