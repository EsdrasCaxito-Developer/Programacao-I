#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1415

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float r;
	
	printf("\nInforme o valor de r: ");
	scanf("%f", &r);
	
	float vol = (4 * PI * pow(r, 3.0) / 3), area = 4 * PI * pow(r, 2.0);
	
	printf("\nVolume: %.2f\nArea:   %.2f", vol, area);
	return 0;
}