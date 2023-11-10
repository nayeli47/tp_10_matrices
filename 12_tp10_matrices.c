#include <stdio.h>
#include <stdlib.h>

int calcularMayorVenta(int cant[100]) {
	int mayor = 0, semana = 0;
	for (int i = 0; i < 4; i++) {
		if (cant[i] > mayor) {
			mayor = cant[i];
			semana = i;
		}
	}
	return semana;
}

void ingresarVentas(int mat[4][7], int cant[100], float prom[100]) {
	for (int i = 0; i < 4; i++) {
		printf("\nSEMANA %d\n", i + 1);
		for (int j = 0; j < 7; j++) {
			printf("ventas realizadas el DIA %d:\t", j + 1);
			scanf("%d", &mat[i][j]);
			cant[i] += mat[i][j];
			prom[i] += mat[i][j];
		}
		prom[i] /= 7;
	}
}

int main() {
	int mat[4][7] = {{0}, {0}}, j, i, mayor = 0, semana = 0, cant[100] = {0};
	float prom[100] = {0};
	
	ingresarVentas(mat, cant, prom);
	
	printf("\n ventas realizadas por semana:\n");
	for (i = 0; i < 4; i++) {
		printf("SEMANA %d: %d\n", i + 1, cant[i]);
	}
	
	printf("\n promedio por semana:\n");
	for (i = 0; i < 4; i++) {
		printf("SEMANA %d: %.2f\n", i + 1, prom[i]);
	}
	
	semana = calcularMayorVenta(cant);
	
	printf("\n la semana con la MAYOR VENTA es la %d con el TOTAL de: %d\n", semana + 1, cant[semana]);
	
	return 0;
}
