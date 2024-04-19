#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    int *pe1, *pe2;
    int tam1, tam2, tamSum;
    int f;
    
    printf("Cuantos elementos tendra el primer vector: ");
    scanf("%i", &tam1);
    
    pe1 = malloc(tam1 * sizeof(int));
    
    for (f = 0; f < tam1; f++) {
        printf("Ingrese el elemento %d del primer vector: ", f+1);
        scanf("%i", &pe1[f]);
    }
    
    printf("\nCuantos elementos tendra el segundo vector: ");
    scanf("%i", &tam2);
    
    pe2 = malloc(tam2 * sizeof(int)); 
    
    for(f = 0; f < tam2; f++){
        printf("Ingrese el elemento %d del segundo vector: ", f+1);
        scanf("%i", &pe2[f]);
    }
    
    printf("\nContenido del vector dinamico: ");
    
    if(tam1>tam2){
    tamSum = tam2 + (tam1-tam2); 
     } else {
        tamSum = tam1 + (tam2-tam1);
       }
       
    int *temp = malloc(tamSum*sizeof(int));
    for (int i = 0; i < tamSum; i++){
        temp[i] = pe1[i] + pe2[i];
        printf("[%i]", temp[i]);
    }
     
    return 0;
}
