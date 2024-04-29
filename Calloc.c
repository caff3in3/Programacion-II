#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int *ptr;
    int n, i;
    
    printf("Escribe el numero de elementos que deseas agregar: ");
    scanf("%d", &n);
    
    ptr = (int *) calloc(n, sizeof(int));
    
    if (ptr == NULL){
        printf("\nLa memoria no ha sido agregada!!\n\n");
        exit(0);
    } else {
        printf("\nLa memoria ha sido agregada!!\n\n");
        for(i = 0; i < n; i++){
            ptr[i] = 1+i;
        }
        printf("Los elementos del arreglo son: \n");
        for(i = 0; i < n; i++){
            printf("[%d] ", ptr[i]);
        } printf("\n");
    }
    free(ptr);
    return 0;
}
