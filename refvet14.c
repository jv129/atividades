
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main()
{
	srand(time(NULL));
	int n, x, y;
	scanf(" %d %d %d", &n, &x, &y);
	int vet[n], esp[n];
	for(int i = 0; i < n; i++){
		vet[i] = x+rand()%(y-x+1);
		esp[i] = 1;
		printf("[%d]", vet[i]);
	}
	printf("\n");
	//escolhendo o maior e o menor e trocando
	int pIni, aux, cont = 0;
	while(1){
		int cond = 0;
		cont++;
		for(int i = 0;i < n ; i++){
			if(esp[i]){
				pIni = i;break;
			}
		}
		 int  maior = vet[pIni],pMaior =  pIni, pMenor = pIni , menor = vet[pIni];
		 for(int i = 0; i < n; i++){
				 if(maior < vet[i] && esp[i]){
					 pMaior = i;
					 maior = vet[i];
				 }
				 if(menor > vet[i] && esp[i]){
					 pMenor = i;
					 menor = vet[i]; 
				 }	
		 }
		 esp[pMaior] = 0;
		 esp[pMenor] = 0; 
		 aux = vet[pMaior];
		 vet[pMaior] = vet[pMenor];
		 vet[pMenor] = aux;
		 
		 for(int i = 0; i < n; i++){
			 printf("[%d]", vet[i]);
		 }
		printf("\n");
		 for(int i = 0; i < n; i++){
			 if(esp[i])
				cond = 1; 
		 }
		
		 if(!cond)
			break; 
	}
	return 0;
}

