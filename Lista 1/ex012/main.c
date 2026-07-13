#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b, c;
	
	printf("\nInforme o valor de a: ");
	scanf("%d", &a);
	printf("Informe o valor de b: ");
	scanf("%d", &b);
	printf("Informe o valor de c: ");
	scanf("%d", &c);
	
	int area = 2*(a*b + b*c + a*c);
	
	printf("\nArea: %d", area);

	return 0;
}