#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct nodo
{
    char info;
    struct nodo *sig;
};

struct nodo *raiz = NULL;

void insertar(char x)
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

char extraer()
{
    if (raiz != NULL)
    {
        char informacion = raiz->info;
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

void cargar(char *formula)
{
    printf("ingrese la formula");
    gets(formula);
}

int verificaBalanceada(char *formula)
{
    for (int f = 0; f < strlen(formula); f++)
    {
        if (formula[f] == '(' || formula[f] == '[' || formula[f] == '{')
        {
            insertar(formula[f]));
        }
        else
        {
            if (formula[f] == ')')
            {
                if (extraer() != '(')
                {
                    return 0;
                }
            }
            else
            {
                if (formula[f] == ']')
                {
                    if (extraer() != '[')
                    {
                        return 0;
                    }
                }
                else
                {
                    if (formula[f] == '}')
                    {
                        if (extraer() != '{')
                        {
                            return 0;
                        }
                    }
                }
            }
        }
    }
    if (vacia())
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char formula[101];
    cargar(formula);
    if (verificarBalanceada(formula))
    {
        printf("la formula esta balanceada");
    }
    else
    {
        printf("la formula no esta balanceada");
    }

    liberar();
    getch();
    return 0;
}