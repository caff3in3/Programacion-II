#include <stdio.h>
#include <stdlib.h>

struct album {
	char titulo[40];
	char artista[40];
	int anio;
};

int main() {
	struct album swimming;
	printf("Escribe el nombre del album: ");
	gets(swimming.titulo);
	
	printf("Escribe el nombre del artista: ");
	gets(swimming.artista);
	
	printf("Escribe el anio del album: ");
	scanf("%d", &swimming.anio);
	printf("\n");
	
	/* --------------------------------------- */
	
	printf("El titulo del album es: %s \n", swimming.titulo);
	
	printf("El nombre del album es: %s \n", swimming.artista);
	
	printf("El anio del album es: %d \n", swimming.anio);
}

