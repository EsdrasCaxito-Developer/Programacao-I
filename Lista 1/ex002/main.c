#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float n1, n2, pr=0.0;
	
	printf("\nInforme o valor de n1: ");
	scanf("%f", &n1);

	printf("Informe o valor de n2: ");
	scanf("%f", &n2);
	
	pr = n1*n2;
	
	printf("\nProduto: %.3f", pr);
	return 0;
}