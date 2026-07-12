#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b, c;
	float p = 0.0, area = 0.0;
	
	printf("\nInforme os valores neste formato [a-b-c]: ");
	scanf("%d-%d-%d", &a, &b, &c);
	
	p = (a + b + c)/2;
	area = sqrt(p * (p-a) * (p-b) * (p-c));
	
	printf("\nA area: %.2f", area);
	
	return 0;
}