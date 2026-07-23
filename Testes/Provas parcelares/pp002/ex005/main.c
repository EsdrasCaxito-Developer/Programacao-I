#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char string1[10], string2[10];
	
	printf("\nInforme a string1: ");
	fgets(string1, 10, stdin);
	printf("\nInforme a string2: ");
	fgets(string2, 10, stdin);
	
	int tm = (strlen(string1) >= strlen(string2)) 
			 ? strlen(string2)
			 : strlen(string1);
	int c=0;
	bool exist = false;
			 
	for(int i=0; i<tm-1; i++){
		if(string1[i] == string2[i]){
			if(c==0){
				printf("\n%d", i+1);
				exist = true;	
			}
			c++;
		}
	}
	
	if(!exist){
		printf("\n%d", -1);
	}
	
	
	return 0;
}