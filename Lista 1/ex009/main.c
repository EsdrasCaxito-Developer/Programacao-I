#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	double r1, r2, r3;
	
	printf("\nInforme o valor de r1: ");
	scanf("%lf", &r1);
	printf("Informe o valor de r2: ");
	scanf("%lf", &r2);
	printf("Informe o valor de r3: ");
	scanf("%lf", &r3);
	
	double r_serie = r1 + + r2 + r3;
	double r_paralelo = (r1 * r2 * r3) / (r1*r2 + r1*r2 + r2*r3);
	
	printf("\nResistencia em serie:    %.2lf\nResistencia em paralelo: %.2lf", r_serie, r_paralelo);
	return 0;
}