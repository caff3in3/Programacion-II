/*Suma de vectores.- Implementar un programa que realice la suma de dos vectores.*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    int *pe1, *pe2;
    int tam1, tam2;
    int f;
    
    printf("Cuantos elementos tendra el primer vector: ");
    scanf("%i", &tam1);
    
    pe1 = malloc(tam1 * sizeof(int));
    
    for (f = 0; f < tam1; f++) {
        printf("Ingrese el elemento del primer vector: ");
        scanf("%i", &pe1[f]);
    }
    
    printf("Cuantos elementos tendra el segundo vector: ");
    scanf("%i", &tam2);
    
    pe2 = malloc(tam2 * sizeof(int)); 
    
    for(f = 0; f < tam2; f++){
        printf("Ingrese el elemento del segundo vector: ");
        scanf("%i", &pe2[f]);
    }
    
    printf("\nContenido del vector dinamico: ");
    
    if(tam1>tam2){
      for (f = 0; f < tam1; f++) {
        printf("[%i]", pe1[f]+pe2[f]);
    } printf("\n");
     } else {
         for (f = 0; f < tam2; f++) {
        printf("[%i]", pe1[f]+pe2[f]);
    } printf("\n");
     }
    
    
    return 0;
}
