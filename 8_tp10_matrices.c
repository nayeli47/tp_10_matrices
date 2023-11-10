#include <stdio.h>
#include <stdlib.h>

int contarNegativos(int mat[5][6]) {
	int cont = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 6; j++) {
			if (mat[i][j] < 0) {
				cont++;
			}
		}
	}
	return cont;
}

int contarCerosEnDiagonal(int mat[5][6]) {
	int cont2 = 0;
	for (int i = 0; i < 5; i++) {
		if (mat[i][i] == 0) {
			cont2++;
		}
	}
	return cont2;
}

int main() {
	int mat[5][6] = {{0},{0}}, i, j;
	
	printf("ingrese valores enteros positivos y negativos:\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 6; j++) {
			printf("fila %d columna %d:\t", i + 1, j + 1);
			scanf("%d", &mat[i][j]);
		}
	}
	
	int cantidadNegativos = contarNegativos(mat);
	
	printf("La matriz es:\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 6; j++) {
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
	
	int cantidadCerosDiagonal = contarCerosEnDiagonal(mat);
	printf("la cantidad de numeros negativos es: %d \n", cantidadNegativos);
	printf("la cantidad de numeros iguales a cero en la diagonal principal es: %d", cantidadCerosDiagonal);
	
	return 0;
}
