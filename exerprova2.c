#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
	srand(time(NULL));
	int n,x, y;
	while(1){
		scanf(" %d %d %d", &n, &x, &y);
		if(y - x >= n)
			break;
	}
	int vet[n]; 
	vet[0] = x + rand()%(y-x+1);
	for(int i = 1; i < n; i++){
		while(1){
			int num = x + rand()%(y-x+1), cond = 1;
			for(int j = 0; j < i; j++){
				if(num == vet[j])
					cond = 0;
			}
			if(cond){
				vet[i] = num; break;
			}
		}
	}
	for(int i = 0; i < n; i++){
		printf("[%d]", vet[i]);
	}
	printf("\n");
	int posi = 0, cont = 1;
	for(int i  = 0; i < n; i++){
		if(vet[i] < vet[i + 1]){
			cont++;
		}
		else{
			break;
		}
	}
	int posi2 = cont, cont2 = 0;  
	while(1){
		posi2 += cont2; 
		cont2 = 1;
		for(int i = posi2 ; i < n-1; i++){
			if(vet[i] < vet[i +1]){
				cont2++; 
			}
			else
				break;
		}
		if(cont2 > cont){
				cont = cont2; 
				posi = posi2; 
			}
			if(cont2 == cont){
				int seq = 0, seq2 = 0;
				for(int j =  posi2 ; j < posi2 + cont2; j++){
					seq2 += vet[j];
				}
				for(int i = posi; i < posi + cont; i++){
					seq += vet[i];
				}
				if(seq2 > seq){
					cont = cont2;
					posi = posi2; 
				}
			}
			if(posi2 + cont2 >= n-1 )
				break; 
	}
	printf("reposta gerada[");
	for(int i = posi; i < posi + cont; i++){
		printf("%d, ", vet[i]);
	}
	printf("]");
	return 0;
}

