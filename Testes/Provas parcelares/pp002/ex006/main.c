#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char string1[50], string2[50], string[25], msub[10];
	int s=0, maior=0;
	
	printf("\nInforme a string1: ");
	fgets(string1, 50, stdin);

	printf("\nInforme a string2: ");
	fgets(string2, 50, stdin);
	
	int tm = (strlen(string1) >= strlen(string2))
			  ? strlen(string2)
			  : strlen(string1);
	
	for(int i=0; i<tm-1; i++){
		if(string1[i] == string2[i]){
			string[s] = string1[i];
			s++;
		}
		else{
			string[s] = '-';
			s++;
		}
	}
	
	char *token = strtok(string, "-");
	
	while(token != NULL){
		if(strlen(token) > maior){
			maior = strlen(token);
			strcpy(msub, token);
		}
		
		token = strtok(NULL, "-");
	}
	
	printf("\n%s", msub);
	return 0;
}