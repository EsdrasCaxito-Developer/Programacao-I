#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n, k=0, m=0;
	
	printf("\nInforme o valor de n: ");
	scanf("%d", &n);
	
	printf("\n");
	for(int i=1; i<=n; i++, k++){
		for(int j=i; j<=n+k; j++){
			if(j<=n){
				printf("%d   ", j);
			}
			else{
				m++;
				printf("%d   ", n-m);
			}
		}
		m=0;
		printf("\n");
		
	}
	return 0;
}