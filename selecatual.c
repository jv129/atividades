#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main()
{
	//selection
	srand(time(NULL));
	int vet[10];
	for(int i = 0; i < 10; i++){
		vet[i] = rand()%15;
		printf("[%d]",vet[i]);
	}
	printf("\n");
	int aux;
	for(int i = 9; i > -1; i--){
		int maior = vet[0], p = 0;
		for(int j = 0; j < i+1; j++){
			if(vet[j] > maior){
				maior = vet[j];
				p = j;
			}
		}
		aux = vet[p];
		vet[p] = vet[i];
		vet[i] = aux;
		system("sleep 4");
		system("clear"); 
		for(int i = 0; i < 10; i++){
			printf("[%d]", vet[i]);
		}
		printf("\n");
	}
	return 0;
}
