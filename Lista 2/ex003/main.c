#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int ano;
	
	printf("\nInforme o valor do ano: ");
	scanf("%d", &ano);
	
	if(ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
		printf("\nAno bissexto");
	}
	
	return 0;
}