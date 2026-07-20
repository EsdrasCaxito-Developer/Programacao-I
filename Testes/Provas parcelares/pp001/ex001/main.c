#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct{
	int idade, d_nascimento;
	char nome[30];
} pessoa;

int main(int argc, char *argv[]) {
	
	pessoa p1;
	
	printf("\nInforme seu nome:              ");
	fgets(p1.nome, sizeof(p1.nome), stdin);
	
	printf("Informe seu ano de nascimento: ");
	scanf("%d", &p1.d_nascimento);

	printf("Informe sua idade:             ");
	scanf("%d", &p1.idade);
	
	
	printf("\nNome:              %s", p1.nome);
	printf("Ano de nascimento: %d", p1.d_nascimento);
	printf("\nIdade:             %d", p1.idade);
	return 0;
}