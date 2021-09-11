#include <stdio.h>
#include <conio.h>

int cargarNumeros(int retNum[5])
{
    for (int i = 0; i < 5; i++)
    {
        printf("cargue valor %d: \n ", (i + 1));
        scanf("%d", &retNum[i]);
    }
}

int buscarMenor(int retMenor[5])
{
    int menor = 999;
    int pos = 0;

    for (int i = 0; i < 5; i++)
    {
        if (retMenor[i] <= menor)
        {
            menor = retMenor[i];
            pos = i;
        }
    }
    return menor;
}

int buscarPosMin(int retMenor[5])
{
    int menor = 999;
    int pos = 0;

    for (int i = 0; i < 5; i++)
    {
        if (retMenor[i] <= menor)
        {
            menor = retMenor[i];
            pos = i;
        }
    }
    return pos;
}

int buscarRepes(int retMenor[5])
{
    int menor = 999;
    int pos = 0;
    int repetidos = 0;

    for (int i = 0; i < 5; i++)
    {
        if (retMenor[i] <= menor)
        {
            menor = retMenor[i];
            pos = i;
        }
    }

    printf("test, el menor final es %d\n", menor);
    for (int i = 0; i < 5; i++)
    {
        if (retMenor[i] == menor)
        {
            repetidos++;
        }
    }
    return repetidos;
}

int main()
{
    int numeros[5];
    int minNum;
    int posMin;
    int minRepes;

    cargarNumeros(numeros);
    minNum = buscarMenor(numeros);
    posMin = buscarPosMin(numeros);
    minRepes = buscarRepes(numeros);
    printf("el menor es:%d ", minNum);
    printf("y ocupa la posicion %d en la lista\n", posMin);

    if (minNum > 1)
    {
    
        printf("el numero se repite %d veces", minRepes);
    }

    getch();
    return 0;
}