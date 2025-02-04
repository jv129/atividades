#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main()
{
	//bubble sort
	srand(time(NULL));
	int vet[10];
	for(int i = 0; i < 10; i++){
		vet[i] = rand()%15;
		printf("[%d]", vet[i]);  
	}
	printf("\n");
	int  aux;
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 9; j++){
			if(vet[j] > vet[j+1]){
				aux = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = aux;
			}
		}
	}
	for(int i = 0; i < 10; i++){
		printf("[%d]", vet[i]);
	}
	return 0;
}

