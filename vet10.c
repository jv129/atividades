
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main()
{
	int n;
	srand(time(NULL));
	scanf(" %d", &n);
	int v1[n], v2[n]; 
	for(int i = 0; i < n; i++){
		v1[i] = rand()%1024;
		printf("[%d]", v1[i]);
	}
	printf("\n");
	for(int i = 0; i < n; i++){
		int soma = 0, num = v1[i] ;
		long int bin= 1000000000;
		for(int j = 512; j >= 1; j /= 2){
			if(num>=j){
				soma+= bin;
				num -= j;
			}	
			bin /= 10;
		}
		v2[i] = soma; 
		printf("[%d]", v2[i]);
	}
	return 0;
}

