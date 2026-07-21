#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char string1[20], string[10], adn[]="atgc";
	int s=0;
	
	printf("\nInforme a string: ");
	fgets(string1, 20, stdin);
	
	for(int i=0; i<strlen(string1); i++){
		if(tolower(string1[i]) == adn[0] || 
		   tolower(string1[i]) == adn[1] || 
		   tolower(string1[i]) == adn[2] || 
		   tolower(string1[i]) == adn[2]
		){
			
			string[s] = toupper(string1[i]);
			s++;
		}
	}
	
	printf("\n%s", string);
	
	return 0;
}