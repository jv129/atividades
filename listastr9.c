
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main()
{
	char st[100], st2[100];
	scanf(" %[^\n]", st);
	scanf(" %[^\n]", st2);
	int tam = strlen(st), tam2 = strlen(st2), cont = 0, cond = 1;
	while(1){
		if(st[cont] != st2[cont]){
			cond = 0; break;
		}
		if(cont == (tam -1) || cont == (tam2 - 1))
			break;
		cont++;
	}
	if(cond){
		if(tam < tam2)
			printf("A primeira está condtida na segunda!");
		if(tam2 < tam)
			printf("A segunda está contida na primeira!");
		}
	else 
		printf("não existe compatibilidade");
	
	return 0;
}

