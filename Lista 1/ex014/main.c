#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n;
	
	printf("\nInforme o valor de n: ");
	scanf("%d", &n);
	
	int pt = (n%2==0) ? n+1 : n+2;
	
	printf("\nSucessores impares: %d %d %d", pt, pt+2, pt+4);
	return 0;
}