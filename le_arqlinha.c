/*faz a leitura de arquivos linha a linha*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
	setlocale(LC_ALL, "portuguese");

	FILE *fptr;
	char linha[101], fname[21];

	printf("\nNome do arquivo para abrir: ");
	fgets(fname, sizeof(fname), stdin);
	fname[strcspn(fname, "\n")] = '\0';

	if((fptr=fopen(fname, "r")) == NULL) {
		printf("\nArquivo não pode ser aberto!");
	}
	else {
		while(fgets(linha, sizeof(linha), fptr) != NULL) {
			printf("%s", linha);
		}
		fclose(fptr);
	}
	return 0;
}
