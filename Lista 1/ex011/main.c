#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n, cn=0, dz=0, un=0, n_invertido=0;
	
	printf("\nInforme o valor de n: ");
	scanf("%d", &n);
	
	cn = n%10;
	dz = (n/10) % 10;
	un = (n/100) % 10;
	
	n_invertido = cn*100 + dz*10 + un;
	
	printf("\nNumero invertido: %d", n_invertido);
	return 0;
}