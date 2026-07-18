#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int vet[10]={0}, intervalo=10, aux=0;
	bool troca = true;
	
	printf("\nAntes da ordenacao\n\n");
	for(int i=0; i<10; i++){
		vet[i] = rand() % 100 + 10;
		
		printf("%d |", vet[i]);
	}
	
	while(troca || intervalo > 1){
		
		intervalo = (intervalo / 1.3) > 1 ? intervalo / 1.3 : 1;
	
		for(int i=0, j=intervalo; j<10; i++, j++){
			if(vet[i] > vet[j]){
				aux = vet[i];
				vet[i] = vet[j];
				vet[j] = aux;
				
				troca = true;
			}
			else{
				troca = false;
			}
		}
	}
	
	printf("\n\nDepois da ordenacao\n\n");
	for(int i=0; i<10; i++){
			
		printf("%d |", vet[i]);
	}
	return 0;
}