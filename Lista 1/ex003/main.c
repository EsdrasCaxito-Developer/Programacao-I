#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float a, b;
	
	printf("\nInforme os valores de a e b neste formato [a/b]: ");
	scanf("%f/%f", &a, &b);
	
	printf("\nResultado: %.2f", (a/b));
	return 0;
}