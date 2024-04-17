#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    int *pe;
    int tam;
    int f;
    
    printf("Cuantos elementos tendra el vector: ");
    scanf("%i", &tam);
    
    pe = malloc(tam * sizeof(int)); //Hace un cast disimulado, ix4 = 16 bytes
    
    for (f = 0; f < tam; f++) {
        printf("Ingrese el elemento del vector: ");
        scanf("%i", &pe[f]);
    }
    printf("\nContenido del vector dinamico: ");
    for (f = 0; f < tam; f++) {
        printf("%i", pe[f]);
    } printf("\n");
    
    free(pe); //Elimina todo el espacio de memoria reservado
    
    return 0;
}
