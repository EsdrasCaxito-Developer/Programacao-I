#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void gerarMatriz(int m[8][8]);

int main(int argc, char *argv[]) {
	
	int mat[8][8] = {0};
	
	gerarMatriz(mat);
	
	int l, c;
	
	printf("\nInforme a posicao (i,j): ");
	scanf("%d,%d", &l, &c);
	
	if(l<=8 && c<=8){
		//Diagonal principal inferior
		for(int i=l-1, j=c-1; i<8, j>=0; i++, j--){
			mat[i][j] = 1;
		}
	
		//Diagonal principal Superior
		for(int i=l-1, j=c-1; i>=0, j<8; i--, j++){
			mat[i][j] = 1;
		}
	
		//Diagonal secundária inferior
		for(int i=l-1, j=c-1; i<8, j<8; i++, j++){
			mat[i][j] = 1;
		}
	
		//Diagonal secundária Superior
		for(int i=l-1, j=c-1; i>=0, j>=0; i--, j--){
			mat[i][j] = 1;
		}
		
	}

	gerarMatriz(mat);
	
	printf("\n(%d,%d)", l, c);
	
	return 0;
}

void gerarMatriz(int m[8][8]){
	system("cls");
	
	printf("\n--------------------------------\n");
	for(int i=0; i<8; i++){
		for(int j=0; j<8; j++){
			if(m[i][j] == 1){
				printf(" \x1B[33m%d\x1B[0m |", m[i][j]);
			}
			else{
				printf(" %d |", m[i][j]);
				
			}
		}
		printf("\n--------------------------------\n");
	}
}