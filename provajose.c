#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct {
	int id;
	char titulo[100];
	char artista[100];
	int tempo;
}Musica;


//achar musica 
int acharMusica(Musica musicas[], int *tamanho){
	printf("Digite o nome da música\n");
	char nomeM[100];
	scanf(" %s", nomeM);
	for(int i = 0; i < *tamanho; i++){
		if(!strcmp(nomeM, musicas[i].titulo)){
			return i;
		}
	}
	return -1;
}

//organizar playlist 
void organizarA(Musica musicas[], int* tamanho){
	for(int i = 1; i < *tamanho; i++){
		for(int j = i; j > 0; j--){
			if(strcmp(musicas[j].artista, musicas[j - 1].artista) < 0){
				Musica musica = musicas[j];
				musicas[j] = musicas[j-1];
				musicas[j - 1] =  musica;
			}
		}
	}
}


void organizarI(Musica musicas[], int* tamanho){
	for(int i = 1; i < *tamanho; i++){
		for(int j = i; j > 0; j--){
			if(musicas[j].id < musicas[j - 1].id){
				Musica musica = musicas[j];
				musicas[j] = musicas[j-1];
				musicas[j - 1] =  musica;
			}
		}
	}
}



//embaralhar
void embaralhar(Musica musicas[], int* tamanho){
	for(int i = 0; i < *tamanho; i++){
		Musica aux = musicas[i];
		int posicao = rand()%*tamanho;
		musicas[i] = musicas[posicao];
		musicas[posicao] = aux;
	}
}

int interface(){
	printf("=MINHA PLAYLIST=\n");
	printf("1-adicionar musica\n");
	printf("2-excluir artista\n");
	printf("3-Tocar playlist ordem\n");
	printf("4-Tocar por artista\n");
	printf("5-Tocar aleatorio\n");
	printf("6-Sair\n");
	int opt;
	scanf(" %d", &opt);
	system("clear");
	return opt;
}

Musica cadastrar(){
	Musica musica;
	printf("Digite o nome, artista e tempo da musica\n");
	scanf(" %s", musica.titulo);
	scanf(" %s", musica.artista);
	scanf(" %d", &musica.tempo);
	
	return musica;
}

void apagar(Musica musicas[], int* tamanho){
	int posicao = acharMusica(musicas, tamanho);
	if(posicao != -1){
	
		for(int i = posicao; i < *tamanho; i++){
			Musica aux = musicas[i]; 
			musicas[i] = musicas[i+1];
			musicas[i+1] = aux;
		}
		*tamanho -= 1;
	}

}

void tocarPlaylist(Musica musicas[], int* tamanho, int tipo){
	if(tipo == 1){
		organizarI(musicas, tamanho);
	}
	if(tipo == 2){
		organizarA(musicas, tamanho);
	}
	if(tipo == 3){
		embaralhar(musicas, tamanho);
	}
	int t = 0;
	int min;
	int sec;
	for(int i = 0; i < *tamanho; i++){
		 min = musicas[i].tempo / 60;
		 sec = musicas[i].tempo % 60;
		printf("%d\t%s\t%s\t%d:%d \n", musicas[i].id, musicas[i].titulo, musicas[i].artista,min, sec );
		t += musicas[i].tempo;
	}
	min = t / 60;
	sec = t % 60;
	printf("Tempo total da Playlist\t%d:%d\n", min, sec);
}

int main()
{
	srand(time(NULL));
	Musica musicas[100];
	int cont = 0;
	int tamanho = 0;
	
	while(1){
		switch(interface()){
			case 1: musicas[cont] = cadastrar(musicas);
				musicas[cont].id = cont + 1;
				cont++;
				tamanho++; break;
			case 2: apagar(musicas, &tamanho); break;
			case 3: tocarPlaylist(musicas, &tamanho, 1);break;
			case 4: tocarPlaylist(musicas, &tamanho, 2);break;
			case 5: tocarPlaylist(musicas, &tamanho, 3);break;
			case 6: return 0; 
		}
	}
	return 0;
}

