#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char string1[50], string2[50], string[50]=" ", aux[50], msub[25]=" ";
	
	bool certo1 = false, certo2 = false;
	
	while(!certo1 || !certo2){
		
		if(!certo1){
			printf("\nInforme a string1: ");
			fgets(aux, 50, stdin);
			
			strcpy(aux, tolower(aux));
			
			if(strlen(aux)-1 >= 10 && aux[strlen(aux)-2] == 'g'){
				strcpy(string1, aux);
				strcpy(aux, "");
				certo1 = true;
				printf("\nString1 passou pela validacao");
			}	
			else{
				printf("\nInfelizmente a string1 nao passou pela validacao");
			}
		}
		
		printf("\n");
		
		if(!certo2){
			printf("\nInforme a string2: ");
			fgets(aux, 50, stdin);
			
			strcpy(aux, tolower(aux));
			
			if(strlen(aux)-1 >= 10 && aux[strlen(aux)-2] == 'g'){
				strcpy(string2, aux);
				strcpy(aux, "");
				certo2 = true;
				printf("\nString2 passou pela validacao");
			}
			else{
				printf("\nInfelizmente a string2 nao passou pela validacao");
			}
		}
		
		printf("\n");
		
	}
	
	system("cls");
	printf("\nAs duas strings passaram pela validacao\n");
	printf("\nString1: %s", string1);
	printf("\nString2: %s", string2);
	
	int tm = (strlen(string1) >= strlen(string2)) ? strlen(string2) : strlen(string1);
	int s=0, maior=0;
	
	printf("\nCaracteres em comum\n\n");
	for(int i=0; i<tm; i++){
		if(string1[i] == string2[i]){
			string[s] = string2[i];
			s++;
			
			printf("%c | ", string1[i]);
		}
		
		if(string1[i] != string2[i] || i == tm-1){
			
			if(strlen(string) > maior){
				maior = strlen(string);
				strcpy(msub, string);
			}
			
			s=0;
			strcpy(string, " ");
		}
		
	}
	
	printf("\n\nMaior substring comum: %s", msub);
	return 0;
}