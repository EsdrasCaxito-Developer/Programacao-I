#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int v[10], n_p=0, n_ip=0, sm=0;
	float med = 0.0;
	
	for(int i=0; i<10; i++){
		scanf("%d", &v[i]);
		
		if(v[i] % 2 == 0){
			n_p++;
		}
		else{
			n_ip++;
		}
		
		sm += v[i];
	}
	
	med = sm / 10;
	
	printf("\n");
	
	for(int j=9; j>=0; j--){
		printf("%d| ", v[j]);
	}
	
	printf("\n");
	printf("\nSoma:    %d", sm);
	printf("\nMedia:   %.2f", med);
	printf("\nPares:   %d", n_p);
	printf("\nImpares: %d", n_ip);
	return 0;
}