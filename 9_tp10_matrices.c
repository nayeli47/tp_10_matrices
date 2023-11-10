#include <stdio.h>
#include <stdlib.h>

int calcularTotal(int sueldo[5], int acu[5]) {
	int total = 0;
	for (int i = 0; i < 5; i++) {
		sueldo[i] = sueldo[i] * acu[i];
		total = total + sueldo[i];
	}
	return total;
}

int trabajadorMasHorasLunes(int mat[5][6], int acu[5]) {
	int lunes = 0, nombre = 0;
	for (int i = 0; i < 5; i++) {
		if (mat[i][0] > lunes) {
			lunes = mat[i][0];
			nombre = i;
		}
	}
	return nombre;
}

int main() {
	int mat[5][6] = {{0}, {0}}, i, j, cont = 0, sueldo[5] = {0};
	int acu[5] = {0}, total = 0;
	
	for (i = 0; i < 5; i++) {
		printf("sueldo por hora del trabajador %d:\t", i + 1);
		scanf("%d", &sueldo[i]);
		for (j = 0; j < 6; j++) {
			printf("dia %d:\n", j + 1);
			scanf("%d", &mat[i][j]);
			acu[i] = acu[i] + mat[i][j];
		}
	}
	
	int totalPago = calcularTotal(sueldo, acu);
	int nombreLunes = trabajadorMasHorasLunes(mat, acu);
	
	printf("TRABAJADOR\t\tTOTAL de horas\t\tsueldo");
	for (i = 0; i < 5; i++) {
		printf("\n");
		printf("%d\t\t", i + 1);
		printf("\t\t%d\t\t", acu[i]);
		printf("%d", sueldo[i]);
		printf("\n");
		printf("\n");
	}
	printf("el total que pagara la empresa es:%d\n", totalPago);
	printf("el trabajador que trabaja más horas el día lunes es:%d\n", nombreLunes + 1);
	return 0;
}
