#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand(time(NULL));
	
	int n, n_rand = rand() % 10;
	bool match = false;
	
	printf("\nInforme o valor de n: ");
	scanf("%d", &n);
	
	printf("\n");
	
	while(!match){
		if(n < n_rand){
			printf("Estas abaixo do numero");
			printf("\n");
		}
		else if(n > n_rand){
			printf("Estas acima do numero");
			printf("\n");
		}
		else{
			match = true;
		}
		
		if(!match){
			printf("\nInforme o valor de n: ");
			scanf("%d", &n);		
			printf("\n");
		}
	}
	
	printf("Parabens, voce acertou!");
	return 0;
}