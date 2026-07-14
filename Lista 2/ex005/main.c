#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x, y;
	
	printf("\nInforme o valor de x: ");
	scanf("%d", &x);
	printf("Informe o valor de y: ");
	scanf("%d", &y);
	
	if(x>0 && y>0){
		printf("\nPrimeiro quadrante");
	}
	else if(x<0 && y>0){
		printf("\nSegundo quadrante");
	}
	else if(x<0 && y<0){
		printf("\nTerceiro quadrante");
	}
	else{
		printf("\nQuarto quadrante");
	}
	return 0;
}