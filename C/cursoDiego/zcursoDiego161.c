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

int cantidad()
{
    struct nodo *reco = raiz;
    int cant = 0;
    while (reco != NULL)
    {
        cant++;
        reco = reco->sig;
    }
    return cant;
}

int vacia()
{
    if (raiz == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int retorna()
{
    if(raiz!=NULL)
    {
        return raiz->info;
    }
    else
    {
        return -1;
    }
}

int main()
{
    if (vacia() == 1)
    {
        printf("la lista esta vacia 1\n");
    }
    insertar(10);
    if (vacia() == 1)
    {
        printf("la lista esta vacia 2\n");
    }
    insertar(4);
    insertar(5);
    printf("cantidad de nodos: %d\n", cantidad());
    imprimir();
    printf("extraemos de de la pila:%i\n", extraer());
    printf("cantidad de nodos: %d\n", cantidad());
    imprimir();

    printf("extraemos todos los nodos de la lista tipo pila\n");
    while (vacia() == 0)
    {
        printf("%d\n", extraer());
    }

    liberar();
    getch();
    return 0;
}