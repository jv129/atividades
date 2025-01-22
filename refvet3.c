

#include <time.h>
#include <stdio.h>

int main()
{
	srand(time(NULL));
	int n, x, total = 0;
	scanf(" %d %d", &n, &x);
	int vet[n], vet2[n];
	for(int i = 0; i < n; i++){
		vet[i] = rand()%(x+1);
		printf("[%d]", vet[i]);
		vet2[i] = 1;
	}
	//detectando os números distintos
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(j!=i){
				if(vet2[i])
					if(vet[i] == vet[j])
						vet2[j] = 0;	
			}
		}
	} 
	for(int i = 0; i < n ; i++){
		total += vet2[i];
	}
	printf("\ntotal de números distintos%d\n", total);
	//achando o menor e maior 
	int pMaior = 0, pMenor = 0;
	for(int i = 1; i < n; i++){
		if(vet[pMaior] < vet[i])
			pMaior = i;
		if(vet[pMenor] > vet[i])
			pMenor = i;
	}
	printf("O maior e o menor estão respctivamente nas posições %d , %d \n", pMaior, pMenor);
	//achando o numero que mais repetiu
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i != j)
				if(vet2[i]){
					if(vet[i] == vet[j])
						vet2[i]++;
				}
		}
	}
	pMaior = 0;
	pMenor = 0;
	for(int i = 0; i < n ; i++){
		if(vet2[i]){
			if(vet2[pMaior] < vet2[i])
				pMaior = i;
			if(vet2[pMenor] > vet2[i])
				pMenor = i;
		}
	}
	printf("O valor que mais repetiu foi %d, repetido %d vezes\n", vet[pMaior], vet2[pMaior]);
	printf("O valor que menos repetiu foi %d, repetido %d vezes", vet[pMenor], vet2[pMenor]);
	return 0;
}

