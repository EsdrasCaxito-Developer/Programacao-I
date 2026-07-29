#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char obterLetra(int nf);

int dannyTulling(int nf1, int *ca, int *cb, int *cc, int *cd, int *ce, int *cf);

void contar(char l, int *a, int *b, int *c, int *d, int *e, int *f);

void mostrarRepeticoes(int *a2, int *b2, int *c2, int *d2, int *e2, int *f2);

int main(int argc, char *argv[]) {
	int n, contA=0, contB=0, contC=0, contD=0, contE=0, contF=0;
	
	printf("\nInforme o valor de n: ");
	scanf("%d", &n);
	printf("\n");
	
	dannyTulling(n, &contA, &contB, &contC, &contD, &contE, &contF);
	return 0;
}

int dannyTulling(int nf1, int *ca, int *cb, int *cc, int *cd, int *ce, int *cf){
	int m;
	char letra = ' ';
	
	if(nf1 <= 26){
		for(int i=1, k=0; i<=nf1; i++, k++){
		
			for(int blank=1; blank<=nf1+1-i; blank++){
				printf("   ");
			}
		
			for(int j=1; j<=i+k; j++){
				if(j<=i){
					letra = obterLetra(j);
					printf("%c  ", letra);
					
					contar(letra, ca, cb, cc, cd, ce, cf);
					m=i;
				}
				else{
					m--;
					letra = obterLetra(m);
					printf("%c  ", letra);
					
					contar(letra, ca, cb, cc, cd, ce, cf);
				}
			}
			printf("\n");
			
			if(i == nf1){
				mostrarRepeticoes(ca, cb, cc, cd, ce, cf);
			}
		}
		return 1;
	}
	else{
		return 0;
	}
}

char obterLetra(int nf){
	char letra = ' ';
	
	if(nf <= 26){
		letra = (char) 65 + nf - 1;	
	}
	
	return letra;
}

void contar(char l, int *a, int *b, int *c, int *d, int *e, int *f){
	switch(l){
		case 'A': *a += 1; break;
		case 'B': *b += 1; break;
		case 'C': *c += 1; break;
		case 'D': *d += 1; break;
		case 'E': *e += 1; break;
		case 'F': *f += 1; break;
	}
}

void mostrarRepeticoes(int *a2, int *b2, int *c2, int *d2, int *e2, int *f2){
	printf("\nLetra A repetida %d vezes", *a2);
	printf("\nLetra B repetida %d vezes", *b2);
	printf("\nLetra C repetida %d vezes", *c2);
	printf("\nLetra D repetida %d vezes", *d2);
	printf("\nLetra E repetida %d vezes", *e2);
	printf("\nLetra F repetida %d vezes", *f2);
}