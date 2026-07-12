#include <stdio.h>
#include <stdlib.h>
#include "./fahrenheit.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float temp_c, temp_f = 0.0;
	
	printf("\nInforme a temperatura em C: ");
	scanf("%f", &temp_c);
	
	temp_f = FAHR(temp_c);
	
	printf("\nA temperatura correspondente em F: %.2f", temp_f);
	return 0;
}