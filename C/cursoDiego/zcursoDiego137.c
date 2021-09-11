#include <stdio.h>
#include <conio.h>

struct punto
{
    int x;
    int y;
};

struct punto cargar()
{
    struct punto devolverCoordenadas;
    printf("ingrese coordenada X: \n");
    scanf("%d", &devolverCoordenadas.x);
    printf("ingrese coordenada Y: \n");
    scanf("%d", &devolverCoordenadas.y);

    return devolverCoordenadas;
};

void imprimir(struct punto coordenadas)
{
    printf("las coordenadas fueron: \n");
    printf(" %d %d", coordenadas.x, coordenadas.y);
}

void definirCuadrante(struct punto cuadrante)
{
if(cuadrante.x > 0 && cuadrante.y > 0)
{
    printf("primer cuadrante\n");
}
else if(cuadrante.x > 0 && cuadrante.y < 0)
{
    printf("segundo cuadrante\n");
}
else if(cuadrante.x < 0 && cuadrante.y < 0)
{
    printf("tercero cuadrante\n");
}
else
{
    printf("cuarto cuadrante\n");
}
}

int main()
{
    struct punto A, B, C;

    A = cargar();
    imprimir(A);
    definirCuadrante(A);
    B = cargar();
    imprimir(B);
    definirCuadrante(B);
    C = cargar();
    imprimir(C);
    definirCuadrante(C);

    getch();
    return 0;
}