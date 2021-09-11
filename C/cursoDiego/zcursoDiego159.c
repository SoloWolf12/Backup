/* 

Listas tipo Pila
Una lista es del tipo pila si tantos las inserciones
como las extracciones son por el mismo lado de la misma
se las llama listas "lifo" Last IN first OUT

Puede almacenar CUALQUIER tipo de valor

*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct nodo
{
    int info;
    struct nodo *sig;
};

struct nodo *raiz = NULL;

void insertar(int x)
{
    struct nodo *nuevo;
    nuevo = malloc(sizeof(struct nodo));
    nuevo->info = x;
    if (raiz == NULL)
    {
        raiz = nuevo;
        nuevo->sig = NULL;
    }
    else
    {
        nuevo->sig = raiz;
        raiz = nuevo;
    }
}

int extraer()
{
    if (raiz != NULL)
    {
        int informacion = raiz->info;
        struct nodo *bor = raiz;
        raiz = raiz->sig;
        free(bor);
        return informacion;
    }
    else
    {
        return -1;
    }
}

void imprimir()
{
    struct nodo *reco = raiz;
    printf("lista completa. \n");
    while (reco != NULL)
    {
        printf("%i ", reco->info);
        reco = reco->sig;
    }
    printf("\n");
}

void liberar()
{
    struct nodo *reco = raiz;
    struct nodo *bor;

    while (reco != NULL)
    {
        bor = reco;
        reco = reco->sig;
        free(bor);
    }
}

int main()
{
    insertar(10);
    insertar(4);
    insertar(5);
    printf("extraer de la pila:%i\n", extraer());
    imprimir();
    liberar();
    getch();
    return 0;
}