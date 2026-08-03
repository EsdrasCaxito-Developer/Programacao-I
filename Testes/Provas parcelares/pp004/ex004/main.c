#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char string[10], string_full[50]="";
	int n;
	
	printf("\nInforme o numero de strings: ");
	scanf("%d", &n);
	printf("\n");
	
	int n_strings[n], string_length[n], string_sum[n], sm=0;
	
	for(int i=0; i<n; i++){
		scanf("%s", string);
		n_strings[i] = (int) string[0];
		string_length[i] = strlen(string);
		
		for(int j=0; j<strlen(string); j++){
			sm += (int) string[j];
		}
		
		string_sum[i] = sm;
		sm = 0;
		
		strcat(string_full, string);
		
	}
	printf("\n");
	
	int aux=0, aux1=0, aux2=0;
	
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(n_strings[i] < n_strings[j]){
				aux = n_strings[i];
				n_strings[i] = n_strings[j];
				n_strings[j] = aux;
				
				aux1 = string_length[i];
				string_length[i] = string_length[j];
				string_length[j] = aux1;
				
				aux2 = string_sum[i];
				string_sum[i] = string_sum[j];
				string_sum[j] = aux2;
			}
		}
	}
	
	int s=0;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<strlen(string_full); j++){
			
			if(n_strings[i] == (int) string_full[j]){
				s = j;			
				
				for(int k=0; k<string_length[i]; k++){
					
					sm += (int) string_full[s];
					s++;
				}
				
				if(string_sum[i] == sm){
					s = j;			
					
					for(int l=0; l<string_length[i]; l++){
						printf("%c", string_full[s]);
						s++;
					}	

					printf("\n");
				}
				
				sm=0;
			}
		}
	}
	
	return 0;
}