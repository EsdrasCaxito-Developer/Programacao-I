#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	srand(time(NULL));
	
	int vet[10]={0}, *ptr=vet, sm=0;
	
	printf("\n");
	for(int i=0; i<10; i++){
		
		*(ptr+i) = rand() % 10;
		
		sm += *(ptr+i);
		
		printf("%d |", *(ptr+i));
	}
	
	printf("\n\nSoma = %d", sm);
	return 0;
}