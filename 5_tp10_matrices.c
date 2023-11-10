#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inicializarMatriz(int mat[15][12]) {
	srand(time(NULL));
	
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 12; j++) {
			mat[i][j] = rand() % 100;
			if (rand() % 2 == 0) {
				mat[i][j] = -mat[i][j];
			}
		}
	}
}

void calcularResultados(int mat[15][12]) {
	int cont = 0, suma = 0, menor = 100;
	
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 12; j++) {
			printf("%d\t", mat[i][j]);
			
			if (mat[i][j] < menor) {
				menor = mat[i][j];
			}
			if (i <= 4) {
				suma += mat[i][j];
			}
			if (j >= 4 && j <= 8 && mat[i][j] < 0) {
				cont++;
			}
		}
		printf("\n");
	}
	
	printf("el menor numero del arreglo es: %d\n", menor);
	printf("la suma de las primeras 5 filas es: %d\n", suma);
	printf("la cantidad de numeros negativos entre las columnas 5 y 9 son: %d", cont);
}

int main() {
	int mat[15][12] = {{0}, {0}};
	
	inicializarMatriz(mat);
	calcularResultados(mat);
	
	return 0;
}
