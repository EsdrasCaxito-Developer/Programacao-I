#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char string1[30], string2[30];
	
	printf("\nInforme a string1: ");
	fgets(string1, sizeof(string1), stdin);

	printf("\nInforme a string2: ");
	fgets(string2, sizeof(string2), stdin);
	
	int tm = (strlen(string1) > strlen(string2)) 
			  ? strlen(string2)
			  : strlen(string1),
		n = 0;
	bool display = true;
	
	printf("\n");
	for(int i=0; i<tm; i++){
		if(string1[i] == string2[i]){
			
			if(display){
				printf("%d\n", i+1);
				display = false;	
			}
		}
		else{
			n++;
		}
	}
	
	if(n == tm){
		printf("%d", -1);
	}
	return 0;
}