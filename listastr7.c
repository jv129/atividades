#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	srand(time(NULL));
	int tam = 8 + rand()%9, cond = 0, cond2 = 0, cond3 = 0, cond4 = 0, tipo[tam];
	char senha[tam + 1];
	for(int h = 0; h < 10; h++){
		while(1){
			for(int i = 0; i < tam; i++){
				int num = rand()%4;
				tipo[i] = num; 
				switch(num){
					case 0: 
						senha[i] = 48 + rand()% 10;break;
					case 1: 
						senha[i] = 65 + rand()% 26; break;
					case 2: 
						senha[i] = 97 + rand()% 29; break;
					case 3: 
						senha[i] = 33 + rand()% 15; break;
				}
			}
			senha[tam] = 0;
			for(int i = 0; i < tam; i++){
				switch(tipo[i]){
					case 0: cond = 1; break;
					case 1: cond2 = 1 ; break;
					case 2: cond3  = 1; break;
					case 3: cond4 = 1; break;
				}
				
			}
			if(cond + cond2 + cond3+ cond4 == 4)
				break;
		}
		printf("%s\n", senha);
	}
	return 0;
}

