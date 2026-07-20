#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char string1[50], string2[50], string[50]=" ", msub[25]=" ";
	int s=0, maior=0;
	
	printf("\nInforme a primeira string: ");
	fgets(string1, 50, stdin);
	printf("\nInforme a segunda string:  ");
	fgets(string2, 50, stdin);
	
	int tm = (strlen(string1) > strlen(string2)) ? strlen(string2) : strlen(string1);
	
	for(int i=0; i<tm; i++){
		if(string1[i] == string2[i]){
			string[s] = string2[i];
			s++;
		}
		else{
			if(strlen(string) > maior){
				maior = strlen(string);
				strcpy(msub, string);
				
				s=0;
				strcpy(string, " ");
			}
		}
	}
	
	printf("\nMaior substring comum: %s", msub);
	return 0;
}