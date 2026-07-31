#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct{
	char nome[50];
	int n_matricula, n;
	
} estudante;

int main(int argc, char *argv[]) {
	
	estudante e;
	
	printf("\nInforme seu nome:                ");
	fgets(e.nome, 50, stdin);
	
	printf("\nInforme seu numero de matricula: ");
	scanf("%d", &e.n_matricula);
	
	printf("\nInforme seu numero de estudante: ");
	scanf("%d", &e.n);
	
	printf("\nNome:                %s", e.nome);
	printf("Numero de matricula: %d", e.n_matricula);
	printf("\nNumero de estudante: %d", e.n);
	return 0;
}