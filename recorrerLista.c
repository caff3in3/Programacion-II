//
//  main.c
//  lista_Ordenada
//
//  Created by CEDAM27 on 03/04/24.
//
typedef struct entrada{
    int valor;
    struct entrada*siguiente;
} Entrada;

#include <stdio.h>
int main(int argc, const char * argv[]) {
    Entrada n1,n2,n2_3,n3;
    Entrada *listaApuntador = &n1;
    int i;
    
    n1.valor = 100;
    n2.valor = 200;
    n3.valor = 300;
    
    //Vinculacion de variables struct
    n1.siguiente = &n2;
    n2.siguiente = &n3;
    n3.siguiente = (Entrada *)0;
    
    //Recorre toda la lista
    while(listaApuntador != (Entrada *) 0){
        printf("%d\n", listaApuntador->valor);
        listaApuntador = listaApuntador->siguiente;
    }
   
    
    
    
    return 0;
}
