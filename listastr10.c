
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main()
{
	char text[100], patern[100];
	scanf(" %[^\n]s", text);
	scanf(" %[^\n]s", patern);
	int tam = strlen(text), tam2 = strlen(patern), cont2 = 0, indiceT[100];
	for(int i = 0; i < tam; i++){
		int cond = 1;
		if(patern[0] == text[i]){
			for(int j = 0; j < tam2; j++){
				if(patern[j] != text[i + j]){
					cond = 0; break;
				}
			}
			if(cond){
				indiceT[cont2] = i;
				cont2++;
			}
		}
	}
	if(cont2){
		printf("%d ocorrências partindo de:[", cont2);
		for(int i = 0; i < cont2; i++){
			printf(" %d,", indiceT[i]); 
		}
		printf("]");
	}
	else
		printf("Nenhuma ocorrência.");
	return 0;
}

