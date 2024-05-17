#include <stdio.h>
#include <stdlib.h>

typedef struct Otro{
	int z1, z2, z3;
} Otros;

int main(void){
	
int n;
Otros num;
FILE *fptr;

if((fptr =
	fopen("C:\\Users\\421-22\\Desktop\\binFile.bin", "rb")) == NULL) {
		printf("\nError al abrir el archivo!\n");
		exit(1);
	}
	
for (n = 1; n < 5; ++n){
	fread(&num, sizeof(Otros), 1, fptr);
	printf("n1: %d\tn2: %d\tn3: %d\n", num.z1, num.z2, num.z3);
}
	
fclose(fptr);

return 0;		
}
