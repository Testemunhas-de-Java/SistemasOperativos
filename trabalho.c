#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

typedef struct Process {
	int id;
	char* arrival;
	char* instruction;
	//int variable;
	
} Process;

struct Process Processos[4];

int Running(char *Instructions) {
	puts(Instructions);
	return 0;
}


int Ready(char *storage[]){
	printf("debug Storage %s %s %s %s" ,storage[0], storage[1], storage[2], storage[3]);
	//char *Arrive;
	char *Inst;
	//Arrive = strdup(storage[0]);
	//Arrive = strtok(Arrive," ");
	//printf("tempo de chegada %s \n" ,Arrive);
	Inst = storage[0]+2;
	puts(Inst);
	//puts(storage[0]);
	Running(Inst);
	return 0;
}

int main() {
	char* linha = NULL;
	size_t len = 0;
	ssize_t read;
	FILE *ficheiro;
	char *storage[4];
	int i = 0;
	
	
	ficheiro = fopen("textoteste.txt","r");
	
	if(ficheiro == NULL) {
		printf("Unable to open file."); }
		
	else{
		printf("file opened \n");
		while ((read = getline(&linha, &len, ficheiro)) != -1) {
			//printf("Linha lida: %s", linha);    //debug
			storage[i] = strdup(linha);		//guardar pointeres linha no array storage
			//printf("print dentro do ciclo %s", storage[i]); 	//debug storage
			i++;
		}
		printf("print fora do ciclo %s", storage[1]);   //debug storage
		//Ready(storage);
		fclose(ficheiro);
		}
	char *Arrive;
	char *Inst;
	int a;
	for ( a = 0; a < 4 ;a++){
			Arrive = strdup(storage[a]);
			Arrive = strtok(Arrive," ");
			Processos[a].arrival = Arrive;
			puts(Processos[a].arrival);
			Inst = storage[a]+2;
			Processos[a].instruction = Inst;
			puts(Processos[a].instruction);
				}
	return 0;
		
	}
	
