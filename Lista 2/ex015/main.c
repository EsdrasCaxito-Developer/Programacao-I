#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n, nd=0, c=0;
	
	printf("\nInforme o valor de n: ");
	scanf("%d", &n);
	
	printf("\n 1| ");
	for(int i=2; i<=n; i++){
		
		for(int j=1; j<=i; j++){
			
			if(i%j==0){
				nd++;
			}
		}
		
		if(nd==2){
			printf("%d| ", i);
			c++;
		}
		if(c%10 == 0){
			printf("\n");
		}
		
		nd=0;
	}
	return 0;
}