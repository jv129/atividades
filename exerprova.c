
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main()
{
	int n, x, y; 
	while(1){
		printf("digite os valores do vetor do limite e do menor:");
		scanf(" %d %d %d", &n, &x, &y);
		system("clear");
		if(y-x >= n)
			break;
	}
	int vet[n]; 
	vet[0] = x + rand()%(y-x+1);
	for(int i = 1; i < n; i++){
		while(1){
			int num = x + rand()%(y-x+1);
			int cond = 1;
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
	
	int dif = vet[0] - vet[1], dif2, p = 0, p2;
	if(dif < 0)
		dif *= -1; 
	for(int i = 1; i < n-1; i++){
		dif2 = vet[i] - vet[i+1];
		p2 = i;
		if(dif2 < 0)
			dif2 *= -1;
		if(dif < dif2){
			dif = dif2; 
			p = i; 
		}
		if(dif == dif2){
			if(vet[p] + vet[p+1] < vet[p2] + vet[p2+1]){
				dif = dif2;
				p = p2;
			} 
		}
	}
	printf("resposta gerada:[%d, %d] == %d", vet[p], vet[p+1], dif);
	return 0;
}

