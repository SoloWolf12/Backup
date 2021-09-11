#include <stdio.h>
#include <conio.h>

struct punto
{
    int x;
    int y;
};

struct triangulo
{
    struct punto punto1;
    struct punto punto2;
    struct punto punto3;
};

struct triangulo cargar()
{
    struct triangulo t;
    t.punto1.x=10;
    t.punto1.y=34;
    t.punto2.x=100;
    t.punto2.y=23;
    t.punto3.x=10;
    t.punto3.y=70;
return t;
};


void imprimir(struct triangulo t)
{
    printf("coordenadas de los vertices del  triangulo \n");
    printf(" %d %d\n",t.punto1.x,t.punto1.y);
    printf("coordenadas de los vertices del  triangulo \n");
    printf(" %d %d\n",t.punto2.x,t.punto2.y);
    printf("coordenadas de los vertices del  triangulo \n");
    printf(" %d %d\n",t.punto3.x,t.punto3.y);


}

int main()
{
struct triangulo triangulo1;

triangulo1=cargar();
imprimir(triangulo1);

    getch();
    return 0;
}