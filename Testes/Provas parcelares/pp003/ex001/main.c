#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float s, s_min = 35000.00;
	
	printf("\nInforme o seu salario: ");
	scanf("%f", &s);
	
	float n_smin = s / s_min;
	
	printf("\nDannyTullingAdm ganha: %.6f salarios minimos", n_smin);
	return 0;
}