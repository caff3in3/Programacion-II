//
//  main.c
//  const_??
//
//  Created by CEDAM27 on 03/04/24.
//

#include <stdio.h>

void intercambio(int *const pint, int *const pint2);

int main(int argc, const char * argv[]) {
    int i1= -5, i2= 66, *p1 = &i1, *p2 = &i2;
    
    printf("i1 = %d, i2 = %d \n", i1, i2);
    
    intercambio(p1, p2);
    
    printf("i1 = %d, i2 = %d \n", i1, i2);
    
    return 0;
}
void intercambio(int *const pint, int *const pint2){
    int temp;
    temp = *pint;
    *pint = *pint2;
    *pint2 = temp;
}
