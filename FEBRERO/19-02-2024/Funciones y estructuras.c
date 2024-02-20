//  Funciones y estructuras
//  Uso de variables tipo <<struct>> como parametros en una funcion
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

    struct fecha hoy;
    struct fecha manana;
    
    printf("Escriba la fecha de hoy: (mm/dd/aaaa)");
    scanf("%d%d%d", &hoy.mes, &hoy.dia, &hoy.anio);
    
    if (hoy.dia != numeroDeDias(hoy)){
        
        manana.dia = hoy.dia + 1;
        manana.mes = hoy.mes;
        manana.anio = hoy.anio;
      //El caso donde sea el ultimo mes del año
    } else if (hoy.mes == 12) {
        manana.dia = 1;
        manana.mes = 1;
        manana.anio = hoy.anio + 1;
    }
    else {
        manana.dia = 1;
        manana.mes = hoy.mes +1;
        manana.anio = hoy.anio;
    }
    printf("La fecha de manana es %d/%d/%d", manana.mes, manana.dia, manana.anio);
    
    return 0;
}
/* DECLARACION DE FUNCIONES */
int numeroDeDias(struct fecha alpha){
    int dias;
    const int diasPorMes[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    
    if(esBisiesto(alpha)==1 && alpha.mes ==2){
        dias = 29;
    } else {
        dias = diasPorMes[alpha.mes - 1]; //-1 por el array (comienza con 0)
    }
    
    return dias;
}

int esBisiesto(struct fecha beta) {
    int anioBisiesto;
    
    if ( (beta.anio % 4 == 0 && beta.anio % 100 != 0) || beta.anio % 400 == 0) {
        
        anioBisiesto == 1; //Es año bisiesto
    }
    else {
        anioBisiesto == 0; //No es año bisiesto
    }
    
    return anioBisiesto;
}
