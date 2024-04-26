//Estructura de datos - PILA.

#include <stdio.h>
#include <stdlib.h>

struct Nodo {
  int dato;
  struct Nodo *siguiente;
};

//Primer nodo de la lista.

struct Nodo *raiz = NULL;

void Put(int);

void Print(void);

int Pop(void);

void Liberar(void);

int main(){

    int n = 0, tamPila, elemIn;

    printf("Ingrese el tamano de la pila: ");
    scanf("%d", &tamPila);

    while(n < tamPila){
        printf("Ingrese un elemento: ");
        scanf("%d", &elemIn);

        Put(elemIn);

        n++;
    }

    printf("\nContenido de la pila:\n");
    Print();

    printf("\n\nContenido de la pila retirando el nodo tope:\n");
    Pop();
    Print();

    Liberar();

    return 0;
}

void Put(int elemento){

  struct Nodo *nElem;
   nElem = malloc(sizeof(struct Nodo));
   nElem->dato = elemento;

     if(raiz == NULL){
        raiz = nElem;
        nElem->siguiente = NULL;
     } else {
        nElem->siguiente = raiz;
        raiz = nElem;
       }
}

void Print(void){

    struct Nodo *recorrer = raiz;

    while(recorrer != NULL){
        printf("%i ", recorrer->dato);
        recorrer = recorrer->siguiente;
    }
}

int Pop(void){

  if(raiz != NULL){
    int top = raiz->dato;
    struct Nodo *temp = raiz;
    raiz = raiz->siguiente;
    free(temp);

    return top;
  } else {
    return -1;
    }
}

void Liberar(void){

    struct Nodo *recorrer = raiz;
    struct Nodo *temp;

    while(recorrer != NULL){
        temp = recorrer;
        recorrer = recorrer->siguiente;
        free(temp);
    }
}
