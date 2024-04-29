#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int *ptr;
    int n = 5, i;
    
    ptr = (int *) calloc(n, sizeof(int));
    
    if (ptr == NULL){
        printf("\nLa memoria no ha sido agregada!!\n\n");
        exit(0);
    } else {
        printf("\nLa memoria ha sido agregada!!\n\n");
        for(i = 0; i < n; ++i){
            ptr[i] = i+1;
        }
        printf("Los elementos del arreglo son: \n");
                for(i = 0; i < n; i++){
                    printf("[%d] ", ptr[i]);
                } printf("\n");
     }
    //Uso de malloc para incrementar al doble el alojamiento de memoria
    n = 10;
    ptr = (int *) realloc(ptr, n*sizeof(int));
    
    for (i = 5; i < n; ++i){
        ptr[i] = i+1;
    }
    printf("\nLos elementos del arreglo son:\n\n");
    for (i = 0; i < n; ++i){
        printf("[%d] ", ptr[i]);
    }
    

    return 0;
}
