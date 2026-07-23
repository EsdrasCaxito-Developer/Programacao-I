#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b;
	
	printf("\nInforme o valor de a: ");
	scanf("%d", &a);
	printf("Informe o valor de b: ");
	scanf("%d", &b);
	
	if(a==0 || b==0){
		printf("\nO produto resulta em valor nulo");
	}
	else if(a>0 && b>0 || a<0 && b<0){
		printf("\nO produto resulta em valor positivo");
	}
	else{
		printf("\nO produto resulta em valor negativo");
	}
	
	return 0;
}