#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand(time(NULL));
	
	int vet[10]={0}, intervalo=10, aux=0, n;
	bool troca = true;
	
	printf("\nInforme o valor a procurar: ");
	scanf("%d", &n);
	
	for(int i=0; i<10; i++){	
		vet[i] = rand() % 10;
	}
	
	while(troca || intervalo > 1){
		intervalo = (intervalo / 1.3) >= 0 ? intervalo / 1.3 : 1;
		
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
	
	printf("\n");
	for(int i=0; i<10; i++){	
		printf("%d |", vet[i]);
	}
	
	printf("\n\n");
	int inicio=0, fim=9, centro = (inicio + fim) / 2, m = vet[centro];
	
	if(n==m){
		printf("Valor encontrado na posicao [%d]", centro);
	}
	else{
		while(inicio <= fim){
			centro = (inicio + fim) / 2;
			m = vet[centro];
			
			if(n==m){
				printf("Valor encontrado na posicao [%d]", centro);
				break;
			}
			else if(n > m){
				inicio = centro + 1;
			}
			else if(n < m){
				fim = centro - 1;
			}
		}
	}
	
	
	if(inicio > fim){
		printf("Valor nao encontrado");
	}
	return 0;
}