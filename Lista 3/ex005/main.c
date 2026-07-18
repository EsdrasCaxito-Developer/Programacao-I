#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int m1[3][3], m2[3][3], m[3][3]={0};
	
	for(int i=1; i<=2; i++){
		printf("\nMatriz - %d\n\n", i);
		for(int j=0; j<3; j++){
			for(int k=0; k<3; k++){
				if(i==1){
					scanf("%d", &m1[j][k]);
				}
				else if(i==2){
					scanf("%d", &m2[j][k]);
				}
			}
		}
	}

	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			for(int k=0; k<3; k++){
				m[i][j] += m1[i][k] * m2[k][j];
			}
		}
	}

	printf("\nMatriz Produto\n");
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("%d| ", m[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}