#include<stdio.h>
#include<conio.h>
int main()
{
float val1, val2, val3, res;  

printf("ingrese primer nota: ");
scanf("%f",&val1);
printf("ingrese segunda nota: ");
scanf("%f",&val2);
printf("ingrese tercer nota: ");
scanf("%f",&val3);

res= (val1+val2+val3)/3;

if (res >= 7){
printf("aprobado");
}
else {
printf("reprobado");
}
getch();
return 0;
}