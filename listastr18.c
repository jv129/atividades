#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>

int main()
{
	char s[100];
	srand(time(NULL));
	scanf(" %s", s); 
	int vet[strlen(s)], num;
	for(int i = 0; i < strlen(s) ; i++){
		while(1){
			num = rand()%strlen(s);
			int cond = 1;
			if(!(i)){
				vet[i] = num; break;
			}
			else{
				for(int j = 0; j < i; j++){
					if(vet[j] == num)
						cond = 0;
				}
				if(cond){
					vet[i] = num; break;
				}
			}
		}
	}
	char aux;
	for(int i = 0; i < strlen(s); i++){
		aux = s[vet[i]];
		s[vet[i]] = s[i];
		s[i] = aux;
	}
	printf("%s", s);
	return 0;
}

