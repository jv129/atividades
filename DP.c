#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#define N 9
int main()
{
	int matriz[N][N];
	srand(time(NULL));
	for(int i = 0; i < N; i++){
			for(int j = 0; j < N; j++){
				if(!(i - j)){
					matriz[i][j] =  0;
				}
				else 
					matriz[i][j] =  1 + rand()%10	;
			}
	}
	for(int i = 0; i < N; i++){
		int soma = 0;
		for(int j = 0; j < N; j++){
			soma += matriz[i][j];
			soma += matriz[j][i];
		}
		matriz[i][i] = soma;
	}
	for(int i = 0; i < N; i++){
			for(int j = 0; j < N; j++){
				printf("[%02d]", matriz[i][j]);
			}
			printf("\n");
	}
	
	
	return 0;
}

