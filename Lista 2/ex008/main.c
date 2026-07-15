#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int mes;
	
	printf("\nInforme o numero do mes: ");
	scanf("%d", &mes);
	
	printf("\n");
	
	switch(mes){
		case 1: printf("Janeiro");
		break;
		case 2: printf("Fevereiro");
		break;
		case 3: printf("Marco");
		break;
		case 4: printf("Abril");
		break;
		case 5: printf("Maio");
		break;
		case 6: printf("Junho");
		break;
		case 7: printf("Julho");
		break;
		case 8: printf("Agosto");
		break;
		case 9: printf("Setembro");
		break;
		case 10: printf("Outubro");
		break;
		case 11: printf("Novembro");
		break;
		case 12: printf("Dezembro");
		break;
		
		default: printf("Este mes nao existe");
		break;
	}
	return 0;
}