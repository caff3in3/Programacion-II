#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    int *pe1, *pe2, *peSum;
    int tam1, tam2, tamSum;
    int f;
    
    printf("Cuantos elementos tendra el primer vector: ");
    scanf("%i", &tam1);
    
    printf("Cuantos elementos tendra el segundo vector: ");
    scanf("%i", &tam2);
    
    tamSum = tam1 + tam2;
    
    pe1 = malloc(tam1 * sizeof(int));
    pe2 = malloc(tam2 * sizeof(int));
    
    for (f = 0; f < tam1; f++) {
        printf("Ingrese el elemento del primer vector: ");
        scanf("%i", &pe1[f]);
    }
    
    for(f = 0; f < tam2; f++){
        printf("Ingrese el elemento del segundo vector: ");
        scanf("%i", &pe2[f]);
    }
    
    
    printf("\nContenido del vector dinamico: ");
    for (f = 0; f < tamSum; f++) {
        printf("%i", pe1[f]);
    } printf("\n");
    
    free(pe1); //Elimina todo el espacio de memoria reservado
    
    return 0;
}
