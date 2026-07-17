#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int mat[3][3], aux[3][3]={0};
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			scanf("%d", &mat[i][j]);
			
			aux[j][i] = mat[i][j];
		}
	}
	
	printf("\nMatriz\n\n");
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("%d |", mat[i][j]);
		}
		printf("\n");
	}

	printf("\nMatriz Tranposta\n\n");
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("%d |", aux[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}