#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void imprimir(int f){
	
	printf("\n la cantidad de ceros en la matriz es: %d\n",f);	
	
}
int cont(int cant){
	int mat[4][4]={{0},{0}},i,j;	
	
	srand(time(NULL));
	for (i = 0; i < 4; i++) {
		for(j=0;j<4;j++){
			mat[i][j] = rand() % 10;
			printf("%d\t",mat[i][j]);
			
			if(mat[i][j]==0){
				cant++;
			}
		}
		printf("\n");
	}
	return cant;
}
	
	
	int main() {
		int cant=0,f=0;	
		f=cont(cant);
		imprimir(f);
		return 0;
	}
	
	
