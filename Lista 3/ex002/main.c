#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int vet[10], tpos[10]={0}, tneg[10]={0}, n=0, p=0;
	
	for(int i=0; i<10; i++){
		scanf("%d", &vet[i]);
		
		if(vet[i] < 0){
			tneg[n] = vet[i];
			n++;
		}
		else if(vet[i] > 0){
			tpos[p] = vet[i];
			p++;
		}
	}
	
	printf("\nPositivos: [");
	for(int j=0; j<p; j++){
		printf("%d ", tpos[j]);
	}
	printf("]");
	
	printf("\nNegativos: [");
	for(int k=0; k<n; k++){
		printf("%d ", tneg[k]);
	}
	printf("]");
	return 0;
}