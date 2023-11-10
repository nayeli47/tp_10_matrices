#include <stdio.h>
#include <stdlib.h>

void convertirNegativosACero(int mat[2][3]) {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			if (mat[i][j] < 0) {
				mat[i][j] = 0;
			}
		}
	}
}

int contarCeros(int mat[2][3]) {
	int count = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			if (mat[i][j] == 0) {
				count++;
			}
		}
	}
	return count;
}

int main() {
	int mat[2][3] = {{0}, {0}}, i, j;
	
	printf("ingrese valores enteros positivos y negativos:\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("ingrese el valor:\t");
			scanf("%d", &mat[i][j]);
		}
	}
	
	convertirNegativosACero(mat);
	
	printf("La matriz es:\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
	
	int cantidadDeCeros = contarCeros(mat);
	printf("La cantidad de ceros en la matriz es: %d\n", cantidadDeCeros);
	
	return 0;
}
