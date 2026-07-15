#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n, nd=0, aux=0, resto=0, n_am=0;
	
	printf("\nInforme o valor de n: ");
	scanf("%d", &n);
	
	aux = n;
	
	while(aux > 0){
		aux /= 10;
		nd++;
	}
	
	aux = n;
	
	while(aux > 0){
		resto = aux % 10;
		n_am += (int) pow((int) resto, (int) nd);
		
		aux /= 10;
	}
	
	if(n==n_am){
		printf("\nNumero de Amstrong");
	}
	
	return 0;
}