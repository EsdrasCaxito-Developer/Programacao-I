#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int mat[3][3], sm[3]={0};
	float med[3]={0.0};
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			scanf("%d", &mat[i][j]);
			sm[i] += mat[i][j];
		}
		med[i] = sm[i]/3;
	}

	printf("\n\n");
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(int i=0; i<3; i++){
		printf("Media - Linha %d = %.2f\n", i+1, med[i]);
	}
	return 0;
}