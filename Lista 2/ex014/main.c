#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n, aux=0, nd=0, n_invertido=0, resto=0;
	
	printf("\nInforme o valor de n: ");
	scanf("%d", &n);
	
	aux = n;
	
	while(aux > 10){
		nd++;
		aux /= 10;
	}
	
	aux = n;
	
	while(aux > 0){
		
		resto = aux % 10;
		n_invertido += resto * (int) pow(10.0, (float) nd);
		aux /= 10;
		nd--;
	}
	
	if(n==n_invertido){
		printf("\nPalindromo");
	}
	else{
		printf("\n%d - nao e palindromo", n_invertido);
	}
	return 0;
}