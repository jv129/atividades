#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main()
{
	char cpf[12];
	int cond=1, dv1 = 0, dv2 = 0; 
	scanf(" %s", cpf);
	for(int i = 0; i < 11; i++){
		if(cpf[i] < '0' || cpf[i] > '9')
			cond = 0;
	} 
	if(strlen(cpf) != 11)
		cond =  0;
	int ig=0;
	for(int i = 0; i < 11; i++){
		if(cpf[i] == cpf[0])
			ig++;	
	}
	if(ig == 11)
		cond = 0;
	if(cond == 1){
		for(int i = 0; i < 9; i++){
			dv1 += (cpf[i] - '0') * (i + 1);
		}	
		for(int i = 0; i < 10; i++){
			dv2 += ((cpf[i] - '0') * i);
		}
		dv1 = dv1 % 11;
		dv2 = dv2 % 11;
		if(dv1 >= 10)
			dv1 = 0;
		if(dv2 >= 10)
			dv2 = 0;
		if(cpf[9]-'0' != dv1)
			cond =  0;
		if(cpf[10]-'0'!= dv2)
			cond = 0;
		
	}
		if(cond)
			printf("cpf válido!\n");
		else
			printf("cpf inválido!\n");
	return 0;
}

