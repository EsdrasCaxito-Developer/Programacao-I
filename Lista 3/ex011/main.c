#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand(time(NULL));
	
	int vet[]={rand()%5, rand()%5, rand()%5, rand()%5, rand()%5, rand()%5, rand()%5, rand()%5}, 
		*ptr = vet, 
		n, 
		oc=0;
	
	printf("\nInforme o valor de n: ");
	scanf("%d", &n);
	
	printf("\n");
	for(int i=0; i<8; i++){		
		printf("%d |", *(ptr+i));
		
		if(n == *(ptr+i)){
			oc++;
		}
	}
	
	printf("\n\nOcorrencias: %d", oc);
	return 0;
}