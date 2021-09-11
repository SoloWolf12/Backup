#include <stdio.h>

/* Fib = a+b
A= B
B = fib

(fib)=(a)2+(b)3    =5
(a)2=(b)3
(b)3=(fib)5

(fib)5=(a)3+(b)5 =5
(a)3=(b)5
(b)5=(fib)8

(fib)8=(a)5+(b)8 =13
(a)x=(b)x
(b)x=(fib)x

(fib)x=(a)x+(b)x =x
(a)x=(b)x
(b)x=(fib)x */

int main()
{
    int a, b, cont, sucesiones, fib;

    cont = 0;

    fib = 1;
    a = 0;
    b = 1;

    printf("cuantas suceciones quiere? ");
    scanf("%i", &sucesiones);

    while (cont < sucesiones)
    {
        printf("%i\n", fib);

        fib = a + b;
        a = b;
        b = fib;

        cont += 1;
    }
}
