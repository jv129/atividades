#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main()
{
	srand(time(NULL));
	int vet[10];
	for(int i = 0 ; i < 10; i++){
		vet[i] = rand()%15;
		printf("[%d]", vet[i]);
	}
	printf("\n");
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < i; j++){
			int cont = j+1, aux;
			while(1){
				if(vet[cont] < vet[cont-1]){
					aux = vet[cont];
					vet[cont] = vet[cont -1];
					vet[cont -1] = aux;
				}
				else{
					break;
				}
				cont--;
			}
		}
	}
	for(int i = 0; i < 10; i++){
		printf("[%d]", vet[i]);
	}
	return 0;
}

