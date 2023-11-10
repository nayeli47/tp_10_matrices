#include <stdio.h>
#include <stdlib.h>

void ingresarValores(int mat[10][10], int cont[10], int cont2[10]) {
	int sumafila = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("fila %d columna %d:\t", i + 1, j + 1);
			scanf("%d", &mat[i][j]);
			
			sumafila = sumafila + mat[i][j];
			cont2[j] = cont2[j] + mat[i][j];
		}
		cont[i] = sumafila;
		sumafila = 0;
	}
}

void imprimirMatriz(int mat[10][10]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int mat[10][10] = {{0}, {0}};
	int cont[10] = {0}, cont2[10] = {0};
	
	printf("ingrese valores enteros positivos y negativos:\n");
	
	ingresarValores(mat, cont, cont2);
	
	imprimirMatriz(mat);
	
	printf("suma por fila\n");
	for (int j = 0; j < 3; j++) {
		printf("fila %d: %d\n", j + 1, cont[j]);
	}
	
	printf("suma por columna\n");
	for (int j = 0; j < 3; j++) {
		printf("columna %d: %d\t", j + 1, cont2[j]);
	}
	
	return 0;
}
