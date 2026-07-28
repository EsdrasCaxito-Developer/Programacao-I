#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int hp, mp, sp, hs, ms, ss;
	
	printf("\nInforme o tempo do primeiro momento [hh:mm:ss]: ");
	scanf("%d:%d:%d", &hp, &mp, &sp);

	printf("Informe o tempo do segundo momento [hh:mm:ss]:  ");
	scanf("%d:%d:%d", &hs, &ms, &ss);
	
	int d_p = hp * 3600 + mp * 60 + sp,
		d_s = hs * 3600 + ms * 60 + ss;
		
	if(d_p > d_s){
		printf("\nO segundo momento vem antes do primeiro");
	}
	else if(d_s > d_p){
		printf("\nO primeiro momento vem antes do segundo");
	}
	else{
		printf("\nE o mesmo momento");
	}
	
	return 0;
}