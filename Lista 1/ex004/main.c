#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float n;
	
	printf("\nInforme o valor de n: ");
	scanf("%f", &n);
	
	printf("\nA parte fracionaria de %.2f e %.2f.", n, n - ((int)n));
	return 0;
}