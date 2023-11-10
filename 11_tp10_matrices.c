#include <stdio.h>
#include <stdlib.h>

void ingresarDatos(int mat[7][20][6], float *cant1, int cant2[100]) {
	for (int i = 0; i < 7; i++) {
		printf("\nTORRE %d\n\n", i + 1);
		float prom2 = 0;
		for (int j = 0; j < 20; j++) {
			printf("PISO %d\n", j + 1);
			for (int k = 0; k < 6; k++) {
				printf("departamento %d ingrese habitantes:\t\t", k + 1);
				scanf("%d", &mat[i][j][k]);
				*cant1 += mat[i][j][k];
				prom2 += mat[i][j][k];
				cant2[i] += mat[i][j][k];
			}
		}
		prom2 /= 20;
		printf("\nla cantidad promedio por piso es: %.2f\n", prom2);
	}
}

void mostrarResultados(float cant1, int cant2[100]) {
	printf("\n*la cantidad de habitantes en total es: %.1f\n", cant1);
	printf("\n*la cantidad de habitantes por torre es: ");
	for (int i = 0; i < 3; i++) {
		printf("\nTORRE %d: %d", i + 1, cant2[i]);
	}
	float prom1 = cant1 / 7;
	printf("\n*la cantidad promedio de habitantes por torre es: %.2f", prom1);
}

int main() {
	int mat[7][20][6] = {{0}, {0}, {0}};
	float cant1 = 0;
	int cant2[100] = {0};
	
	ingresarDatos(mat, &cant1, cant2);
	mostrarResultados(cant1, cant2);
	
	return 0;
}
