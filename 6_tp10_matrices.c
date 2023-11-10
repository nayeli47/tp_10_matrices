#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void imprimirMatriz(int mat[12][12]) {
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
}

int compararDiagonales(int mat1[12][12], int mat2[12][12]) {
	int cont[12][12] = {{0}}, cont2[12][12] = {{0}};
	
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			if (i == j) {
				cont[i][j] = mat1[i][j];
				cont2[i][j] = mat2[i][j];
			}
		}
	}
	
	if (cont[0][0] == cont2[0][0] && cont[1][1] == cont2[1][1] && cont[2][2] == cont2[2][2] && cont[3][3] == cont2[3][3] && cont[4][4] == cont2[4][4] &&
		cont[5][5] == cont2[5][5] && cont[6][6] == cont2[6][6] && cont[7][7] == cont2[7][7] && cont[8][8] == cont2[8][8] && cont[9][9] == cont2[9][9] &&
			cont[10][10] == cont2[10][10] && cont[11][11] == cont2[11][11]) {
		return 1;
	} else {
				return 0;
			}
}

int main() {
	int mat1[12][12] = {{0}, {0}}, mat2[12][12] = {{0}, {0}};
	
	printf("matriz 1\n");
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			printf("ingrese el valor de la fila %d columna %d\n", i + 1, j + 1);
			scanf("%d", &mat1[i][j]);
		}
	}
	
	printf("matriz 2\n");
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			printf("ingrese el valor de la fila %d columna %d\n", i + 1, j + 1);
			scanf("%d", &mat2[i][j]);
		}
	}
	
	printf("matriz 1\n");
	imprimirMatriz(mat1);
	
	printf("matriz 2\n");
	imprimirMatriz(mat2);
	
	if (compararDiagonales(mat1, mat2) == 1) {
		printf("las diagonales principales de las dos matrices SON iguales");
	} else {
		printf("las diagonales principales de las dos matrices NO son iguales");
	}
	
	return 0;
}
