
#include <stdio.h>
#include <stdlib.h>
#define NA 2

typedef struct ficha {
    char nombre[60];
    float calificacion;
} Cali;

int main(int argc, const char * argv[]) {
    
    Cali alumnos[NA];
    int n = 0, i;
    char cadena[48];
    int aprobados = 0, reprobados = 0;
    
    while(n < NA) {
        printf("Nota ");
        scanf("%f", &alumnos[n].calificacion);
        fflush(stdin);
        printf("\nNombre del alumno ");
        scanf("%s", alumnos[n].nombre);
        
        n++;
    }
    
    for (i = 0; i < NA; i++) {
        if(alumnos[n].calificacion >= 6) {
            aprobados++;
        } else {
            reprobados++;
        }
    }
    printf("Aprobados %d \n", aprobados);
    printf("Reprobados %d \n", reprobados);
    
    return 0;
}
