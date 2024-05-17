include <stdio.h>
#include <stdlib.h>

typedef struct numEnteros{
	int n1, n2, n3;
}Enteros;

int main(int argc, const char * argv[]){
	
	int n;
	Enteros temp;
	
	FILE *fptr;
	
	if((fptr =
	fopen("C:\\Users\\421-22\\Desktop\\binFile.bin", "wb")) == NULL) {
		printf("\nError al abrir el archivo!\n");
		exit(1);
	}
	
	for (n = 1; n < 5; ++n){
		temp.n1 = n;
		temp.n2 = 5*n;
		temp.n3 = 5*n + 1;
		fwrite(&temp, sizeof(Enteros), 1, fptr);
	}
		
	fclose(fptr);
	
	return 0;
}
