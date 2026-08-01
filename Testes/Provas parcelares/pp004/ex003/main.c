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
	return 0;
}