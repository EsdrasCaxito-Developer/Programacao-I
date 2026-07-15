#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n, v0=1, v1=2;
	float vn=0.0;
	
	printf("\Informe o valor n: ");
	scanf("%d", &n);
	
	for(int i=0; i<=n; i++){
		
		if(i==0){
			vn = v0;
		}
		else if(i==1){
			vn=v1;
			v0 = vn;
		}
		else{
			vn = v0 + pow(-1.0, (float) n) / n;
			v0 = vn;	
		}
	}
	
	printf("\nV[%d] = %.2f", n, vn);
	return 0;
}