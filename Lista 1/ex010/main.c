#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "valor_pi.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float r;
	
	printf("\nInforme o valor do raio: ");
	scanf("%f", &r);
	
	float area = PI * pow(r, 2.0);
	float perimetro = 2 * PI * r;
	
	printf("\nArea:      %.2f\nPerimetro: %.2f", area, perimetro);
	return 0;
}