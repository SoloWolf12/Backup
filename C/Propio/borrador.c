#include <stdio.h>
#include <conio.h>
#include <math.h>

//referencia
//d²=(x1-x2)²+(y1-y2)²
//d=√((x1 - x2)² + (y1 - y2)²)

int main()
{
  float x1;
  float y1;
  float x2;
  float y2;
  float cuadradoDistanciax;
  float cuadradoDistanciay;
  float resultado;

  printf("ingrese una coordenada x: \n");
  scanf("%f", &x1);
  printf("ingrese una coordenada y: \n");
  scanf("%f", &y1);
  printf("ingrese una nueva coordenada x: \n");
  scanf("%f", &x2);
  printf("ingrese una nueva coordenada y: \n");
  scanf("%f", &y2);

  cuadradoDistanciax = (x2 - x1) * (x2 - x1);

  cuadradoDistanciay = (y2 - y1) * (y2 - y1);

  resultado = sqrt(cuadradoDistanciax + cuadradoDistanciay);

  printf("la distancia entre los 2 puntos es de %f unidades", resultado);
}
