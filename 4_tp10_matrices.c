#include <stdio.h>
#include <stdlib.h>

void ingresarValores(int vector1[5], int vector2[5], int aux[5]) {
	for (int i = 0; i < 5; i++) {
		printf("ingrese el %d valor:", i + 1);
		scanf("%d", &vector1[i]);
		aux[i] = vector1[i];
		vector2[i + 1] = vector1[i];
	}
	vector2[0] = vector1[4];
}

void imprimirVectores(const int vector[5], const char* message) {
	printf("\n %s\n", message);
	for (int i = 0; i < 5; i++) {
		printf("%d,", vector[i]);
	}
}

int main() {
	int vector1[5] = {0}, h = 0, vector2[5] = {0}, aux[5] = {0};
	
	ingresarValores(vector1, vector2, aux);
	imprimirVectores(aux, "el vector sin cambios:");
	imprimirVectores(vector2, "el vector con cambios:");
	
	return 0;
}
