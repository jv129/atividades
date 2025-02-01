#include <stdlib.h>
#include <time.h>
#include <stdio.h>


#define CARTAS 7

int main()
{
	srand(time(NULL));
	int vet[CARTAS], vet2[CARTAS];
	for(int i = 0; i < CARTAS; i++){
		vet[i] = 1 + rand()%10;
		vet2[i] = 1 + rand()%10;
	}
	int p = 0, p2 = CARTAS - 1, val, val2;
	//fazendo comparações e embaralhamento;
	while(1){
		//1 parte interação do jogo
		printf("cartas player 1:\n");
		for(int i = 0; i < CARTAS; i++){
			if(vet[i])
				printf("[%d]", vet[i]);
		}
		printf("\ncartas player 2\n");
		for(int i = 0; i < CARTAS; i++){
			if(vet2[i])
				printf("[%d]", vet2[i]);
		}
		printf("\n");
		val = vet[p];
		val2 = vet2[p2];
		if(val > val2){
			vet[p] = 0;
			p++;
			for(int i = 0; i < CARTAS*10; i++){
				while(1){
					int ran = rand()%CARTAS, ran2 = rand()%CARTAS, aux;
					if(vet2[ran] && vet2[ran2]){
						aux = vet2[ran];
						vet2[ran] = vet2[ran2];
						vet2[ran2] =  aux; break;
					}
				}
			}
		}
		if(val2 > val){
			vet2[p2] = 0;
			p2--;
			for(int i = 0; i < CARTAS*10; i++){
				while(1){
					int ran = rand()%CARTAS, ran2 = rand()%CARTAS, aux;
					if(vet[ran] && vet[ran2]){
						aux = vet[ran];
						vet[ran] = vet[ran2];
						vet[ran2] =  aux; break;
					}
				}
			}
		}
		if(val2 == val){
			for(int i = 0; i < CARTAS*10; i++){
				while(1){
					int ran = rand()%CARTAS, ran2 = rand()%CARTAS, aux;
					if(vet2[ran] && vet2[ran2]){
						aux = vet2[ran];
						vet2[ran] = vet2[ran2];
						vet2[ran2] =  aux; break;
					}
				}
			}
			for(int i = 0; i < CARTAS*10; i++){
				while(1){
					int ran = rand()%CARTAS, ran2 = rand()%CARTAS, aux;
					if(vet[ran] && vet[ran2]){
						aux = vet[ran];
						vet[ran] = vet[ran2];
						vet[ran2] =  aux; break;
					}
				}
			}
		}
		// 2 interação do jogo
		printf("confronto:\n%d VS %d\n", val, val2);
		if(val > val2)
			printf("Player1 venceu\n");
		if(val == val2)
			printf("EMPATE\n");
		if(val < val2)
			printf("player 2 venceu\n");
		int cond = 1, cond2 = 1;
		for(int i = 0 ; i < CARTAS; i++){
			if(vet[i]){
				cond = 0; break;
			}
		}
		for(int i = 0; i < CARTAS; i++){
			if(vet2[i]){
				cond2 = 0; break;
			}
		}
		if(cond){
			printf("player 1 é o campeão");break;
		}
		if(cond2){
			printf("player 2 é o campeão");break;
		}
		system("sleep 2");
		system("clear");
		
	}
	return 0;
}

