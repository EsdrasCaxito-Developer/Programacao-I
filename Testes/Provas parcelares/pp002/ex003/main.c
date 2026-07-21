#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct{
	int vi, vf;
} valores;

typedef struct{
	int td;
} tds;

int somaDigitosCubicos(int n, int r);

int main(int argc, char *argv[]) {
	
	valores v;
	tds t[5];
	
	int n_cub=0, c=0;
	
	printf("\nInforme o valor inicial: ");
	scanf("%d", &v.vi);
	printf("\nInforme o valor inicial: ");
	scanf("%d", &v.vf);
	
	for(int i=v.vi; i<= v.vf; i++){
		n_cub = somaDigitosCubicos(i, 0);
		
		if(i==n_cub){
			t[c].td = i;
			c++;
		}
	}
	
	printf("\nAlunos interessados tem os seguintes TD: \n\n");
	for(int i=0; i<c; i++){
		printf("%d ",t[i].td);
	}
	return 0;
}

int somaDigitosCubicos(int n, int r){
	
	if(n==0){
		return pow((float) r, 3.0);
	}
	
	return pow((float) r, 3.0) + somaDigitosCubicos(n/10, n%10);
}