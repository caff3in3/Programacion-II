//SUMA DE ARREGLOS
//  main.c
//  Created by CEDAM34 on 10/04/24.
//

#include <stdio.h>

int sumaDeArreglos(int arreglo[], const int n){
    int suma = 0, *ptr;
    int * const finDelArreglo = arreglo + n;
    
    for(ptr = arreglo; ptr < finDelArreglo; ++ptr){
        suma += *ptr;
    }
        return suma;
}

int main(int argc, const char * argv[]) {
    int valores[10] = {3,7,-9,3,6,-1,7,9,1,-5};
    
    printf("La suma es: %d\n",sumaDeArreglos(valores, 10));
    
    return 0;
}
