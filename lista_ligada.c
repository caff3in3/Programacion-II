#include <stdio.h>
#define NE 10

typedef struct entrada{
    int valor;
    int valor_Elemento;
    struct entrada*siguiente;
} Entrada;


int main(){

    Entrada Elementos[NE], busc_Elemento;
    int n = 0, i, encontrado = 0;
    Entrada *listaApuntador = &Elementos[0];

    //Llenado de valores en la lista
    while(n < NE) {
        printf("Ingrese el elemento no %d: ", n+1);
        scanf("%d", &Elementos[n].valor);
        n++;
    }

    //Vinculacion de variables struct
   for (i = 0; i < NE-1; i++) {
   Elementos[i].siguiente = &Elementos[i+1];
   }
   Elementos[NE-1].siguiente = NULL;

    //Recorre toda la lista
    while(listaApuntador != NULL) {
        printf("\n%d", listaApuntador->valor);
        listaApuntador = listaApuntador->siguiente;
        }

        printf("\n\nIngrese el elemento a buscar: ");
        scanf("%d", &busc_Elemento.valor_Elemento);

        //Determinar si un elemento pertenece a la lista
       for(int j = 0; j < NE; j++){
        if(Elementos[j].valor == busc_Elemento.valor_Elemento){
            encontrado = 1; //Bandera
            break;
        }
       }

       if(encontrado){
        printf("\nEl elemento %d se encuentra en la lista\n", busc_Elemento.valor_Elemento);
       } else {
           printf("\nEl elemento %d no se encuentra en la lista\n", busc_Elemento.valor_Elemento);
       }

    return 0;
}
