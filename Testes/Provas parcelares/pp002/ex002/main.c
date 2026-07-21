#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void mudar(int m[3][3]);

int main(int argc, char *argv[]) {
	srand(time(NULL));
	
	int mat[3][3];
	bool continuar = true;
	
	int sl[3]={0}, sc[3]={0}, sdp=0, sds=0, n=0;
	
	printf("\nAntes\n");
	printf("-------------\n");
	for(int i=0, k=1; i<3; i++){
		for(int j=0; j<3; j++, k++){
			mat[i][j] = k;
			
			printf("| %d ", mat[i][j]);
		}
		printf("|\n-------------\n");
	}
	
	while(continuar){
		mudar(mat);	
		
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				sl[i] += mat[i][j];
				sc[j] += mat[i][j];
				
				if(i==j){
					sdp += mat[i][j];
				}
				
				if(i==0 && j==2 || i==1 && j==i || i==2 && j==0){
					sds += mat[i][j];
				}
			}
		}
		
		
				
		for(int i=0; i<3; i++){
			if(sc[i] == sl[i] && sl[i] == sdp && sdp == sds){
				n++;
			}
		}
		
		if(n==3){
			continuar = false;
		}
		else{
			n=0;
        	sds=0;
        	sdp=0;
        	sl[0]=0;
        	sl[1]=0;
        	sl[2]=0;
        	sc[0]=0;
        	sc[1]=0;
        	sc[2]=0;
		}
			
	}
	
	printf("\nDepois\n");
	printf("-------------\n");
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("| %d ", mat[i][j]);
		}
		printf("|\n-------------\n");
	}
	
	printf("\nLinha  %d            = %d", 1, sl[0]);
	printf("\nColuna %d            = %d", 1, sc[0]);
	printf("\nLinha  %d            = %d", 2, sl[1]);
	printf("\nColuna %d            = %d", 2, sc[1]);
	printf("\n");
	printf("\nDiagonal principal  = %d", sdp);
	printf("\nDiagonal secundaria = %d", sds);
	
	
	return 0;
}

void mudar(int m[3][3]){
	int aux=0;
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			int linha = rand() % 3;
			int coluna = rand() % 3;
			
			aux = m[linha][coluna];
			m[linha][coluna] = m[i][j];
			m[i][j] = aux;
		}
	}
}