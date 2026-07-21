#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n, sm=0, sm2=0;
	
	printf("\nInforme o valor de n: ");
	scanf("%d", &n);
	
	printf("\n");
	
	if(n>=4){
		for(int i=1; i<=n; i++){
			for(int j=1; j<=i; j++){
				printf("%d ", i);
			}
			printf("\n");
		}
		
		for(int i=1; i<=n; i++){
			printf("  ");
		}
		
		printf("T U\n");
		
		for(int i=0, c=1; i<n; i++){
			
			for(int k=1; k<=n-i; k++){
				printf("    ");
			}
			
			for(int j=1; j<=i+1; j++, c++){
				printf("   %d  ", c);
			}
			printf("\n");
		}
		
		printf("       L  L  I\n");
		
		for(int i=1, k=n-1; i<=n; i++, k--){
			for(int j=1; j<=i+k; j++){
				if(j<=i){
					printf("%d ", j);
				}
				else{
					printf("^ ");
				}
			}
			printf("\n");
		}
		
		printf("\n");
		
		for(int i=0; i<n; i++){
			sm += 1 * (int) pow(10.0, (float) i);
			sm2 +=sm;
			
			if(i<n-1){
				printf("%d + ", sm);
			}
			else{
				printf("%d = ", sm);
			}
		}
		
		printf("%d", sm2);
	}
	return 0;
}