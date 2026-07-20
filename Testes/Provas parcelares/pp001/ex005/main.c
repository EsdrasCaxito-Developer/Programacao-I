#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char string1[50], string[10];
	int s=0, tm=0;
	
	printf("\ninforme a string: ");
	fgets(string1, 50, stdin);
	
	tm = strlen(string1);
	printf("\n");
	
	for(int i=0; i<tm; i++){
		if(string1[i] != ' '){
			string[s] = tolower(string1[i]);
			s++;
		}
		
		if(i == tm-2 || string1[i] == ' '){
			
			for(int j=0; j<s; j++){
				printf("%c", string[j]);
			}
			printf("\t-> %d", s);
			
			strcpy(string, " ");
			s=0;
			printf("\n");
		}
		
	}
	return 0;
}