#include <stdio.h>
#include <stdlib.h>

struct nodo{
    int val;
    struct nodo *siguiente;
};

void agregar(struct nodo *, int);
void imprimir(struct nodo *);
void eliminar(struct nodo *, int);

int main()
{   
    struct nodo *cabeza = malloc(sizeof(struct nodo));
    cabeza->val = 1;
    struct nodo* cur = cabeza;   
	int i; 
    for(i = 2; i<=3; i++){      
        struct nodo *newNodo = malloc(sizeof(struct nodo));
        newNodo-> val = i;
        cur-> siguiente = newNodo;
        cur = newNodo;
    }
    cur-> siguiente = NULL;
    
    imprimir(cabeza);    
    //agregar(cur,4);
    //imprimir(cabeza);
    //eliminar(cabeza,0);
    //imprimir(cabeza);
    
    return 0;
}

void agregar(struct nodo *cur, int n)
{
    struct nodo *nodooo = malloc(sizeof(struct nodo));
    nodooo-> val = n;
    nodooo-> siguiente = NULL;
    cur->siguiente = nodooo;  
}

void imprimir(struct nodo *cabeza)
{
    struct nodo *cur;
    for(cur = cabeza; cur != NULL; cur = cur->siguiente){
        printf("%d -> ", cur->val);
    }
    printf("\n");
}

void eliminar(struct nodo *cabeza, int n)
{
    struct nodo *cur = cabeza;
    struct nodo *prev = cabeza;
    printf("%d\n",cabeza->val);
    if (cabeza-> val == n){
        cabeza = cabeza->siguiente;
        free(prev);
    }

}

