#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char letra;
	
	printf("\nInforme uma letra do alfabeto: ");
	scanf("%c", &letra);
	
	int letra_n = (int) letra;
	
	if(letra_n - 65 >= 0 || letra_n - 97 >= 0){
		printf("\nParte do Alfabeto\n");
		
		if(letra_n - 65 <= 23){
			printf("\nMaiuscula");
		}
		else if(letra_n - 97 >= 0){
			printf("\nMinuscula");
		}
	}
	return 0;
}