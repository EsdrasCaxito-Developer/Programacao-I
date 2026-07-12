#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	double xa, xb, ya, yb;
	
	printf("\nInforme os valores nessa ordem [XA-XB]: ");
	scanf("%lf-%lf", &xa, &xb);
	printf("Informe os valores nessa ordem [YA-YB]: ");
	scanf("%lf-%lf", &ya, &yb);
	
	double dist = sqrt(pow(xa-xb, 2.0) + pow(ya-yb, 2.0));
	
	printf("\nA distancia entre eles: %.2lf", dist);
	return 0;
}