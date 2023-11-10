#include <stdio.h>
#include <stdlib.h>

void obtenerVentas(int ventas[5][5]) {
	int i, j;
	
	for (i = 0; i < 5; i++) {
		printf("empleado %d\n", i + 1);
		for (j = 0; j < 5; j++) {
			printf("venta del dia %d:\n", j + 1);
			scanf("%d", &ventas[i][j]);
		}
	}
}

int encontrarMayorVenta(int ventas[5][5]) {
	int mayor = 0;
	
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (ventas[i][j] > mayor) {
				mayor = ventas[i][j];
			}
		}
	}
	
	return mayor;
}

int main() {
	int ventas[5][5] = {{0}, {0}};
	
	obtenerVentas(ventas);
	
	printf("EMPLEADO\tlunes\t\t martes\t\t mierc.\t\t jueves\t\t viernes\n");
	for (int i = 0; i < 5; i++) {
		printf("   %d:\t\t ", i + 1);
		for (int j = 0; j < 5; j++) {
			printf("%d\t\t", ventas[i][j]);
		}
		printf("\n");
	}
	
	int mayor = encontrarMayorVenta(ventas);
	printf("\nLa mayor venta fue de: %d$\n", mayor);
	
	return 0;
}
