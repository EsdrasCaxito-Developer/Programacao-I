#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int hi, hf, mi, mf;
	
	printf("\nInforme o tempo de inicio do jogo [HH:MM]: ");
	scanf("%d:%d", &hi, &mi);
	printf("\nInforme o tempo de fim do jogo [HH:MM]:    ");
	scanf("%d:%d", &hf, &mf);
	
	int tempo_inicio = hi*60 + mi, 
		tempo_fim = hf*60 + mf, 
		duracao=0, 
		duracao_m=0, 
		duracao_h=0,
		duracao_m_diaria = 24*60;
	
	if(tempo_fim >= tempo_inicio){
		duracao = tempo_fim - tempo_inicio;
		
		if(duracao <= duracao_m_diaria){
			duracao_h = duracao / 60;
			duracao_m = duracao % 60;
		}
	}
	else{
		duracao = duracao_m_diaria - (hi*60 + mi) + (hf*60 + mf);
		
		if(duracao <= duracao_m_diaria){
			duracao_h = duracao / 60;
			duracao_m = duracao % 60;
		}
	}
	
	printf("\nO tempo de duracao %dh:%dmin", duracao_h, duracao_m);
	
	return 0;
}