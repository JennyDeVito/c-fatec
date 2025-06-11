/*faz a gravacao em arquivos*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
	setlocale(LC_ALL, "portuguese");

	FILE *fptr;
	char c, fname[21];

	printf("\nDigite o nome do arquivo: ");
	fgets(fname, sizeof(fname), stdin);
	fname[strcspn(fname, "\n")] = '\0';
	
	if((fptr=fopen(fname, "a+"))==NULL) {
		printf("\nO arquivo não pode ser aberto ou criado!");
	}
	else {
		printf("\nDigite o conteúdo do seu arquivo: \n");

		//a funcao getche nao funciona no meu Linux com gcc :(
		while((c = getchar()) != '\n') {
			fputc(c, fptr);
		}
	fclose(fptr);
	}

	return 0;
}	
