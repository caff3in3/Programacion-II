//
//  main.c
//  Funciones y estrucuturas
//
//  Created by CEDAM04 on 19/02/24.
//

#include <stdio.h>

struct fecha{
    
    int dia;
    int mes;
    int anio;
    
};

int numeroDeDias(struct fecha d); /*Devuelve el numero dependiendo el mes que hayamos ingresado*/
int esBisiesto(struct fecha b); /*devuelve un 1 si el año es bisiesto y un 0 de lo contrario*/

int main(int argc, const char * argv[]) {

    printf("Hello, World!\n");
    
    return 0;
}

int numeroDeDias(struct fecha alpha){
    int dias;
    const int diasPorMes[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    
    if(esBisiesto(alpha)==1 && alpha.mes ==2){
        dias = 29;
    } else {
        dias = diasPorMes[alpha.mes - 1]; //-1 por el array (comienza con 0)
    }
}
