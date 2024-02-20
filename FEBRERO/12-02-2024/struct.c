#include <stdio.h>
#include <stdlib.h>

struct album {
	char titulo[40];
	char artista[40];
	int anio;
};

int main() {
	struct album currents;
	printf("Escribe el nombre del album: ");
	gets(currents.titulo);
	
	printf("Escribe el nombre del artista: ");
	gets(currents.artista);
	
	printf("Escribe el anio del album: ");
	scanf("%d", &currents.anio);
	printf("\n");
	
	/* --------------------------------------- */
	
	printf("El titulo del album es: %s \n", currents.titulo);
	
	printf("El nombre del album es: %s \n", currents.artista);
	
	printf("El anio del album es: %d \n", currents.anio);
}

