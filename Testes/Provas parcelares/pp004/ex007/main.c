#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void soma(int s1, int s2);
void subtracao(int su1, int su2);
void divisao(int d1, int d2);
void multiplicacao(int m1, int m2);

int main(int argc, char *argv[]) {
	
	int rs, n1, n2;
	
	printf("\n=== MENU DE OPCOES ===");
	printf("\n======================");
	printf("\n\n1-SOMA");
	printf("\n2-SUBTRACAO");
	printf("\n3-DIVISAO");
	printf("\n4-MULTIPLICACAO");
	printf("\n======================\n");
	scanf("%d", &rs);
	
	system("cls");
	
	printf("\n=== MENU DE OPCOES ===");
	printf("\n======================\n");
	printf("\nN1: ");
	scanf("%d", &n1);
	printf("\nN2: ");
	scanf("%d", &n2);
	printf("\n");
	
	switch(rs){
		case 1: soma(n1, n2);
		break;
		case 2: subtracao(n1, n2);
		break;
		case 3: divisao(n1, n2);
		break;
		case 4: multiplicacao(n1, n2);
		break;
		default: printf("Impossivel continuar");
		break;
	}
	return 0;
}

void soma(int s1, int s2){
	printf("Soma: %d", s1+s2);
}

void subtracao(int su1, int su2){
	printf("Subtracao: %d", su1-su2);
}
void divisao(int d1, int d2){
	printf("Divisao: %d", d1/d2);
}
void multiplicacao(int m1, int m2){
	printf("Multiplicao: %d", m1*m2);
}