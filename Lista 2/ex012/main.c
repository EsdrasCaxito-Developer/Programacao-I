#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n, v0=2, vn=0;
	
	printf("\nInforme o valor de n: ");
	scanf("%d", &n);
	
	for(int i=0; i<=n; i++){
		if(i==0){
			vn = v0;
		}
		else if(i%2==0){
			vn = v0+2;
			v0 = vn;
		}
		else if(i%2!=0){
			vn = v0+4;
			v0 = vn;
		}
	}
	
	printf("\nV[%d] = %d", n, vn);
	return 0;
}