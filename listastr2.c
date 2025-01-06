
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main()
{
	char bin[100];
	int  tam, cond = 1, dec = 0, mult = 1;
	
	scanf("%s", bin);
	tam = strlen(bin);
	for(int i = (tam - 1); i > -1; i--){
		if(bin[i] != '1' && bin[i] != '0'){
			cond = 0; break;
		}
		if(bin[i] == '1')
			dec += mult;
		mult *= 2;
		
	}
	
	if(cond)
		printf("O valor correspondente de:%s é: %d\n", bin, dec);
	else
		printf("Valor inválido!\n");
	return 0;
}

