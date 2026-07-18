#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand(time(NULL));
	
	int vet[10]={0}, aux=0; 
	
	printf("\nAntes da ordenacao\n\n");
	for(int i=0; i<10; i++){
		vet[i] = rand() % 100 + 10;
		
		printf("%d |", vet[i]);
	}

	printf("\n\nDepois da ordenacao\n\n");
	for(int i=0; i<10; i++){
		for(int j=i+1; j<10; j++){
			if(vet[i] > vet[j]){
				aux = vet[i];
				vet[i] = vet[j];
				vet[j] = aux;
			}
		}
		
		printf("%d |", vet[i]);
	}
	return 0;
}