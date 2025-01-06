
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int cond = 1;
	char email[100];
	scanf("%s", email);
	int tam = strlen(email);
	for(int i = 0; i < tam; i++){
		if( !(i)&& email[i] == '@'){
			cond = 0; break;
		}
		if(email[tam - 1] == '.'){
			cond = 0; break;
		}
		if(email[i] == ' '){
			cond = 0; break;
		}
		if(email[i] < 33 || email[i] > 47){
			cond = 0; break;
		}
	}
	if(cond){
		for(int i = 1; i < tam; i++){
			if(email[i] == '@'){
				if(email[i + 1] != '.'){
					cond = 0; break;
				}
				cond = 1;break;
			}
			else 
				cond = 0;
		}
	}
	if(cond)
		printf("email válido!\n");
	else
		printf("email inválido!\n");
	return 0;
}

