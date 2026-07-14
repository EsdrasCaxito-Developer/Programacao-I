#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char letra;
	
	printf("\nInforme uma letra do alfabeto: ");
	scanf("%c", &letra);
	
	int letra_n = (int) letra, vogal = 0;
	
	if(letra_n - 97 < 26 || letra_n - 65 < 26){
		
		if(letra_n - 65 >= 0 && letra_n - 65 < 26){
			vogal = letra_n - 65;
		}
		else{
			vogal = letra_n - 97;
		}
		
		switch(vogal){
			case 0: printf("\nVogal");
			break;
			
			case 4: printf("\nVogal");
			break;
			
			case 8: printf("\nVogal");
			break;
		
			case 14: printf("\nVogal");
			break;
			
			case 20: printf("\nVogal");
			break;
			
			default: printf("\nConsoante");
			break;
		}
	}
	return 0;
}