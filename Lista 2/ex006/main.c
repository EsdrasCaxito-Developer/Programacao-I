#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char letra;
	
	printf("\nInforme uma letra do alfabeto: ");
	scanf("%c", &letra);
	
	int letra_n = (int) letra;
	
	if(letra_n >= 65 || letra_n >= 97){
		
		if(letra_n - 65 <= 26){
			printf("\nMaiuscula");
		}
		else{
			printf("\nMinuscula");
		}
	}
	return 0;
}