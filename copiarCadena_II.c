//
//  main.c
//  copiarCadena.c
//
//  Created by CEDAM 12 on 15/04/24.
//

#include <stdio.h>

void copiaDosCadenas(char *destino, char *origen){
    for(; *origen != '\0'; ++origen, ++destino){
        *destino = *origen;
    }
    *destino = '\0';
}

int main(int argc, const char * argv[]) {
    char cadenaOrigen[50], cadenaDestino[50];
    
    printf("Ingrese la cadena no menor a 50 caracteres: ");
    fgets(cadenaOrigen, sizeof(cadenaOrigen), stdin);

    copiaDosCadenas(cadenaDestino, cadenaOrigen);
    
    printf("\nLa cadena destino es: \n%s \n", cadenaDestino);
    
    return 0;
}
