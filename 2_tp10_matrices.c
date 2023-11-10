#include <stdio.h>
#include <stdlib.h>

void calcularTotales(int kil[20][7], int total[20]) {
	int i, j, acu = 0;
	
	for (i = 0; i < 20; i++) {
		printf("legajo %d\n", i + 1);
		for (j = 0; j < 7; j++) {
			printf("kilometros recorridos el dia %d son:\n", j + 1);
			scanf("%d", &kil[i][j]);
			acu = acu + kil[i][j];
		}
		total[i] = acu;
		acu = 0;
	}
}

void imprimirValores(int kil[20][7], int total[20]) {
	int i, j;
	
	printf("LEGAJO\t lunes\t martes\t mierc.\t jueves\t viernes  saba.\t domin.\t      TOTAL\n");
	for (i = 0; i < 20; i++) {
		printf("   %d:\t ", i + 1);
		for (j = 0; j < 7; j++) {
			printf("   %d\t", kil[i][j]);
		}
		printf("\t%dkl", total[i]);
		printf("\n");
	}
}

int main() {
	
	int kil[20][7] = {{0}}, total[20] = {0};
	
	calcularTotales(kil, total);
	imprimirValores(kil, total);
	
	return 0;
}
