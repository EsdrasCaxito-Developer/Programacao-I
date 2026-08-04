#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

bool exist(char str[30], char st, int p);
int times(char st1, char str1[30], int c);

int main(int argc, char *argv[]) {

	char string[30];
	bool first = true;
	
	printf("\nInforme a string: ");
	fgets(string, sizeof(string), stdin);
	printf("\n");
	
	char s_nonrepited[30];
	int s=0;
	
	for(int i=0; i<strlen(string)-1; i++)	{
		
		if(!exist(s_nonrepited, string[i], i)){
			s_nonrepited[s] = string[i];
			printf("%c: %d\n", toupper(s_nonrepited[s]), times(string[i], string, 0));
			s++;
		}
		
	}
	return 0;
}

bool exist(char str[30], char st, int p){
	for(int i=0; i<p; i++){
		if(str[i] == st){
			return true;
		}
	}
	
	return false;
}

int times(char st1, char str1[30], int c){

	for(int i=0; i<strlen(str1)-1; i++){
		if(str1[i] == st1){
			c++;
		}
	}
	
	return c;
}