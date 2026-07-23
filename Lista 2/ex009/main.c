#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n, sm=0;
	
	printf("\nInforme o valor de n: ");
	scanf("%d", &n);
	printf("\n");
	
	for(int i=1; i<n; i++){
		for(int j=1; j<i; j++){
			if(i%j == 0){
				sm += j;
			}
		}
		
		if(sm == i){
			printf("%d ", i);
		}
		
		sm=0;
	}
	
	if(n==sm){
		printf("\nNumero Perfeito");
	}
	return 0;
}