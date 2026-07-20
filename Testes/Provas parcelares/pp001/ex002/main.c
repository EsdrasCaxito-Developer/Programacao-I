#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int factorial(int nf);

int main(int argc, char *argv[]) {
	
	int n=7, p=0, k=0, j=0;
	
	printf("\n1. Determinar o numero total desta permutacao de elementos repetidos.");
	k=3;
	j=4;
	int a = factorial(n) / (factorial(k)*factorial(j));
	printf("\n   (%d)\n", a);
	
	printf("\n2. Determinar o numero de configuracoes possiveis para os abertos sem restricao.");
	p=3;
	int b=factorial(n)/(factorial(p)*factorial(n-p));
	printf("\n   (%d)\n", b);
	
	printf("\n3. Determinar o numero de configuracoes possiveis para os abertos sem restricao.");
	p=4;
	int c=factorial(n)/(factorial(p)*factorial(n-p));
	printf("\n   (%d)\n", c);

	printf("\n4. Determinar o numero total de configuracoes possiveis para organizar os 7 escritorios sem qualquer restricao.");
	p=4;
	int d=factorial(n)/(factorial(p)*factorial(n-p));
	printf("\n   (%d)\n", d);
	
	return 0;
}

int factorial(int nf){
	if(nf==0){
		return 1;
	}
	
	return nf * factorial(nf-1);
}