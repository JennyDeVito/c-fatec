/*grava strings em um arquivo*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main () {
	setlocale(LC_ALL, "portuguese");
	
	FILE *fptr;
	char linha[101], fname[21];

	printf("\nDigite o nome do arquivo que quer criar: ");
	fgets(fname, sizeof(fname), stdin);
	fname[strcspn(fname, "\n")] = '\0';

	if((fptr=fopen(fname, "a+")) == NULL) {
		printf("\nO arquivo não pôde ser criado/aberto!");
	}
	else {
		printf("\nDigite as linhas que quer incluir no arquivo e, quando\n");
		printf("terminar, em uma nova linha digite 'FIM' e tecle ENTER:\n");
		while(1){
			fgets(linha, sizeof(linha), stdin);
			if(strcmp(linha, "FIM\n") == 0) {
				break;
			}
			fputs(linha, fptr);
		}
		fclose(fptr);
	}
	return 0;
}
