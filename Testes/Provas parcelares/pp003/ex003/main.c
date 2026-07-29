#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n, p=1;
	
	printf("\nInforme o valor de n: ");
	scanf("%d", &n);
	
	for(int i=0; i<=n; i++){
		
		for(int k=1; k<=n-i; k++){
			printf("     ");
		}
		
		for(int j=0; j<i; j++)	{
			if(j==0 || i==0 || j==i){
				printf("      1   ");
			}
			else{
				p = p * (i-j) / j;
				printf("      %d   ", p);
			}
			
		}
		printf("\n");
	}
	return 0;
}