
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	char pal[1000]; 
	scanf(" %[^\n]s", pal);
	int tam = strlen(pal), cont = 0, pala = 0;
	for(int i = 0; i < (tam + 1); i++){
		if(pal[i] == ' '|| pal[i] == 0){
			if(cont > 2)
				pala++;
			cont = 0;
		}
		else
			cont++;
	} 
	printf("Essa frase possui :%d palavras", pala);
	return 0;
}

