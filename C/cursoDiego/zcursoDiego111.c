#include<stdio.h>
#include<conio.h>

void cargar(int vector[5])
{
    for (int i=0; i<5;i++)
    {
        printf("ingresa: \n");
        scanf("%d",&vector[i]);
    }
}

void mayor(int vector[5])
{
    int may=vector[0];
    int pos=0;

    for (int i=0;i<5;i++)
    {
        if (vector[i]>may)
        {
            may=vector[i];
            pos=i;
        }
    }
    printf("el mayor elemento del v es %d",may);
    printf("esta en pos %d",pos);

}

int main()
{

    int vector[5];
    cargar(vector);
    mayor(vector);
    getch();
    return 0;
}