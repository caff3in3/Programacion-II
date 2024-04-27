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

    int elemIn;
    char YorN, opc;

do {
    printf("\nQue desea hacer? \na) Ingresar elemento \nb) Imprimir contenido de la pila \nc) Extraer elemento \nd) Liberar \ne) Salir\n");
    scanf("%c", &opc);

    switch (opc) {

    case 'a':

        printf("Ingrese un elemento: ");
        scanf("%d", &elemIn);

        Put(elemIn);
        do {
         fflush(stdin);
        printf("\nDesea agregar otro elemento?\nY/n: ");
        scanf("%c", &YorN);
        switch (YorN){
    case 'Y':
        printf("\nIngrese un elemento: ");
        scanf("%d", &elemIn);

        Put(elemIn);
        break;

    case 'n':
        break;

    default:
        printf("Opcion Incorrecta");
         }
        }while (YorN != 'n');
        break;

    case 'b':
        printf("\nContenido de la pila:\n");
        Print();
        printf("\n");
        break;

    case 'c':
        if(raiz == NULL){
            Pop();
        } else {
          Pop();
          Print();
         }
        break;

    case 'd':
        Liberar();
         break;

    case 'e':
        return 0;

    default:
        printf("\nOpcion incorrecta\n");
    }
fflush(stdin);
 } while (opc != 'e');

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

    if(raiz != NULL){
    while(recorrer != NULL){
        printf("%i ", recorrer->dato);
        recorrer = recorrer->siguiente;
         }
     } else {
     printf("NULL!!!\n\n");
     }
}

int Pop(void){

  if(raiz != NULL){

    printf("\n\nContenido de la pila retirando el nodo tope:\n");

    int top = raiz->dato;
    struct Nodo *temp = raiz;
    raiz = raiz->siguiente;
    free(temp);

    return top;
  } else {
    printf("\nNO HAY ELEMENTOS QUE EXTRAER!!\n\n");
    }
}

void Liberar(void){

    struct Nodo *temp;

    if(raiz != NULL){
    while(raiz != NULL){
        temp = raiz;
        raiz = raiz->siguiente;
        free(temp);
           }
           printf("\nLIBERACION EXITOSA!!\n\n");
       } else {
         printf("\nLA PILA ESTA VACIA!!\n\n");
          }
    }
