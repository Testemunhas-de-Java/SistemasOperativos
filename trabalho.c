#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

typedef struct Process {
	int id;
	int arrival;
	int instruction;
	int variable;
	
} Process;

int Running(char *Instructions) {
	puts(Instructions);
	return 0;
}


int Ready(char *storage[]){
	printf("debug Storage %s %s %s %s" ,storage[0], storage[1], storage[2], storage[3]);
	char *Arrive;
	char *Inst;
	Arrive = strdup(storage[0]);
	Arrive = strtok(Arrive," ");
	printf("tempo de chegada %s \n" ,Arrive);
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
		//printf("print fora do ciclo %s", storage[1]);   //debug storage
		Ready(storage);
		fclose(ficheiro);
		}
		
	return 0;
		
	}
	
