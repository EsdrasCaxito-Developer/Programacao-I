#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char n1[100]=" ", n2[100]=" ";
	int n_d, tm1=0, tm2=0, tm=0;
	
	printf("\nInforme o primeiro numero: ");
	fgets(n1, 100, stdin);

	printf("\nInforme o segundo numero:  ");
	fgets(n2, 100, stdin);
	
	for(int i=0; i<100; i++){
		if(n1[i] != '\0'){
			tm1 = i+1;
		}
	
		if(n2[i] != '\0'){
			tm2 = i+1;
		}
	}
	tm1 -=2;
	tm2 -=2;
	
	for(int k=0; k<2; k++){
		if(n1[tm1] == n2[tm2]){
			n_d++;
		}
		
		tm1--;
		tm2--;
	}
	
	if(n_d==2){
		printf("\nEncaixa");
	}
	else{
		printf("\nNao Encaixa");
	}
	return 0;
}