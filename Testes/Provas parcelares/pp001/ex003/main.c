#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int in=0, qtd=0;
	char string[50];
	
	printf("\nInforme a string: ");
	fgets(string, 50, stdin);
	
	printf("\nInforme o valor de inicio da contagem: ");
	scanf("%d", &in);
	printf("Informe a quantidade de caracteres:    ");
	scanf("%d", &qtd);
	
	printf("\n");
	for(int i=in; i<in+qtd; i++){
		printf("%c", string[i]);
	}
	
	return 0;
}