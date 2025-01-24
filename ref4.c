#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main()
{
	int x, y;
	scanf(" %d %d", &x, &y);
	int vet[x], vet2[y];
	for(int i = 0; i < x; i++){
    	vet[i] = -1;
	}
	for(int i = 0; i < x; i++){
    	while(1){
        	int num = rand()%(x+y+1), cond = 1;
        	for(int j = 0; j < x; j++){
            	if(num == vet[j])
                	cond =  0;
        	}
        	if(cond){
            	vet[i] = num;
            	break;
        	}
    	}
	}
	for(int i = 0; i < y; i++){
    	vet2[i] = -1;
	}
	for(int i = 0; i < y; i++){
    	while(1){
        	int num = rand()%(x+y+1), cond = 1;
        	for(int j = 0; j < x; j++){
            	if(num == vet2[j])
                	cond =  0;
        	}
        	if(cond){
            	vet2[i] = num;
            	break;
        	}
    	}
	}
	printf("vetores\n");
	for(int i = 0; i < x; i++){
    	printf("[%d]", vet[i]);
	}
	printf("\n");
	for(int i = 0; i < y; i++){
    	printf("[%d]", vet2[i]);
	}
	printf("\nValores exclusivos no primeiro vetor\n");
	for(int i = 0 ; i < x; i++){
    	int cond = 1;
    	for(int j = 0 ; j < y; j++){
        	if(vet[i] == vet2[j])
            	cond = 0;
    	}
    	if(cond)
        	printf("[%d]", vet[i]);
	}
	printf("\nValores exclusivos no segundo vetor\n");
	for(int i = 0 ; i < y; i++){
    	int cond = 1;
    	for(int j = 0 ; j < x; j++){
        	if(vet[i] == vet2[j])
            	cond = 0;
    	}
    	if(cond)
        	printf("[%d]", vet2[i]);
	}
	printf("Valores presentes nos dois vetores\n");
	for(int i = 0 ; i < y; i++){
    	int cond = 0;
    	for(int j = 0 ; j < x; j++){
        	if(vet[i] == vet2[j])
            	cond = 1;
    	}
    	if(cond)
        	printf("[%d]", vet2[i]);
	}
	return 0;
}


