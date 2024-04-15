//
//  main.c
//  zzzz
//
//  Created by CEDAM 12 on 15/04/24.
//

#include <stdio.h>

void copiaDosCadenas(char *destino, char *origen){
    while (*origen != '\0'){
        *destino++= *origen++;
    }
    *destino = '\0';
}

int main(int argc, const char * argv[]) {
    char cadenaOrigen[] = "Voy a copiar esta cadena";
    char cadenaDestino[50];
    
    copiaDosCadenas(cadenaDestino, cadenaOrigen);
    
    printf("La cadena destino %s \n", cadenaDestino);
    
    return 0;
}
