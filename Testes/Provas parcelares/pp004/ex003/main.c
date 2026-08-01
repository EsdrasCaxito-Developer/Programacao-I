#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n, k=0, m=0, p=0, q=0;
	
	printf("\nInforme o valor de n: ");
	scanf("%d", &n);
	
	int mat[n][n];
	
	printf("\nSaida Normal\n\n");
	for(int i=1; i<=n; i++, k++){
		for(int j=i; j<=n+k; j++){
			if(j<=n){
				mat[p][q] = j;
			}
			else{
				m++;
				mat[p][q] = n-m;
			}
			
			printf("%d   ", mat[p][q]);
			
			if(q < n-1){
				q++;
			}
			else{
				q=0;
				p++;
			}
		}
		m=0;
		printf("\n");
		
	}
	
	printf("\nSaida Espiral\n\n");
	
	int top = 0,
		bottom = n-1,
		left = 0,
		right = n-1;
	
	while(top <= bottom){
		for(int i=left; i<=right; i++){
			printf("%d ", mat[top][i]);
		}
		top += 1;
		
		for(int j=top; j<=bottom; j++){
			printf("%d ", mat[j][right]);
		}
		right -= 1;
	
		for(int k=right; k>=left; k--){
			printf("%d ", mat[bottom][k]);
		}
		bottom -= 1;
		
		for(int k=bottom; k>=top; k--){
			printf("%d ", mat[left][k]);
		}
		left += 1;
	}
	
	return 0;
}