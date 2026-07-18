#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand(time(NULL));
	
	int vet[10];
	
	printf("\nAntes da ordenacao\n\n");
	for(int i=0; i<10; i++){
		vet[i] = rand() % 100 + 10;
		
		printf("%d |", vet[i]);
	}
	
	for(int i=1; i<10; i++){
		int chave = vet[i], j=i-1;
		
		while(vet[j] > chave && j>=0){
			vet[j+1] = vet[j];
			j--;
		}
		
		vet[j+1] = chave;
	}
	
	printf("\n\nDepois da ordenacao\n\n");
	for(int i=0; i<10; i++){		
		printf("%d |", vet[i]);
	}
	
	return 0;
}